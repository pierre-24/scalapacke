#include <stdlib.h>
#include <math.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>

int main(int argc, char* argv[]) {
    lapack_int iam, nprocs;
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);

    lapack_int sys_ctx, grid_ctx, grid_M = 2, grid_N = 2, loc_row, loc_col;

    // get the system context
    SCALAPACKE_blacs_get(0, 0, &sys_ctx);

    // create a (grid_M x grid_N) grid
    grid_ctx = sys_ctx;
    SCALAPACKE_blacs_gridinit(&grid_ctx, "R", grid_M, grid_N);

    // request my position in the grid
    SCALAPACKE_blacs_gridinfo(grid_ctx, &grid_M, &grid_N, &loc_row, &loc_col);

    if(loc_row >= 0 && loc_col >= 0) { // if I'm in grid
        lapack_int blk_size = 3, M=8, N = 8;

        // Starting from a MxN matrix, compute the shape of the local one, loc_Mxloc_N
        lapack_int loc_M = SCALAPACKE_numroc(M, blk_size, loc_row, 0, grid_M);
        lapack_int loc_N = SCALAPACKE_numroc(N, blk_size, loc_col, 0, grid_N);

        double* loc_A = calloc(loc_M * loc_N, sizeof(double));

        // create descriptor for loc_A
        lapack_int loc_LD = loc_M;
        lapack_int desc_A[9];
        SCALAPACKE_descinit(desc_A,
                            M, N, blk_size, blk_size,
                            0, 0, grid_ctx,
                            loc_LD);

        // fill array locally
        for(lapack_int loc_j=0; loc_j < loc_N; loc_j++) {
            lapack_int glob_j = SCALAPACKE_indxl2g(loc_j + 1, blk_size, loc_col, 0, grid_N);
            for(lapack_int loc_i=0; loc_i < loc_M; loc_i++) {
                lapack_int glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, grid_M) ;

                // set loc_A[loc_i,loc_j] with the content of A[glob_i, glob_j]
                loc_A[loc_j * loc_LD + loc_i] = 1 + .5 * fabs((double) (glob_i -  glob_j));
            }
        }


        free(loc_A);
    }

    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
