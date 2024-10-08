/* Test inspired by https://netlib.org/blacs/BLACS/Examples.html#HELLO.
 *
 * Use `?gerv2d` and `?gesd2d` to communicate between processes.
 * Process at (0,0) requests all others on the grid to give them their process id, and checks that everyone answers the call.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <scalapacke_blacs.h>

int main(int argc, char* argv[]) {
    lapack_int iam, nprocs, ctx_sys, nrows, ncols, myrow, mycol, icaller, itscol, itsrow;

    // initialize BLACS & get default context
    SCALAPACKE_blacs_pinfo(&iam, &nprocs);
    SCALAPACKE_blacs_get(0, 0, &ctx_sys);

    // create a rectangular grid
    nrows = (lapack_int) sqrt((double) nprocs);
    ncols = nprocs / nrows;
    if(iam == 0)
        printf("0 :: rectangular grid with %d procs is %dx%d\n", nprocs, nrows, ncols);

    // create a grid and check where I am
    SCALAPACKE_blacs_gridinit(&ctx_sys, "R", nrows, ncols);
    SCALAPACKE_blacs_gridinfo(ctx_sys, &nrows, &ncols, &myrow, &mycol);

    if(myrow >= 0) { // if I'm in grid
        // get process id (equivalent to `iam`)
        icaller = SCALAPACKE_blacs_pnum(ctx_sys, myrow, mycol);

        if(iam == 0) { // parent process receive message from others
            for(lapack_int i=0; i < nrows; i++) {
                for(lapack_int j=0; j < ncols; j++) {
                    if(i != 0 || j != 0) {
                        // receive a 1x1 (general) matrix
                        SCALAPACKE_igerv2d(ctx_sys,
                                 1, 1, /* 1x1 array */
                                 &icaller, /* start of the array*/
                                 1, /* lda */
                                 i, j /* receive from process at (i, j) on the grid */
                                 );

                        // is it really the right process who answered? Compute its coordinate on the grid and check it matches
                        SCALAPACKE_blacs_pcoord(ctx_sys, icaller, &itsrow, &itscol);

                        if(i != itsrow || j != itscol)
                            printf("%d :: imposter answered, %d is not at its correct position on the grid :(\n", iam, icaller);
                        else
                            printf("%d :: process %d answered correctly\n", iam, icaller);
                    }
                }
            }

        } else {
            // send process id as a 1x1 (general) matrix
            SCALAPACKE_igesd2d(ctx_sys,
                     1, 1, /* 1x1 array */
                     &icaller, /* start of the array */
                     1, /* lda */
                     0, 0 /* send to process at (0, 0) on the grid */
                     );
        }

        // exit grids
        SCALAPACKE_blacs_gridexit(ctx_sys);
    } else
        printf("%d :: I'm out of grid\n", iam);

    // finalize BLACS
    SCALAPACKE_blacs_exit(0);

    return EXIT_SUCCESS;
}
