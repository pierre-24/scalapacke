#include "scalapacke_blacs.h"


void SCALAPACKE_cgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    cgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    dgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    igamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    sgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamn2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    zgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    cgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    dgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    igamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    sgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamx2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, Int* rA, Int* cA, const Int ldia, const Int rdest, const Int cdest) {
    zgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    cgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    dgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc) {
    igebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    sgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgebr2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    zgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const float* A, const Int lda) {
    cgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_dgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const double* A, const Int lda) {
    dgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_igebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const Int* A, const Int lda) {
    igebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_sgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const float* A, const Int lda) {
    sgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_zgebs2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, const double* A, const Int lda) {
    zgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_cgerv2d(const Int ConTxt, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    cgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgerv2d(const Int ConTxt, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    dgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igerv2d(const Int ConTxt, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc) {
    igerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgerv2d(const Int ConTxt, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    sgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgerv2d(const Int ConTxt, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    zgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgesd2d(const Int ConTxt, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest) {
    cgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgesd2d(const Int ConTxt, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest) {
    dgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igesd2d(const Int ConTxt, const Int m, const Int n, const Int* A, const Int lda, const Int rdest, const Int cdest) {
    igesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgesd2d(const Int ConTxt, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest) {
    sgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgesd2d(const Int ConTxt, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest) {
    zgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_cgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rdest, const Int cdest) {
    cgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rdest, const Int cdest) {
    dgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, Int* A, const Int lda, const Int rdest, const Int cdest) {
    igsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, float* A, const Int lda, const Int rdest, const Int cdest) {
    sgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgsum2d(const Int ConTxt, const char* scope, const char* top, const Int m, const Int n, double* A, const Int lda, const Int rdest, const Int cdest) {
    zgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ctrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    ctrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    dtrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc) {
    itrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    strbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrbr2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    ztrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda) {
    ctrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_dtrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda) {
    dtrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_itrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const Int* A, const Int lda) {
    itrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_strbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda) {
    strbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ztrbs2d(const Int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda) {
    ztrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ctrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    ctrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    dtrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, Int* A, const Int lda, const Int rsrc, const Int csrc) {
    itrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, float* A, const Int lda, const Int rsrc, const Int csrc) {
    strrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrrv2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, double* A, const Int lda, const Int rsrc, const Int csrc) {
    ztrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest) {
    ctrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dtrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest) {
    dtrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_itrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const Int* A, const Int lda, const Int rdest, const Int cdest) {
    itrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_strsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const float* A, const Int lda, const Int rdest, const Int cdest) {
    strsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ztrsd2d(const Int ConTxt, const char* uplo, const char* diag, const Int m, const Int n, const double* A, const Int lda, const Int rdest, const Int cdest) {
    ztrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_blacs_abort(const Int ConTxt, const Int ErrNo) {
    blacs_abort_(&ConTxt, &ErrNo);
}

void SCALAPACKE_blacs_barrier(const Int ConTxt, const char* scope) {
    blacs_barrier_(&ConTxt, scope);
}

void SCALAPACKE_blacs_exit(const Int NotDone) {
    blacs_exit_(&NotDone);
}

void SCALAPACKE_blacs_freebuff(const Int ConTxt, const Int wait) {
    blacs_freebuff_(&ConTxt, &wait);
}

void SCALAPACKE_blacs_get(const Int ConTxt, const Int what, Int* val) {
    blacs_get_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_gridexit(const Int ConTxt) {
    blacs_gridexit_(&ConTxt);
}

void SCALAPACKE_blacs_gridinfo(const Int ConTxt, Int* nprow, Int* npcol, Int* myrow, Int* mycol) {
    blacs_gridinfo_(&ConTxt, nprow, npcol, myrow, mycol);
}

void SCALAPACKE_blacs_gridinit(Int* ConTxt, const char* order, const Int nprow, const Int npcol) {
    blacs_gridinit_(ConTxt, order, &nprow, &npcol);
}

void SCALAPACKE_blacs_gridmap(Int* ConTxt, Int* usermap, const Int ldup, const Int nprow0, const Int npcol0) {
    blacs_gridmap_(ConTxt, usermap, &ldup, &nprow0, &npcol0);
}

void SCALAPACKE_blacs_pcoord(const Int ConTxt, const Int nodenum, Int* prow, Int* pcol) {
    blacs_pcoord_(&ConTxt, &nodenum, prow, pcol);
}

void SCALAPACKE_blacs_pinfo(Int* mypnum, Int* nprocs) {
    blacs_pinfo_(mypnum, nprocs);
}

Int SCALAPACKE_blacs_pnum(const Int ConTxt, const Int prow, const Int pcol) {
    return blacs_pnum_(&ConTxt, &prow, &pcol);
}

void SCALAPACKE_blacs_set(const Int ConTxt, const Int what, Int* val) {
    blacs_set_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_setup(Int* mypnum, Int* nprocs) {
    blacs_setup_(mypnum, nprocs);
}

MPI_Comm SCALAPACKE_blacs2sys_handle(const Int BlacsCtxt) {
    return blacs2sys_handle_(&BlacsCtxt);
}

Int SCALAPACKE_sys2blacs_handle(const MPI_Comm* SysCtxt) {
    return sys2blacs_handle_(SysCtxt);
}
