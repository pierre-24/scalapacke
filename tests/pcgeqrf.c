/* Inspired by https://netlib.org/lapack/lapacke.html
 *
 * Use CGEQRF to compute the QR factorization of a matrix.
 * Then, build Q and check it is hermitian by reporting the residual of `trc(Q) * Q - I`,
 * where `trc(Q)` is the conjugate transpose of `Q`.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>

#define MAX(a, b) (((a) < (b)) ? (b):(a))

/* TODO: think a little longer about all that to define a useful API
 */
typedef struct procinfo_ {
    lapack_int grid_ctx, grid_M, grid_N, myrow, mycol;
} scalapack_proc_info;

void proc_info_gridinit(lapack_int ctx_sys, lapack_int M, lapack_int N, scalapack_proc_info* pinfo) {
    lapack_int ctx = ctx_sys;
    SCALAPACKE_blacs_gridinit(&ctx, "R", M, N);

    pinfo->grid_ctx = ctx;
    SCALAPACKE_blacs_gridinfo(ctx, &(pinfo->grid_M), &(pinfo->grid_N), &(pinfo->myrow), &(pinfo->mycol));
}

typedef struct local_matrix_ {
    scalapack_proc_info* pinfo;

    lapack_int M;
    lapack_int N;
    lapack_int nrows;
    lapack_int ncols;
    lapack_int ld;
    lapack_int blk_size;
    lapack_int desc[9];
} scalapack_LA_info;


void LA_info_create(scalapack_proc_info* pinfo, lapack_int M, lapack_int N, lapack_int blk_size, scalapack_LA_info *ainfo) {
    ainfo->pinfo = pinfo;

    ainfo->M = M;
    ainfo->N = N;
    ainfo->blk_size = blk_size;
    ainfo->nrows = SCALAPACKE_numroc(M, blk_size, pinfo->myrow, 0, pinfo->grid_M);
    ainfo->ncols = SCALAPACKE_numroc(N, blk_size, pinfo->mycol, 0, pinfo->grid_N);
    ainfo->ld = ainfo->nrows; // column major

    SCALAPACKE_descinit(ainfo->desc, ainfo->M, ainfo->N, ainfo->blk_size, ainfo->blk_size, 0, 0, ainfo->pinfo->grid_ctx, ainfo->ld);
}

void get_global_indices(scalapack_LA_info* ainfo, const lapack_int loc_i, const lapack_int loc_j, lapack_int* glob_i, lapack_int* glob_j) {
    *glob_i = SCALAPACKE_indxl2g(loc_i + 1, ainfo->blk_size, ainfo->pinfo->myrow, 0, ainfo->pinfo->grid_M) - 1;
    *glob_j = SCALAPACKE_indxl2g(loc_j + 1, ainfo->blk_size, ainfo->pinfo->mycol, 0, ainfo->pinfo->grid_N) - 1;
}

int main(int argc, char* argv[]) {
    // constants
    lapack_int M= 128, N = 96, blk_size = 32;
    // global
    lapack_int nprocs, ctx_sys, grid_M, grid_N;
    // local
    lapack_int iam;

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create the grid
    scalapack_proc_info pinfo;
    grid_M = (lapack_int) sqrt((double) nprocs);
    grid_N = nprocs / grid_M;
    proc_info_gridinit(ctx_sys, grid_M, grid_N, &pinfo);

    if(pinfo.myrow >= 0 && pinfo.mycol >= 0) { // if I'm in grid

        // create loc_A
        scalapack_LA_info loc_A_info;
        LA_info_create(&pinfo, M, N, blk_size, &loc_A_info);

        lapack_complex_float* loc_A = calloc(loc_A_info.nrows * loc_A_info.ncols, sizeof(lapack_complex_float));

        if(loc_A == NULL) {
            printf("%d :: cannot allocate loc_A :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill array locally
        for(lapack_int loc_j=0; loc_j < loc_A_info.ncols; loc_j++) {
            for(lapack_int loc_i=0; loc_i < loc_A_info.nrows; loc_i++) {
                lapack_int glob_i, glob_j;
                get_global_indices(&loc_A_info, loc_i, loc_j, &glob_i, &glob_j);
                loc_A[loc_j * loc_A_info.ld + loc_i] = lapack_make_complex_float(glob_i + 1, glob_j + 1);
            }
        }

        // create tau
        lapack_complex_float* tau = calloc(N, sizeof(lapack_complex_float));

        // request lwork
        lapack_complex_float query;
        SCALAPACKE_pcgeqrf_work(M, N, loc_A, 1, 1, loc_A_info.desc, tau, &query, -1);
        lapack_int lwork = (lapack_int) lapack_complex_double_real(query);
        SCALAPACKE_pcungqr_work(M, N, N, loc_A, 1, 1, loc_A_info.desc, tau, &query, -1);
        lwork = MAX(lwork, (lapack_int) lapack_complex_double_real(query));

        // make Q
        lapack_complex_float* work = calloc(lwork, sizeof(lapack_complex_float));
        SCALAPACKE_pcgeqrf_work(M, N, loc_A, 1, 1, loc_A_info.desc, tau, work, lwork);
        SCALAPACKE_pcungqr_work(M, N, N, loc_A, 1, 1, loc_A_info.desc, tau, work, lwork);

        // create loc_R
        scalapack_LA_info loc_R_info;
        LA_info_create(&pinfo, N, N, blk_size, &loc_R_info);

        lapack_complex_float* loc_R = calloc(loc_R_info.nrows * loc_R_info.ncols, sizeof(lapack_complex_float));

        if(loc_R == NULL) {
            printf("%d :: cannot allocate loc_R :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill array locally, set R[i,j] = -1 if i==j else 0
        for(lapack_int loc_j=0; loc_j < loc_R_info.ncols; loc_j++) {
            for(lapack_int loc_i=0; loc_i < loc_R_info.nrows; loc_i++) {
                lapack_int glob_i, glob_j;
                get_global_indices(&loc_R_info, loc_i, loc_j, &glob_i, &glob_j);

                // set loc_A[i,j]
                if(glob_i == glob_j) {
                    loc_R[loc_j * loc_R_info.ld + loc_i] = lapack_make_complex_float(-1, 0);
                }
            }
        }

        // compute R = |trc(A) * A + R|
        lapack_complex_float ONE = lapack_make_complex_float(1, 0);
        SCALAPACKE_pcgemm(
                "C", "N", N, N, M,
                ONE, loc_A, 1, 1, loc_A_info.desc,
                loc_A, 1, 1, loc_A_info.desc,
                ONE, loc_R, 1, 1, loc_R_info.desc);

        // compute residual
        float* rwork = calloc(loc_A_info.ld, sizeof(float ));
        float norm_A = SCALAPACKE_pclange_work("F", M, N, loc_A, 1, 1, loc_A_info.desc, rwork);
        float norm_res = SCALAPACKE_pclange_work("F", N, N, loc_R, 1, 1, loc_R_info.desc, rwork);
        float eps = SCALAPACKE_pslamch(pinfo.grid_ctx, "e");
        float residual = norm_res / (2 * norm_A * norm_A * eps);

        if(iam == 0) {
            if (residual > 1.f) {
                printf("%d :: residual is %f > 1, aborting\n", iam, residual);
                exit(EXIT_FAILURE);
            } else {
                printf("%d :: residual is %f\n", iam, residual);
            }
        }

        // free
        free(loc_R);
        free(work);
        free(rwork);
        free(tau);
        free(loc_A);

        SCALAPACKE_blacs_gridexit(pinfo.grid_ctx);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
