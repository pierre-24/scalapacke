#ifndef HEADER_BLACS_H
#define HEADER_BLACS_H

#include <mpi.h>

/* defines
 */
#ifndef lapack_int
#define lapack_int int
#endif // lapack_int


/* Declarations
 */
extern void cgamn2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void dgamn2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void igamn2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void sgamn2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void zgamn2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void cgamx2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void dgamx2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void igamx2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void sgamx2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void zgamx2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, lapack_int* rA, lapack_int* cA, const lapack_int* ldia, const lapack_int* rdest, const lapack_int* cdest);
extern void cgebr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void dgebr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void igebr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void sgebr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void zgebr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void cgebs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda);
extern void dgebs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda);
extern void igebs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, const lapack_int* A, const lapack_int* lda);
extern void sgebs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda);
extern void zgebs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda);
extern void cgerv2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void dgerv2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void igerv2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void sgerv2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void zgerv2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void cgesd2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void dgesd2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void igesd2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, const lapack_int* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void sgesd2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void zgesd2d_(const lapack_int* ConTxt, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void cgsum2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void dgsum2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void igsum2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void sgsum2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void zgsum2d_(const lapack_int* ConTxt, const char* scope, const char* top, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void ctrbr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void dtrbr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void itrbr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void strbr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void ztrbr2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void ctrbs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda);
extern void dtrbs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda);
extern void itrbs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const lapack_int* A, const lapack_int* lda);
extern void strbs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda);
extern void ztrbs2d_(const lapack_int* ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda);
extern void ctrrv2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void dtrrv2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void itrrv2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, lapack_int* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void strrv2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, float* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void ztrrv2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, double* A, const lapack_int* lda, const lapack_int* rsrc, const lapack_int* csrc);
extern void ctrsd2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void dtrsd2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void itrsd2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const lapack_int* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void strsd2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const float* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void ztrsd2d_(const lapack_int* ConTxt, const char* uplo, const char* diag, const lapack_int* m, const lapack_int* n, const double* A, const lapack_int* lda, const lapack_int* rdest, const lapack_int* cdest);
extern void blacs_abort_(const lapack_int* ConTxt, const lapack_int* ErrNo);
extern void blacs_barrier_(const lapack_int* ConTxt, const char* scope);
extern void blacs_exit_(const lapack_int* NotDone);
extern void blacs_freebuff_(const lapack_int* ConTxt, const lapack_int* wait);
extern void blacs_get_(const lapack_int* ConTxt, const lapack_int* what, lapack_int* val);
extern void blacs_gridexit_(const lapack_int* ConTxt);
extern void blacs_gridinfo_(const lapack_int* ConTxt, lapack_int* nprow, lapack_int* npcol, lapack_int* myrow, lapack_int* mycol);
extern void blacs_gridinit_(lapack_int* ConTxt, const char* order, const lapack_int* nprow, const lapack_int* npcol);
extern void blacs_gridmap_(lapack_int* ConTxt, lapack_int* usermap, const lapack_int* ldup, const lapack_int* nprow0, const lapack_int* npcol0);
extern void blacs_pcoord_(const lapack_int* ConTxt, const lapack_int* nodenum, lapack_int* prow, lapack_int* pcol);
extern void blacs_pinfo_(lapack_int* mypnum, lapack_int* nprocs);
extern lapack_int blacs_pnum_(const lapack_int* ConTxt, const lapack_int* prow, const lapack_int* pcol);
extern void blacs_set_(const lapack_int* ConTxt, const lapack_int* what, lapack_int* val);
extern void blacs_setup_(lapack_int* mypnum, lapack_int* nprocs);
extern MPI_Comm blacs2sys_handle_(const lapack_int* BlacsCtxt);
extern lapack_int sys2blacs_handle_(const MPI_Comm* SysCtxt);

#endif // HEADER_BLACS_H