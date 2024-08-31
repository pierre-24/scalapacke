/* Least-square problem inspired by https://numpy.org/doc/stable/reference/generated/numpy.linalg.lstsq.html
 * and https://netlib.org/lapack/lapacke.html.
 *
 * Fit a line `y = m*x^T + p` through M noisy data points of dimension `DIM`.
 * `m` and `x` are thus 1-by-`DIM` vectors.
 * The problem is rewritten in the form `Y = A * C` with:
 *
 * - `Y = [y]` (M-by-1 matrix),
 * - `A = [[x], 1]` (M-by-`DIM+1` matrix), and
 * - `C = [m, p]` (`DIM+1`by-1 matrix),
 *
 * then solved for C so that `|A*C - Y|_2` is minimal.
 *
 * Note: per specification, the solution is `C = tr(loc_y[0:DIM+1])`.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <math.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>

#define DIM 3
#define DOM_MIN -10
#define DOM_MAX 10
#define SD .25f
#define TRUE_M {.5f, 2.5f, -2.f}
#define TRUE_P 4.f

// get a random X, with all x[i] in [DOM_MIN, DOM_MAX]
void randx(float x[DIM]) {
    float range = DOM_MAX - DOM_MIN;
    for (int i = 0; i < DIM; ++i) {
        x[i] =  ((float) rand() / (float) RAND_MAX) * range + DOM_MIN;
    }
}

// get an approximate y
float approx_y(float x[DIM]) {
    float true_M[DIM]  = TRUE_M;
    float y = 0;
    for (int i = 0; i < DIM; ++i) {
        y +=  true_M[i] * x[i];
    }

    y += TRUE_P + ((float) rand() / (float) RAND_MAX) * SD * 2 - SD;

    return y;
}


int main(int argc, char* argv[]) {
    // constant
    lapack_int M = 256 /* number of points */, blk_size = 32, N = DIM + 1;

    // global
    lapack_int nprocs, ctx_sys, grid_ctx, glob_nrows, glob_ncols;

    // local
    lapack_int  iam, loc_row, loc_col, loc_A_nrows, loc_A_ncols, loc_A_ld, loc_y_nrows;
    lapack_int desc_A[9], desc_y[9];

    float *loc_A, *loc_y;

    // seed
    srand(time(NULL));

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create a linear grid
    glob_nrows = nprocs;
    glob_ncols = 1;

    grid_ctx = ctx_sys;
    SCALAPACKE_blacs_gridinit(&grid_ctx, "R", glob_nrows, glob_ncols);
    SCALAPACKE_blacs_gridinfo(grid_ctx, &glob_nrows, &glob_ncols, &loc_row, &loc_col);

    if(loc_row >= 0) { // if I'm in grid
        // create A
        loc_A_nrows = SCALAPACKE_numroc(M, blk_size, loc_row, 0, glob_nrows);
        loc_A_ncols = SCALAPACKE_numroc(N, blk_size, loc_col, 0, glob_ncols);
        loc_A_ld = loc_A_nrows; // column major

        // create descriptor for A
        SCALAPACKE_descinit(desc_A, M, N, blk_size, blk_size, 0, 0, grid_ctx, loc_A_ld);

        // create y
        loc_y_nrows = SCALAPACKE_numroc(M, blk_size, loc_row, 0, glob_nrows);

        // create descriptor for y
        SCALAPACKE_descinit(desc_y, M, 1, blk_size, blk_size, 0, 0, grid_ctx, loc_A_ld);

        loc_A = calloc(loc_A_nrows * loc_A_ncols, sizeof(lapack_int));
        loc_y = calloc(loc_y_nrows, sizeof(lapack_int));
        if(loc_y == NULL || loc_A == NULL) {
            printf("%d :: cannot allocate :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill array locally
        for(lapack_int loc_i=0; loc_i < loc_A_nrows; loc_i++) {
            float x[DIM];
            randx(x);
            float y = approx_y(x);
            for (int i = 0; i < DIM; ++i) {
                loc_A[i * loc_A_ld + loc_i] = x[i]; // TODO: not good for data locality :(
            }
            loc_A[DIM * loc_A_ld + loc_i] = 1;
            loc_y[loc_i] = y;
        }

        // request lwork
        float request;
        SCALAPACKE_psgels_work(
                "N", M, N, 1,
                loc_A, 1, 1, desc_A,
                loc_y, 1, 1, desc_y,
                &request, -1);

        // compute
        lapack_int lwork = (lapack_int) request;
        float* work = calloc(lwork, sizeof(float ));
        SCALAPACKE_psgels_work(
                "N", M, N, 1,
                loc_A, 1, 1, desc_A,
                loc_y, 1, 1, desc_y,
                work, lwork);

        // check
        if(iam == 0) {
            float diff, max_diff = .0f;
            float true_M[DIM] = TRUE_M;
            for (int i = 0; i < DIM; ++i) {
                diff = fabsf(loc_y[i] - true_M[i]);
                assert(diff < SD);
                if(diff > max_diff)
                    max_diff = diff;
            }

            diff = fabsf(loc_y[DIM] - TRUE_P);
            assert(diff < SD);
            if(diff > max_diff)
                max_diff = diff;

            printf("%d :: maximum difference on coefficients is %f\n", iam, max_diff);
        }

        // free
        free(work);
        free(loc_y);
        free(loc_A);

        SCALAPACKE_blacs_gridexit(grid_ctx);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
