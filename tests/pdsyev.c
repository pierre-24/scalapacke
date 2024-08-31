/* Inspired by https://wwwuser.gwdguser.de/~ohaan/ScaLAPACK_examples/demo_PDSYEV.f
 *
 * Compute the eigenvalues and eigenvectors of a NxN real symmetric matrix `A`, where: `A[i,j] = 1/(1+.5*fabs(i-j))`.
 * Check if they match by comparing with `|A * x_i - e_i * x_i|`, where `e_i` is the eigenvalue associated with `x_i`.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>

int main(int argc, char* argv[]) {
    // constant
    lapack_int N = 128, blk_size = 32, lwork;
    // global
    lapack_int nprocs, ctx_sys, glob_nrows, glob_ncols, glob_i, glob_j;
    // local
    lapack_int  iam, loc_row, loc_col, loc_nrows, loc_ncols, loc_lld, info;

    lapack_int desc_A[9], desc_r[9];
    double *A, *Ap, *X, *w, *r, *work;
    double norm_res, norm_X;

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
        Ap = calloc(loc_nrows * loc_ncols, sizeof(double));
        X = calloc(loc_nrows * loc_ncols, sizeof(double));
        w = calloc(N, sizeof(double ));
        r = calloc(loc_nrows, sizeof(double));

        if(A == NULL ||X == NULL || w == NULL) {
            printf("%d :: cannot allocate :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill array locally
        for(lapack_int loc_j=0; loc_j < loc_ncols; loc_j++) {
            // translate local j to global j
            glob_j = SCALAPACKE_indxl2g(loc_j + 1, blk_size, loc_col, 0, glob_ncols) - 1;
            for(lapack_int loc_i=0; loc_i < loc_nrows; loc_i++) {
                glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, glob_nrows) - 1;

                // set A[i,j]
                if(glob_i <= glob_j) {
                    A[loc_j * loc_nrows + loc_i] = 1. / (1. + .5 * fabs((double) (glob_i - glob_j)));
                    Ap[loc_j * loc_nrows + loc_i] = A[loc_j * loc_nrows + loc_i];
                }
            }
        }

        // create descriptor for A, X, and r
        SCALAPACKE_descinit(desc_A, N, N, blk_size, blk_size, 0, 0, ctx_sys, loc_lld);
        SCALAPACKE_descinit(desc_r, N, 1, blk_size, blk_size, 0, 0, ctx_sys, loc_lld);

        // request lwork
        double tmpw;
        SCALAPACKE_pdsyev_work("V", "U", N, Ap, 1, 1, desc_A, w, X, 1, 1, desc_A, &tmpw, -1);
        lwork = (lapack_int) tmpw;

        // compute the eigenvalues and vectors
        // NOTE: like dsyev(), the content of A is irremediably destroyed in the process :(
        work = calloc(lwork, sizeof(double ));
        info = SCALAPACKE_pdsyev_work("V", "U", N, Ap, 1, 1, desc_A, w, X, 1, 1, desc_A, work, lwork);

        if(info != 0) {
            printf("%d :: error: info is %d\n", iam, info);
            exit(EXIT_FAILURE);
        }

        double max_residual = .0f;
        double norm_A = SCALAPACKE_pdlange_work("F", N, N, A, 1, 1, desc_A, work);

        for(lapack_int i = 1; i <= N; i++) {
            // compute `r = A * x_i`
            // according to the doc of pdsyev, eigenvectors are located in columns
            SCALAPACKE_pdsymv("U", N,
                    1., A, 1, 1, desc_A,
                    X, 1, i, desc_A, 1,
                    .0, r, 1, 1, desc_r, 1
            );

            // compute `r = r - e_i * x_i`
            SCALAPACKE_pdaxpy(
                    N,
                    -w[i - 1], X, 1, i, desc_A, 1,
                    r, 1, 1, desc_r, 1
            );

            // compute norm of x_i and r
            norm_X = SCALAPACKE_pdlange_work( "F", N, 1, X, 1, i, desc_A, work);
            norm_res = SCALAPACKE_pdlange_work("F", N, 1, r, 1, 1, desc_r, work);
            double eps = SCALAPACKE_pdlamch(ctx_sys, "e");
            double residual = norm_res / (2 * norm_A * norm_X * eps); // might not be the correct residual :(

            if (residual > max_residual)
                max_residual = residual;

            if(iam == 0) {
                if(residual > 10) {
                    printf("%d :: residual for eigenvalue %d is %f > 10, aborting\n", iam, i, residual);
                    exit(EXIT_FAILURE);
                }
            }
        }

        if(iam == 0) {
            printf("%d :: largest residual is %f\n", iam, max_residual);
        }

        // free
        free(A);
        free(X);
        free(w);
        free(r);
        free(work);

        SCALAPACKE_blacs_gridexit(ctx_sys);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
