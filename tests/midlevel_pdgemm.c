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
    lapack_int nprocs, ctx_sys, ctx_grid, grid_M, grid_N, glob_i, glob_j;
    lapack_int  iam, loc_row, loc_col, loc_M, loc_N, loc_LD, info;
    lapack_int desc_A[9];
    double *A, *I, *C; // A, I, and C are NxN matrices

    // seed
    srand(time(NULL));

    // initialize BLACS & system context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create a (grid_M x grid_N) grid
    grid_M = sqrt((double) nprocs);
    grid_N = nprocs / grid_M;
    ctx_grid = ctx_sys;
    SCALAPACKE_blacs_gridinit(&ctx_grid, "R", grid_M, grid_N);
    SCALAPACKE_blacs_gridinfo(ctx_grid, &grid_M, &grid_N, &loc_row, &loc_col);

    if(loc_row >= 0) { // if I'm in grid
        loc_M = SCALAPACKE_numroc(N, blk_size, loc_row, 0, grid_M);
        loc_N = SCALAPACKE_numroc(N, blk_size, loc_col, 0, grid_N);

        loc_LD =  loc_M;
        A = calloc(loc_M * loc_N, sizeof(double));
        I = calloc(loc_M * loc_N, sizeof(double));
        C = calloc(loc_M * loc_N, sizeof(double));

        // fill arrays locally
        for(lapack_int loc_j=0; loc_j < loc_N; loc_j++) {
            glob_j = SCALAPACKE_indxl2g(loc_j + 1, blk_size, loc_col, 0, grid_N);
            for(lapack_int loc_i=0; loc_i < loc_M; loc_i++) { // set A[i,j]
                glob_i = SCALAPACKE_indxl2g(loc_i + 1, blk_size, loc_row, 0, grid_M) ;
                A[loc_j * loc_LD + loc_i] = ((double) rand()) / INT_MAX;
                I[loc_j * loc_LD + loc_i] = (glob_i == glob_j);
            }
        }

        // create descriptor for A, I and C
        SCALAPACKE_descinit(desc_A,
                            N, N, blk_size, blk_size,
                            0, 0, ctx_grid,
                            loc_LD);

        // compute C = A * I
        SCALAPACKE_pdgemm("N", "N", N, N, N,
                          1., A, 1, 1, desc_A,
                          I, 1, 1, desc_A,
                          .0, C, 1, 1, desc_A
        );

        // compute A = C * I - A
        SCALAPACKE_pdgemm("N", "N", N, N, N,
                          1., C, 1, 1, desc_A,
                          I, 1, 1, desc_A,
                          -1., A, 1, 1, desc_A
        );

        // fetch the maximum (i.e., the 1-norm)
        double* work = (double*) calloc(loc_LD, sizeof(double));
        double max = SCALAPACKE_pdlange( "1", N, N, A, 1, 1, desc_A, work);

        if(iam == 0)
            printf("%f\n", max);

        free(A);
        free(I);
        free(C);
        free(work);
    }

    SCALAPACKE_blacs_exit(0);
    return EXIT_SUCCESS;
}
