#include <stdio.h>
#include <stdlib.h>

#include "cblacs.h"
#include "cpblas.h"

int ZERO = 0, ONE = 1;

int main() {
    int iam, nprocs, ctx_sys, ctx_all, nrows, ncols, myrow, mycol;

    // initialize MPI (via BLACS) & get context
    blacs_pinfo_(&iam, &nprocs);
    blacs_get_(&ZERO, &ZERO, &ctx_sys);

    // set a grid for all processes
    // https://www.netlib.org/scalapack/slug/node71.html#secblacscontext
    ctx_all = ctx_sys;
    blacs_gridinit_(&ctx_all, "R", &ONE, &nprocs);

    // check grid
    blacs_gridinfo_(&ctx_all, &nrows, &ncols, &myrow, &mycol);
    printf("process %d :: on context #%d, I'm (%d, %d)\n", iam, ctx_all, myrow, mycol);

    // exit grids
    blacs_gridexit_(&ctx_all);

    // exit
    blacs_exit_(&ZERO);

    return EXIT_SUCCESS;
}