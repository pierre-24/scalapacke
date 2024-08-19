/* Inspired by https://github.com/cjf00000/tests/blob/master/mkl/pblas3_d_example.c.
 *
 * Compute product of two NxN matrices, `C = A * B`,
 * and then check the residual `r = |B - inv(A) * C|`, where `inv(A)` is the inverse of `A`.
 *
 * In practice,
 *
 * - `N = floor(sqrt(P)) * BLK_SIZE * 2`, where `P` is the number of processors and `BLK_SIZE` is the block size.
 *
 * - `A` is an orthonormal matrix (similar to an Householder transformation) defined by:
 *
 *   `A[i,j] = (N-i-1 == j ? 1:0) - 1 * (N-i-1) * j / M`, where `M = N * (N-1) * (2 * N - 1) / 6`.
 *
 *   Therefore `inv(A) = tr(A)`, where `tr(A)` is the transpose of `A`.
 *
 * - `B` is a random matrix.
 *
 * Thus the residual becomes `r = |B - tr(A) * C|`.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "cblacs.h"
#include "cpblas.h"

#define BLK_SIZE 4
#define BLK_PER_PROC 2

// borrowed from scalapack, will be added latter
extern int numroc_(int*, int*, int*, int*, int*);
extern void descinit_(int *desc, const int *m,  const int *n, const int *mb, const int *nb, const int *irsrc, const int *icsrc, const int *ictxt, const int *lld, int *info);
extern int indxg2l_(int* INDXGLOB, int* NB, int* IPROC, int* ISRCPROC, int* NPROCS);
extern int indxg2p_(int* INDXGLOB, int* NB, int* IPROC, int* ISRCPROC, int* NPROCS);
extern int indxl2g_(int* INDXGLOB, int* NB, int* IPROC, int* ISRCPROC, int* NPROCS);

#ifdef FCALLS
int ZERO = 0, ONE = 1;
#endif

int main(int argc, char* argv[]) {
	int iam, nprocs, ctx_sys, nrows, ncols, myrow, mycol, N, blk_size = BLK_SIZE, info, my_Np, my_Nq, lld, myi, myj;
	int desc_A[9], desc_B[9], desc_C[9];
	double *A, *B, *C;

    // initialize BLACS & system context
    #ifdef CCALLS
    Cblacs_pinfo(&iam, &nprocs);
    Cblacs_get(0, 0, &ctx_sys);
    #else
    blacs_pinfo_(&iam, &nprocs);
    blacs_get_(&ZERO, &ZERO, &ctx_sys);
    #endif

    // create the grid
    nrows = (int) sqrt((double) nprocs);
    ncols = nprocs / nrows;
    N = nrows * BLK_SIZE * BLK_PER_PROC;

    #ifdef CCALLS
    Cblacs_gridinit(&ctx_sys, "R", nrows, ncols);
    Cblacs_gridinfo(ctx_sys, &nrows, &ncols, &myrow, &mycol);
    #else
    blacs_gridinit_(&ctx_sys, "R", &nrows, &ncols);
    blacs_gridinfo_(&ctx_sys, &nrows, &ncols, &myrow, &mycol);
    #endif

    if(iam == 0)
        printf("%d :: grid is %dx%d, matrix is %dx%d\n", iam, nrows, ncols, N, N);

    #ifdef FCALLS
    if(myrow >= 0) { // if I'm in grid

    }
    #endif

    // finalize BLACS
    #ifdef CCALLS
    Cblacs_exit(0);
    #else
    blacs_exit_(&ZERO);
    #endif

    return EXIT_SUCCESS;
}