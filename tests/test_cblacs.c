/* This is a (adapted) version of https://netlib.org/blacs/BLACS/Examples.html#HELLO.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "cblacs.h"

#ifdef FCALLS
int ZERO = 0, ONE = 1;
#endif

int main(int argc, char* argv[]) {
    int iam, nprocs, ctx_sys, nrows, ncols, myrow, mycol, icaller, itscol, itsrow;

    // initialize BLACS & system context
    #ifdef CCALLS
    Cblacs_pinfo(&iam, &nprocs);
    Cblacs_get(0, 0, &ctx_sys);
    #else
    blacs_pinfo_(&iam, &nprocs);
    blacs_get_(&ZERO, &ZERO, &ctx_sys);
    #endif

    // create a rectangular grid
    nrows = (int) sqrt((double) nprocs);
    ncols = nprocs / nrows;
    if(iam == 0)
        printf("0 :: rectangular grid with %d procs is %dx%d\n", nprocs, nrows, ncols);

    #ifdef CCALLS
    Cblacs_gridinit(&ctx_sys, "R", nrows, ncols);
    Cblacs_gridinfo(ctx_sys, &nrows, &ncols, &myrow, &mycol);
    #else
    blacs_gridinit_(&ctx_sys, "R", &nrows, &ncols);
    blacs_gridinfo_(&ctx_sys, &nrows, &ncols, &myrow, &mycol);
    #endif

	// communicate
    if(myrow >= 0) { // if I'm in grid
    	#ifdef CCALLS
        icaller = Cblacs_pnum(ctx_sys, myrow, mycol);
        #else
        icaller = blacs_pnum_(&ctx_sys, &myrow, &mycol);
        #endif

        if(iam == 0) { // parent process receive message from others
            for(int i=0; i < nrows; i++) {
                for(int j=0; j < ncols; j++) {
                    if(i != 0 || j != 0) {
                        // receive a 1x1 (general) matrix & check coordinates of process
                        #ifdef CCALLS
                        Cigerv2d(ctx_sys, 1, 1, &icaller, 1, i, j);
                        Cblacs_pcoord(ctx_sys, icaller, &itsrow, &itscol);
                        #else
                        igerv2d_(&ctx_sys, &ONE, &ONE, &icaller, &ONE, &i, &j);
                        blacs_pcoord_(&ctx_sys, &icaller, &itsrow, &itscol);
                        #endif

                        if(i != itsrow || j != itscol){
                            printf("%d :: imposter answered, %d is not at its correct position on the grid :(\n", iam, icaller);
                            exit(EXIT_FAILURE);
                        } else
                            printf("%d :: process %d answered correctly\n", iam, icaller);
                    }
                }
            }

        } else { // send process id as a 1x1 (general) matrix
            #ifdef CCALLS
            Cigesd2d(ctx_sys, 1, 1, &icaller, 1, 0, 0);
            #else
            igesd2d_(&ctx_sys, &ONE, &ONE, &icaller, &ONE, &ZERO, &ZERO);
            #endif
        }

        // exit grid
        #ifdef CCALLS
        Cblacs_gridexit(ctx_sys);
        #else
        blacs_gridexit_(&ctx_sys);
        #endif
    } else
        printf("%d :: I'm out of grid\n", iam);

    // finalize BLACS
    #ifdef CCALLS
    Cblacs_exit(0);
    #else
    blacs_exit_(&ZERO);
    #endif

    return EXIT_SUCCESS;
}
