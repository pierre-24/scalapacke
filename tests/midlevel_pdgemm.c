#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

#include <scalapacke_blacs.h>
#include <scalapacke_pblas.h>
#include <scalapacke.h>

int main(int argc, char* argv[]) {
    lapack_int N = 128, blk_size = 16;
    lapack_int nprocs, sys_ctx, grid_ctx, grid_M, grid_N, glob_i, glob_j;
    lapack_int  iam, loc_row, loc_col, loc_M, loc_N, loc_LD, info;
    lapack_int desc_A[9];
    double *loc_A, *loc_I, *loc_C; // loc_A, loc_I, and loc_C are NxN matrices

    // seed
    srand(time(NULL));

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &sys_ctx);

    // create a (grid_M x grid_N) grid
    grid_M = sqrt((double) nprocs);
    grid_N = nprocs / grid_M;
    grid_ctx = sys_ctx;
    SCALAPACKE_blacs_gridinit(&grid_ctx, "R", grid_M, grid_N);
    SCALAPACKE_blacs_gridinfo(grid_ctx, &grid_M, &grid_N, &loc_row, &loc_col);

    if(loc_row >= 0) { // if loc_I'm in grid
        loc_M = SCALAPACKE_numroc(N, blk_size, loc_row, 0, grid_M);
        loc_N = SCALAPACKE_numroc(N, blk_size, loc_col, 0, grid_N);

        loc_LD =  loc_M;
        loc_A = calloc(loc_M * loc_N, sizeof(double));
        loc_I = calloc(loc_M * loc_N, sizeof(double));
        loc_C = calloc(loc_M * loc_N, sizeof(double));

        // fill arrays locally
        for(lapack_int loc_j=0; loc_j < loc_N; loc_j++) {
            glob_j = SCALAPACKE_indxl2g(loc_j + 1, blk_size, loc_col, 0, grid_N);
            for(lapack_int loc_i=0; loc_i < loc_M; loc_i++) { // set loc_A[i,j]
                glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, grid_M) ;
                loc_A[loc_j * loc_LD + loc_i] = ((double) rand()) / INT_MAX;
                loc_I[loc_j * loc_LD + loc_i] = (glob_i == glob_j);
            }
        }

        // create descriptor for loc_A, loc_I and loc_C
        SCALAPACKE_descinit(desc_A,
                            N, N, blk_size, blk_size,
                            0, 0, grid_ctx,
                            loc_LD);

        // compute loc_C = loc_A * loc_I
        SCALAPACKE_pdgemm("N", "N", N, N, N,
                          1., loc_A, 1, 1, desc_A,
                          loc_I, 1, 1, desc_A,
                          .0, loc_C, 1, 1, desc_A
        );

        // compute loc_A = loc_C * loc_I - loc_A
        SCALAPACKE_pdgemm("N", "N", N, N, N,
                          1., loc_C, 1, 1, desc_A,
                          loc_I, 1, 1, desc_A,
                          -1., loc_A, 1, 1, desc_A
        );

        // fetch the maximum (i.e., the 1-norm)
        double* work = (double*) calloc(loc_LD, sizeof(double));
        double max = SCALAPACKE_pdlange("1", N, N, loc_A, 1, 1, desc_A, work);

        if(iam == 0)
            printf("%f\n", max);

        free(loc_A);
        free(loc_I);
        free(loc_C);
        free(work);
    }

    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
