#include <stdio.h>
#include <stdlib.h>

#include "cblacs_fcall.h"

int zero = 0, one = 1;

int main() {
    int iam, nprocs, ctx_sys, ctx_all, nrows, ncols, myrow, mycol;

    // initialize MPI (via BLACS) & get context
    blacs_pinfo_(&iam, &nprocs);
    blacs_get_(&zero, &zero, &ctx_sys);

    // set a grid for all processes
    // https://www.netlib.org/scalapack/slug/node71.html#secblacscontext
    ctx_all = ctx_sys;
    blacs_gridinit_(&ctx_all, "R", &one, &nprocs);

    // check grid
    blacs_gridinfo_(&ctx_all, &nrows, &ncols, &myrow, &mycol);
    printf("%lld :: On context %lld, I'm (%lld, %lld)\n", iam, ctx_all, myrow, mycol);

    // exit grids
    blacs_gridexit_(&ctx_all);

    // exit
    blacs_exit_(&zero);

    return EXIT_SUCCESS;
}