/* Array broadcasting with PIGEMR2D.
 * Use a MxN matrix `A` with `A[i,j]=j * M + i`.
 * Create local arrays, `loc_A`, then transfer them to #0 in `glob_A`.
 * If `INDXL2G` was correctly used, elements of `glob_A` should be sequential.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>
#include <assert.h>

int main(int argc, char* argv[]) {
    // constant
    lapack_int M = 128, N = 96, blk_size = 32;
    // global
    lapack_int nprocs, ctx_sys, grid_ctx, ctx_0, glob_nrows, glob_ncols, glob_i, glob_j;
    // local
    lapack_int  iam, loc_row, loc_col, loc_nrows, loc_ncols, loc_ld;

    lapack_int desc_A[9], desc_dest[9];
    lapack_int *loc_A, *glob_A = NULL;

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create the grids
    glob_nrows = (lapack_int) sqrt((double) nprocs);
    glob_ncols = nprocs / glob_nrows;

    grid_ctx = ctx_sys;
    SCALAPACKE_blacs_gridinit(&grid_ctx, "R", glob_nrows, glob_ncols);
    SCALAPACKE_blacs_gridinfo(grid_ctx, &glob_nrows, &glob_ncols, &loc_row, &loc_col);

    ctx_0 = ctx_sys;
    SCALAPACKE_blacs_gridinit(&ctx_0, "R", 1, 1);

    if(loc_row >= 0) { // if I'm in grid
        // compute length and create arrays
        loc_nrows = SCALAPACKE_numroc(M, blk_size, loc_row, 0, glob_nrows);
        loc_ncols = SCALAPACKE_numroc(N, blk_size, loc_col, 0, glob_ncols);
        loc_ld = loc_nrows; // column major

        // create descriptor for A
        SCALAPACKE_descinit(desc_A, M, N, blk_size, blk_size, 0, 0, grid_ctx, loc_ld);

        loc_A = calloc(loc_nrows * loc_ncols, sizeof(lapack_int));
        if(loc_A == NULL) {
            printf("%d :: cannot allocate :(\n", iam);
            exit(EXIT_FAILURE);
        }

        // fill array locally
        for(lapack_int loc_j=0; loc_j < loc_ncols; loc_j++) {
            // translate local j to global j
            glob_j = SCALAPACKE_indxl2g(loc_j + 1, blk_size, loc_col, 0, glob_ncols) - 1;
            for(lapack_int loc_i=0; loc_i < loc_nrows; loc_i++) {
                glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, glob_nrows) - 1;
                loc_A[loc_j * loc_ld + loc_i] = glob_j * M + glob_i;
            }
        }

        // send A to process #0
        if(iam == 0) {
            glob_A = calloc(M * N, sizeof(lapack_int));

            if(glob_A == NULL) {
                printf("%d :: cannot allocate glob_A :(\n", iam);
                exit(EXIT_FAILURE);
            }

            SCALAPACKE_descinit(desc_dest, M, N, M, N, 0, 0, ctx_0, M);
        } else {
            desc_dest[1] = -1;
        }

        SCALAPACKE_pigemr2d(M, N, loc_A, 1, 1, desc_A, glob_A, 1, 1, desc_dest, grid_ctx);

        if(iam == 0) {
            // check that the elements are sequential
            for(lapack_int i=1; i < M * N; i++) {
                assert(glob_A[i-1] == glob_A[i] - 1);
            }

            free(glob_A);
        }

        // free
        free(loc_A);

        SCALAPACKE_blacs_gridexit(grid_ctx);
    } else
        printf("%d :: i'm out!\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
