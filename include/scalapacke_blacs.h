#ifndef HEADER_SCALAPACKE_BLACS_H
#define HEADER_SCALAPACKE_BLACS_H

/* Header by scalapack_files_create.create_cblacs
 * Generated: 2024-08-23 22:12:17.823575
 * Version scalapack_files_create.create_cblacs: https://github.com/pierre-24/scalapack-c-headers/tree/cbcccac4
 * Version scalapack: https://github.com/Reference-ScaLAPACK/scalapack/tree/0128dc24
 */

#include <blacs.h>

/* Declarations
 */
void SCALAPACKE_cgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_dgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_igamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_sgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_zgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_cgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_dgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_igamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_sgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_zgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest);
void SCALAPACKE_cgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_dgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_igebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_sgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_zgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_cgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda);
void SCALAPACKE_dgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda);
void SCALAPACKE_igebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda);
void SCALAPACKE_sgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda);
void SCALAPACKE_zgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda);
void SCALAPACKE_cgerv2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_dgerv2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_igerv2d(Int ConTxt, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_sgerv2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_zgerv2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_cgesd2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_dgesd2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_igesd2d(Int ConTxt, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_sgesd2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_zgesd2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_cgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_dgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_igsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_sgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_zgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_ctrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_dtrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_itrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_strbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_ztrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_ctrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda);
void SCALAPACKE_dtrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda);
void SCALAPACKE_itrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda);
void SCALAPACKE_strbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda);
void SCALAPACKE_ztrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda);
void SCALAPACKE_ctrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_dtrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_itrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_strrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_ztrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc);
void SCALAPACKE_ctrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_dtrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_itrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_strsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_ztrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rdest, Int cdest);
void SCALAPACKE_blacs_abort(Int ConTxt, Int ErrNo);
void SCALAPACKE_blacs_barrier(Int ConTxt, F_CHAR scope);
void SCALAPACKE_blacs_exit(Int NotDone);
void SCALAPACKE_blacs_freebuff(Int ConTxt, Int wait);
void SCALAPACKE_blacs_get(Int ConTxt, Int what, Int* val);
void SCALAPACKE_blacs_gridexit(Int ConTxt);
void SCALAPACKE_blacs_gridinfo(Int ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol);
void SCALAPACKE_blacs_gridinit(Int* ConTxt, F_CHAR order, Int nprow, Int npcol);
void SCALAPACKE_blacs_gridmap(Int* ConTxt, Int* usermap, Int ldup, Int nprow0, Int npcol0);
void SCALAPACKE_blacs_pcoord(Int ConTxt, Int nodenum, Int* prow, Int* pcol);
void SCALAPACKE_blacs_pinfo(Int* mypnum, Int* nprocs);
Int SCALAPACKE_blacs_pnum(Int ConTxt, Int prow, Int pcol);
void SCALAPACKE_blacs_set(Int ConTxt, Int what, Int* val);
void SCALAPACKE_blacs_setup(Int* mypnum, Int* nprocs);
MPI_Comm SCALAPACKE_blacs2sys_handle(Int BlacsCtxt);
Int SCALAPACKE_sys2blacs_handle(MPI_Comm* SysCtxt);
#endif // HEADER_SCALAPACKE_BLACS_H