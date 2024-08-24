#ifndef HEADER_BLACS_H
#define HEADER_BLACS_H

/* Header by scalapack_files_create.create_cblacs
 * Generated: 2024-08-23 22:12:17.821283
 * Version scalapack_files_create.create_cblacs: https://github.com/pierre-24/scalapack-c-headers/tree/cbcccac4
 * Version scalapack: https://github.com/Reference-ScaLAPACK/scalapack/tree/0128dc24
 */

#include <mpi.h>

/* Macros defined in reference scalapack.
 * See https://github.com/Reference-ScaLAPACK/scalapack/blob/master/BLACS/SRC/Bdef.h
 */
#ifndef Int
#define Int int
#endif // Int

#ifndef F_VOID_FUNC
#define F_VOID_FUNC void
#endif // F_VOID_FUNC

#ifndef F_INT_FUNC
#define F_INT_FUNC Int
#endif // F_INT_FUNC

#ifndef F_DOUBLE_FUNC
#define F_DOUBLE_FUNC double
#endif // F_DOUBLE_FUNC

#ifndef F_CHAR
#define F_CHAR char*
#endif // F_CHAR


/* Declarations
 */
extern F_VOID_FUNC cgamn2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC dgamn2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC igamn2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, Int* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC sgamn2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC zgamn2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC cgamx2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC dgamx2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC igamx2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, Int* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC sgamx2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC zgamx2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC cgebr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC dgebr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC igebr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC sgebr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC zgebr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC cgebs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, const float* A, const Int* lda);
extern F_VOID_FUNC dgebs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, const double* A, const Int* lda);
extern F_VOID_FUNC igebs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, const Int* A, const Int* lda);
extern F_VOID_FUNC sgebs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, const float* A, const Int* lda);
extern F_VOID_FUNC zgebs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, const double* A, const Int* lda);
extern F_VOID_FUNC cgerv2d_(const Int* ConTxt, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC dgerv2d_(const Int* ConTxt, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC igerv2d_(const Int* ConTxt, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC sgerv2d_(const Int* ConTxt, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC zgerv2d_(const Int* ConTxt, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC cgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC dgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC igesd2d_(const Int* ConTxt, const Int* m, const Int* n, const Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC sgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC zgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC cgsum2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC dgsum2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC igsum2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC sgsum2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC zgsum2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC ctrbr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC dtrbr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC itrbr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC strbr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC ztrbr2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC ctrbs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const float* A, const Int* lda);
extern F_VOID_FUNC dtrbs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const double* A, const Int* lda);
extern F_VOID_FUNC itrbs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const Int* A, const Int* lda);
extern F_VOID_FUNC strbs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const float* A, const Int* lda);
extern F_VOID_FUNC ztrbs2d_(const Int* ConTxt, const F_CHAR scope, const F_CHAR top, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const double* A, const Int* lda);
extern F_VOID_FUNC ctrrv2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC dtrrv2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC itrrv2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC strrv2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC ztrrv2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern F_VOID_FUNC ctrsd2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC dtrsd2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC itrsd2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC strsd2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern F_VOID_FUNC ztrsd2d_(const Int* ConTxt, const F_CHAR uplo, const F_CHAR diag, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void blacs_abort_(const Int* ConTxt, const Int* ErrNo);
extern void blacs_barrier_(const Int* ConTxt, const F_CHAR scope);
extern void blacs_exit_(const Int* NotDone);
extern void blacs_freebuff_(const Int* ConTxt, const Int* wait);
extern void blacs_get_(const Int* ConTxt, const Int* what, Int* val);
extern void blacs_gridexit_(const Int* ConTxt);
extern void blacs_gridinfo_(const Int* ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol);
extern void blacs_gridinit_(Int* ConTxt, const F_CHAR order, const Int* nprow, const Int* npcol);
extern void blacs_gridmap_(Int* ConTxt, Int* usermap, const Int* ldup, const Int* nprow0, const Int* npcol0);
extern void blacs_pcoord_(const Int* ConTxt, const Int* nodenum, Int* prow, Int* pcol);
extern void blacs_pinfo_(Int* mypnum, Int* nprocs);
extern Int blacs_pnum_(const Int* ConTxt, const Int* prow, const Int* pcol);
extern void blacs_set_(const Int* ConTxt, const Int* what, Int* val);
extern void blacs_setup_(Int* mypnum, Int* nprocs);
extern MPI_Comm blacs2sys_handle_(const Int* BlacsCtxt);
extern Int sys2blacs_handle_(const MPI_Comm* SysCtxt);

#endif // HEADER_BLACS_H