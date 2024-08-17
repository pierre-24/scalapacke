#include <stdio.h>
#include <stdlib.h>

#include "cblacs.h"
#include "cpblas.h"

int main() {
    int iam, nprocs, ctx_sys, ctx_all, nrows, ncols, myrow, mycol;

    // initialize MPI (via BLACS) & get context
    Cblacs_pinfo(&iam, &nprocs);
    Cblacs_get(0, 0, &ctx_sys);

    // set a grid for all processes
    // https://www.netlib.org/scalapack/slug/node71.html#secblacscontext
    ctx_all = ctx_sys;
    Cblacs_gridinit(&ctx_all, "R", 1, nprocs);

    // check grid
    Cblacs_gridinfo(ctx_all, &nrows, &ncols, &myrow, &mycol);
    printf("process %d :: on context #%d, I'm (%d, %d)\n", iam, ctx_all, myrow, mycol);

    // exit grids
    Cblacs_gridexit(ctx_all);

    // exit
    Cblacs_exit(0);

    return EXIT_SUCCESS;
}