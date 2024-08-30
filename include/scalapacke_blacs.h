#ifndef HEADER_SCALAPACKE_BLACS_H
#define HEADER_SCALAPACKE_BLACS_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "blacs.h"

/* Declarations
 */
void SCALAPACKE_cgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_dgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_igamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_sgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_zgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_cgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_dgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_igamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_sgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_zgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_cgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_dgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_igebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_sgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_zgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_cgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda);
void SCALAPACKE_dgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda);
void SCALAPACKE_igebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda);
void SCALAPACKE_sgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda);
void SCALAPACKE_zgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda);
void SCALAPACKE_cgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_dgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_igerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_sgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_zgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_cgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_dgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_igesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_sgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_zgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_cgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_dgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_igsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_sgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_zgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_ctrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_dtrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_itrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_strbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_ztrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_ctrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda);
void SCALAPACKE_dtrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda);
void SCALAPACKE_itrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda);
void SCALAPACKE_strbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda);
void SCALAPACKE_ztrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda);
void SCALAPACKE_ctrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_dtrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_itrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_strrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_ztrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc);
void SCALAPACKE_ctrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_dtrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_itrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_strsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_ztrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest);
void SCALAPACKE_blacs_abort(const lapack_int ConTxt, const lapack_int ErrNo);
void SCALAPACKE_blacs_barrier(const lapack_int ConTxt, const char* scope);
void SCALAPACKE_blacs_exit(const lapack_int NotDone);
void SCALAPACKE_blacs_freebuff(const lapack_int ConTxt, const lapack_int wait);
void SCALAPACKE_blacs_get(const lapack_int ConTxt, const lapack_int what, lapack_int* val);
void SCALAPACKE_blacs_gridexit(const lapack_int ConTxt);
void SCALAPACKE_blacs_gridinfo(const lapack_int ConTxt, lapack_int* nprow, lapack_int* npcol, lapack_int* myrow, lapack_int* mycol);
void SCALAPACKE_blacs_gridinit(lapack_int* ConTxt, const char* order, const lapack_int nprow, const lapack_int npcol);
void SCALAPACKE_blacs_gridmap(lapack_int* ConTxt, lapack_int* usermap, const lapack_int ldup, const lapack_int nprow0, const lapack_int npcol0);
void SCALAPACKE_blacs_pcoord(const lapack_int ConTxt, const lapack_int nodenum, lapack_int* prow, lapack_int* pcol);
void SCALAPACKE_blacs_pinfo(lapack_int* mypnum, lapack_int* nprocs);
lapack_int SCALAPACKE_blacs_pnum(const lapack_int ConTxt, const lapack_int prow, const lapack_int pcol);
void SCALAPACKE_blacs_set(const lapack_int ConTxt, const lapack_int what, lapack_int* val);
void SCALAPACKE_blacs_setup(lapack_int* mypnum, lapack_int* nprocs);
MPI_Comm SCALAPACKE_blacs2sys_handle(const lapack_int BlacsCtxt);
lapack_int SCALAPACKE_sys2blacs_handle(const MPI_Comm* SysCtxt);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // HEADER_SCALAPACKE_BLACS_H