#ifndef HEADER_SCALAPACKE_BLACS_H
#define HEADER_SCALAPACKE_BLACS_H

#include "blacs.h"

/* Declarations
 */
void SCALAPACKE_cgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_dgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_igamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_sgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_zgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_cgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_dgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_igamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_sgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_zgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest);
void SCALAPACKE_cgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_dgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_igebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_sgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_zgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_cgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const float* A, const Int lda);
void SCALAPACKE_dgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const double* A, const Int lda);
void SCALAPACKE_igebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const Int* A, const Int lda);
void SCALAPACKE_sgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const float* A, const Int lda);
void SCALAPACKE_zgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const double* A, const Int lda);
void SCALAPACKE_cgerv2d(const Int ConTxt, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_dgerv2d(const Int ConTxt, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_igerv2d(const Int ConTxt, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_sgerv2d(const Int ConTxt, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_zgerv2d(const Int ConTxt, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_cgesd2d(const Int ConTxt, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_dgesd2d(const Int ConTxt, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_igesd2d(const Int ConTxt, const Int m, const Int n, const Int* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_sgesd2d(const Int ConTxt, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_zgesd2d(const Int ConTxt, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_cgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_dgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_igsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_sgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_zgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_ctrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_dtrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_itrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_strbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_ztrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_ctrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda);
void SCALAPACKE_dtrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda);
void SCALAPACKE_itrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const Int* A, const Int lda);
void SCALAPACKE_strbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda);
void SCALAPACKE_ztrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda);
void SCALAPACKE_ctrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_dtrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_itrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_strrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_ztrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc);
void SCALAPACKE_ctrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_dtrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_itrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const Int* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_strsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_ztrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest);
void SCALAPACKE_blacs_abort(const Int ConTxt, const Int ErrNo);
void SCALAPACKE_blacs_barrier(const Int ConTxt, const char* scope);
void SCALAPACKE_blacs_exit(const Int NotDone);
void SCALAPACKE_blacs_freebuff(const Int ConTxt, const Int wait);
void SCALAPACKE_blacs_get(const Int ConTxt, const Int what, Int* val);
void SCALAPACKE_blacs_gridexit(const Int ConTxt);
void SCALAPACKE_blacs_gridinfo(const Int ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol);
void SCALAPACKE_blacs_gridinit(Int* ConTxt, const char* order, const Int nprow, const Int npcol);
void SCALAPACKE_blacs_gridmap(Int* ConTxt, Int* usermap, const Int ldup, const Int nprow0, const Int npcol0);
void SCALAPACKE_blacs_pcoord(const Int ConTxt, const Int nodenum, Int* prow, Int* pcol);
void SCALAPACKE_blacs_pinfo(Int* mypnum, Int* nprocs);
Int SCALAPACKE_blacs_pnum(const Int ConTxt, const Int prow, const Int pcol);
void SCALAPACKE_blacs_set(const Int ConTxt, const Int what, Int* val);
void SCALAPACKE_blacs_setup(Int* mypnum, Int* nprocs);
MPI_Comm SCALAPACKE_blacs2sys_handle(const Int BlacsCtxt);
Int SCALAPACKE_sys2blacs_handle(const MPI_Comm* SysCtxt);
#endif // HEADER_SCALAPACKE_BLACS_H