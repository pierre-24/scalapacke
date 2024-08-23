/* Inspired by https://github.com/cjf00000/tests/blob/master/mkl/pblas3_d_example.c.
 *
 * Compute product of two NxN matrices, `C = A * B`,
 * and then check the residual `r = |B - inv(A) * C|`, where `inv(A)` is the inverse of `A`.
 *
 * In practice,
 *
 * - `N = floor(sqrt(P)) * BLK_SIZE * BLK_PER_PROC`,
 *
 *    where `P` is the number of processors, `BLK_SIZE` is the block size and `BLK_PER_PROC` is the number of bloc per proc (> 1).
 *
 * - `A` is an orthonormal matrix (similar to a Householder transformation) defined by:
 *
 *   `A[i,j] = (N-j-1 == i ? 1:0) - 2 * (N-j-1) * i / M`, where `M = N * (N-1) * (2 * N - 1) / 6`.
 *
 *   Therefore `inv(A) = tr(A)`, where `tr(A)` is the transpose of `A`.
 *
 * - `B` is a random matrix.
 *
 * Thus, the residual becomes `r = |B - tr(A) * C|`.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <limits.h>

#include <mkl_blacs.h>
#include <mkl_pblas.h>
#include <mkl_scalapack.h>

#define BLK_SIZE 32
#define BLK_PER_PROC 2

MKL_INT I_ZERO = 0, I_ONE = 1;
double D_ONE = 1.0, D_ZERO = 0.0, D_M_ONE = -1.0;

extern MKL_INT indxl2g_(MKL_INT* INDXGLOB, MKL_INT* NB, MKL_INT* IPROC, MKL_INT* ISRCPROC, MKL_INT* NPROCS);

int main(int argc, char* argv[]) {
    // constant
    MKL_INT N, blk_size = BLK_SIZE, M;
    // global
    MKL_INT nprocs, ctx_sys, glob_nrows, glob_ncols, glob_i, glob_j;
    // local
    MKL_INT  iam, loc_row, loc_col, loc_nrows, loc_ncols, loc_lld, info;

    MKL_INT desc_A[9];
    double *A, *B, *C, *work;
    double norm_A, norm_B, norm_res;

    // seed
    srand(time(NULL));

    // initialize BLACS & system context
    blacs_pinfo(&iam, &nprocs);
    blacs_get(&I_ZERO, &I_ZERO, &ctx_sys);

    // create the grid
    glob_nrows = (MKL_INT) sqrt((double) nprocs);
    glob_ncols = nprocs / glob_nrows;
    N = glob_nrows * BLK_SIZE * BLK_PER_PROC;
    M = N * (N-1) * (2 * N - 1) / 6;

    blacs_gridinit(&ctx_sys, "R", &glob_nrows, &glob_ncols);
    blacs_gridinfo(&ctx_sys, &glob_nrows, &glob_ncols, &loc_row, &loc_col);

    if(iam == 0)
        printf("%d :: grid is %dx%d, matrix is %dx%d\n", iam, glob_nrows, glob_ncols, N, N);

    if(loc_row >= 0) { // if I'm in grid
        // compute length and create arrays
        loc_nrows = numroc_(&N, &blk_size, &loc_row, &I_ZERO, &glob_nrows);
        loc_ncols = numroc_(&N, &blk_size, &loc_col, &I_ZERO, &glob_ncols);
        loc_lld =  loc_nrows;
        A = calloc(loc_nrows * loc_ncols, sizeof(double));
        B = calloc(loc_nrows * loc_ncols, sizeof(double));
        C = calloc(loc_nrows * loc_ncols, sizeof(double));

        if(A == NULL || B == NULL || C == NULL) {
            printf("%d :: cannot allocate :(\n", iam);
            exit(EXIT_FAILURE);
        } else {
            printf("%d :: local matrix is %dx%d\n", iam, loc_nrows, loc_ncols);
        }

        // fill arrays locally
        for(MKL_INT loc_j=1; loc_j <= loc_ncols; loc_j++) { /* FORTRAN STARTS AT ONE !!!!!!!!! */
            // translate local j to global j
            // see https://netlib.org/scalapack/explore-html/d4/deb/indxl2g_8f_source.html
            glob_j = indxl2g_(&loc_j, &blk_size, &loc_col, &I_ZERO, &glob_ncols) - 1;
            for(MKL_INT loc_i=1; loc_i <= loc_nrows; loc_i++) {
                glob_i = indxl2g_(&loc_i, &blk_size, &loc_row, &I_ZERO, &glob_nrows) - 1;

                // set A[i,j]
                A[(loc_j - 1) * loc_nrows + (loc_i - 1)] = ((N - glob_j - 1) == glob_i ? 1.0 : 0.0) - (double) (2 * glob_i * (N - glob_j - 1)) / ((double) M);
                B[(loc_j - 1) * loc_nrows + (loc_i - 1)] = ((double) rand()) / INT_MAX;
            }
        }

        // create descriptor for A, B and C
        // note: no need to use different descriptor if matrices share the same size and are distributed similarly
        descinit_(desc_A, &N, &N, &blk_size, &blk_size, &I_ZERO, &I_ZERO, &ctx_sys, &loc_lld, &info);

        // compute norm of A and B
        // see https://www.ibm.com/docs/en/pessl/5.5?topic=subroutines-pdlange-pzlange-general-matrix-norm
        work = (double*) calloc(loc_nrows, sizeof(double));
        norm_A = pdlange_( "F", &N, &N, A, &I_ONE, &I_ONE, desc_A, work);
        norm_B = pdlange_( "F", &N, &N, B, &I_ONE, &I_ONE, desc_A, work);

        // compute C = A * B
        // see https://www.ibm.com/docs/en/pessl/5.5?topic=lps-pdgemm-pzgemm-matrix-matrix-product-general-matrix-its-transpose-its-conjugate-transpose
        pdgemm("N", "N", &N, &N, &N,
               &D_ONE, A, &I_ONE, &I_ONE, desc_A,
               B, &I_ONE, &I_ONE, desc_A,
               &D_ZERO, C, &I_ONE, &I_ONE, desc_A
        );

        // compute B = tr(A) * C - B
        pdgemm("T", "N", &N, &N, &N,
               &D_ONE, A, &I_ONE, &I_ONE, desc_A,
               C, &I_ONE, &I_ONE, desc_A, &D_M_ONE,
               B, &I_ONE, &I_ONE, desc_A
        );

        // compute the norm of B & residual
        norm_res = pdlange_( "F", &N, &N, B, &I_ONE, &I_ONE, desc_A, work);
        double eps = pdlamch_(&ctx_sys, "e");
        double residual = norm_res / (2 * norm_A * norm_B * eps);

        if(iam == 0)
            printf("%d :: r = %f\n", iam, residual);

        // free
        free(A);
        free(B);
        free(C);
        free(work);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    blacs_exit(&I_ZERO);
    return EXIT_SUCCESS;
}
