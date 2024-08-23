#include "scalapacke_blacs.h"


void SCALAPACKE_cgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    cgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    dgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    igamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    sgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamn2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    zgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    cgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    dgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    igamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    sgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamx2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int* rA, Int* cA, Int ldia, Int rdest, Int cdest) {
    zgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    cgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    dgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc) {
    igebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    sgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgebr2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    zgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda) {
    cgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_dgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda) {
    dgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_igebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda) {
    igebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_sgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda) {
    sgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_zgebs2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda) {
    zgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_cgerv2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    cgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgerv2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    dgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igerv2d(Int ConTxt, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc) {
    igerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgerv2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    sgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgerv2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    zgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgesd2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    cgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgesd2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    dgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igesd2d(Int ConTxt, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest) {
    igesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgesd2d(Int ConTxt, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    sgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgesd2d(Int ConTxt, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    zgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_cgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    cgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    dgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest) {
    igsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    sgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgsum2d(Int ConTxt, F_CHAR scope, F_CHAR top, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    zgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ctrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    ctrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    dtrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc) {
    itrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    strbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrbr2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    ztrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda) {
    ctrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_dtrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda) {
    dtrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_itrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda) {
    itrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_strbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda) {
    strbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ztrbs2d(Int ConTxt, F_CHAR scope, F_CHAR top, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda) {
    ztrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ctrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    ctrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    dtrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rsrc, Int csrc) {
    itrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rsrc, Int csrc) {
    strrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrrv2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rsrc, Int csrc) {
    ztrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    ctrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dtrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    dtrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_itrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, Int* A, Int lda, Int rdest, Int cdest) {
    itrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_strsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, float* A, Int lda, Int rdest, Int cdest) {
    strsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ztrsd2d(Int ConTxt, F_CHAR uplo, F_CHAR diag, Int m, Int n, double* A, Int lda, Int rdest, Int cdest) {
    ztrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_blacs_abort(Int ConTxt, Int ErrNo) {
    blacs_abort_(&ConTxt, &ErrNo);
}

void SCALAPACKE_blacs_barrier(Int ConTxt, F_CHAR scope) {
    blacs_barrier_(&ConTxt, scope);
}

void SCALAPACKE_blacs_exit(Int NotDone) {
    blacs_exit_(&NotDone);
}

void SCALAPACKE_blacs_freebuff(Int ConTxt, Int wait) {
    blacs_freebuff_(&ConTxt, &wait);
}

void SCALAPACKE_blacs_get(Int ConTxt, Int what, Int* val) {
    blacs_get_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_gridexit(Int ConTxt) {
    blacs_gridexit_(&ConTxt);
}

void SCALAPACKE_blacs_gridinfo(Int ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol) {
    blacs_gridinfo_(&ConTxt, nprow, npcol, myrow, mycol);
}

void SCALAPACKE_blacs_gridinit(Int* ConTxt, F_CHAR order, Int nprow, Int npcol) {
    blacs_gridinit_(ConTxt, order, &nprow, &npcol);
}

void SCALAPACKE_blacs_gridmap(Int* ConTxt, Int* usermap, Int ldup, Int nprow0, Int npcol0) {
    blacs_gridmap_(ConTxt, usermap, &ldup, &nprow0, &npcol0);
}

void SCALAPACKE_blacs_pcoord(Int ConTxt, Int nodenum, Int* prow, Int* pcol) {
    blacs_pcoord_(&ConTxt, &nodenum, prow, pcol);
}

void SCALAPACKE_blacs_pinfo(Int* mypnum, Int* nprocs) {
    blacs_pinfo_(mypnum, nprocs);
}

Int SCALAPACKE_blacs_pnum(Int ConTxt, Int prow, Int pcol) {
    return blacs_pnum_(&ConTxt, &prow, &pcol);
}

void SCALAPACKE_blacs_set(Int ConTxt, Int what, Int* val) {
    blacs_set_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_setup(Int* mypnum, Int* nprocs) {
    blacs_setup_(mypnum, nprocs);
}

MPI_Comm SCALAPACKE_blacs2sys_handle(Int BlacsCtxt) {
    return blacs2sys_handle_(&BlacsCtxt);
}

Int SCALAPACKE_sys2blacs_handle(MPI_Comm* SysCtxt) {
    return sys2blacs_handle_(SysCtxt);
}
