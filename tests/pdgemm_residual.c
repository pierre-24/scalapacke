/* Test inspired by https://github.com/cjf00000/tests/blob/master/mkl/pblas3_d_example.c.
 *
 * Compute product of two NxN matrices, `C = A * B`,
 * and then check the residual `r = |B - inv(A) * C|`, where `inv(A)` is the inverse of `A`.
 *
 * In practice,
 *
 * - `A` is an orthonormal matrix (similar to a Householder transformation) defined by:
 *
 *   `A[i,j] = (N-j-1 == i ? 1:0) - 2 * (N-j-1) * i / M`, where `M = N * (N-1) * (2 * N - 1) / 6`.
 *
 *   Therefore `inv(A) = tr(A)`, where `tr(A)` is the transpose of `A`.
 *   And thus, the residual becomes `r = |B - tr(A) * C|`.
 *
 * - `B` is a random matrix. Here, `B[i,j] = j * N + j`.
 * T
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>


int main(int argc, char* argv[]) {
    // constants
    lapack_int N = 256, blk_size = 32, M  = N * (N-1) * (2 * N - 1) / 6;

    // global
    lapack_int nprocs, ctx_sys, glob_nrows, glob_ncols, glob_i, glob_j;
    double norm_A, norm_B, norm_res;

    // local
    lapack_int  iam, loc_row, loc_col, loc_nrows, loc_ncols, loc_lld;
    lapack_int desc_distributed[9];
    double *A, *B, *C, *work;

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create the grid
    glob_nrows = (lapack_int) sqrt((double) nprocs);
    glob_ncols = nprocs / glob_nrows;

    SCALAPACKE_blacs_gridinit(&ctx_sys, "R", glob_nrows, glob_ncols);
    SCALAPACKE_blacs_gridinfo(ctx_sys, &glob_nrows, &glob_ncols, &loc_row, &loc_col);

    if(loc_row >= 0) { // if I'm in grid
        // compute length and create arrays
        loc_nrows = SCALAPACKE_numroc(N, blk_size, loc_row, 0, glob_nrows);
        loc_ncols = SCALAPACKE_numroc(N, blk_size, loc_col, 0, glob_ncols);
        loc_lld = loc_nrows; // column major
        A = calloc(loc_nrows * loc_ncols, sizeof(double));
        B = calloc(loc_nrows * loc_ncols, sizeof(double));
        C = calloc(loc_nrows * loc_ncols, sizeof(double));

        if(A == NULL || B == NULL || C == NULL) {
            printf("%d :: cannot allocate :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill arrays locally
        for(lapack_int loc_j=0; loc_j < loc_ncols; loc_j++) {
            // translate local j to global j
            glob_j = SCALAPACKE_indxl2g(loc_j + 1 /* fortran starts at one */, blk_size, loc_col, 0, glob_ncols) - 1;
            for(lapack_int loc_i=0; loc_i < loc_nrows; loc_i++) {
                glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, glob_nrows) - 1;

                // set A[i,j] and B[i,j]
                A[loc_j * loc_nrows + loc_i] = ((N - glob_j - 1) == glob_i ? 1.0 : 0.0) - (double) (2 * glob_i * (N - glob_j - 1)) / ((double) M);
                B[loc_j * loc_nrows + loc_i] = glob_j * N + glob_i;
            }
        }

        // create descriptor for A, B and C
        SCALAPACKE_descinit(desc_distributed, N, N, blk_size, blk_size, 0, 0, ctx_sys, loc_lld);

        // compute norm of A and B
        work = (double*) calloc(loc_lld, sizeof(double));
        norm_A = SCALAPACKE_pdlange("F", N, N, A, 1, 1, desc_distributed, work);
        norm_B = SCALAPACKE_pdlange("F", N, N, B, 1, 1, desc_distributed, work);

        // compute C = A * B
        SCALAPACKE_pdgemm("N", "N", N, N, N,
                          1., A, 1, 1, desc_distributed,
                          B, 1, 1, desc_distributed,
                          .0, C, 1, 1, desc_distributed
        );

        // compute B = tr(A) * C - B
        SCALAPACKE_pdgemm("T", "N", N, N, N,
                          1.0, A, 1, 1, desc_distributed,
                          C, 1, 1, desc_distributed,
                          -1., B, 1, 1, desc_distributed
        );

        // compute the norm of B & residual
        norm_res = SCALAPACKE_pdlange("F", N, N, B, 1, 1, desc_distributed, work);
        double eps = SCALAPACKE_pdlamch(ctx_sys, "e");
        double residual = norm_res / (2 * norm_A * norm_B * eps);

        if(iam == 0) {
            if (residual > 1.f) {
                printf("%d :: residual is %f > 1, aborting\n", iam, residual);
                exit(EXIT_FAILURE);
            } else {
                printf("%d :: residual is %f\n", iam, residual);
            }
        }

        // free
        free(A);
        free(B);
        free(C);
        free(work);

        SCALAPACKE_blacs_gridexit(ctx_sys);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
