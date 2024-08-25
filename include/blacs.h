#ifndef HEADER_BLACS_H
#define HEADER_BLACS_H

#include <mpi.h>

/* defines
 */
#ifndef Int
#define Int int
#endif // Int

/* Declarations
 */
extern void cgamn2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void dgamn2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void igamn2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, Int* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void sgamn2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void zgamn2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void cgamx2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void dgamx2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void igamx2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, Int* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void sgamx2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void zgamx2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, Int* rA, Int* cA, const Int* ldia, const Int* rdest, const Int* cdest);
extern void cgebr2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void dgebr2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void igebr2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void sgebr2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void zgebr2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void cgebs2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, const float* A, const Int* lda);
extern void dgebs2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, const double* A, const Int* lda);
extern void igebs2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, const Int* A, const Int* lda);
extern void sgebs2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, const float* A, const Int* lda);
extern void zgebs2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, const double* A, const Int* lda);
extern void cgerv2d_(const Int* ConTxt, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void dgerv2d_(const Int* ConTxt, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void igerv2d_(const Int* ConTxt, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void sgerv2d_(const Int* ConTxt, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void zgerv2d_(const Int* ConTxt, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void cgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void dgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void igesd2d_(const Int* ConTxt, const Int* m, const Int* n, const Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void sgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void zgesd2d_(const Int* ConTxt, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void cgsum2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void dgsum2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void igsum2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void sgsum2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void zgsum2d_(const Int* ConTxt, const char* scope, const char* top, const Int* m, const Int* n, double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void ctrbr2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void dtrbr2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void itrbr2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void strbr2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void ztrbr2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void ctrbs2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, const float* A, const Int* lda);
extern void dtrbs2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, const double* A, const Int* lda);
extern void itrbs2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, const Int* A, const Int* lda);
extern void strbs2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, const float* A, const Int* lda);
extern void ztrbs2d_(const Int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int* m, const Int* n, const double* A, const Int* lda);
extern void ctrrv2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void dtrrv2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void itrrv2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, Int* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void strrv2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, float* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void ztrrv2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, double* A, const Int* lda, const Int* rsrc, const Int* csrc);
extern void ctrsd2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void dtrsd2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void itrsd2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, const Int* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void strsd2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, const float* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void ztrsd2d_(const Int* ConTxt, const char* uplo, const char* diag, const Int* m, const Int* n, const double* A, const Int* lda, const Int* rdest, const Int* cdest);
extern void blacs_abort_(const Int* ConTxt, const Int* ErrNo);
extern void blacs_barrier_(const Int* ConTxt, const char* scope);
extern void blacs_exit_(const Int* NotDone);
extern void blacs_freebuff_(const Int* ConTxt, const Int* wait);
extern void blacs_get_(const Int* ConTxt, const Int* what, Int* val);
extern void blacs_gridexit_(const Int* ConTxt);
extern void blacs_gridinfo_(const Int* ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol);
extern void blacs_gridinit_(Int* ConTxt, const char* order, const Int* nprow, const Int* npcol);
extern void blacs_gridmap_(Int* ConTxt, Int* usermap, const Int* ldup, const Int* nprow0, const Int* npcol0);
extern void blacs_pcoord_(const Int* ConTxt, const Int* nodenum, Int* prow, Int* pcol);
extern void blacs_pinfo_(Int* mypnum, Int* nprocs);
extern Int blacs_pnum_(const Int* ConTxt, const Int* prow, const Int* pcol);
extern void blacs_set_(const Int* ConTxt, const Int* what, Int* val);
extern void blacs_setup_(Int* mypnum, Int* nprocs);
extern MPI_Comm blacs2sys_handle_(const Int* BlacsCtxt);
extern Int sys2blacs_handle_(const MPI_Comm* SysCtxt);

#endif // HEADER_BLACS_H