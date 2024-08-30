#include "scalapacke_blacs.h"


void SCALAPACKE_cgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    cgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    dgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    igamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    sgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamn2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    zgamn2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    cgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_dgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    dgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_igamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    igamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_sgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    sgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_zgamx2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, lapack_int* rA, lapack_int* cA, const lapack_int ldia, const lapack_int rdest, const lapack_int cdest) {
    zgamx2d_(&ConTxt, scope, top, &m, &n, A, &lda, rA, cA, &ldia, &rdest, &cdest);
}

void SCALAPACKE_cgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    cgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    dgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    igebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    sgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgebr2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    zgebr2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda) {
    cgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_dgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda) {
    dgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_igebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda) {
    igebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_sgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda) {
    sgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_zgebs2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda) {
    zgebs2d_(&ConTxt, scope, top, &m, &n, A, &lda);
}

void SCALAPACKE_cgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    cgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    dgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_igerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    igerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_sgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    sgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_zgerv2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    zgerv2d_(&ConTxt, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_cgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    cgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    dgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    igesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    sgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgesd2d(const lapack_int ConTxt, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    zgesd2d_(&ConTxt, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_cgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    cgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    dgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_igsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    igsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_sgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    sgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_zgsum2d(const lapack_int ConTxt, const char* scope, const char* top, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    zgsum2d_(&ConTxt, scope, top, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ctrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    ctrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    dtrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    itrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    strbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrbr2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    ztrbr2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda) {
    ctrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_dtrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda) {
    dtrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_itrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda) {
    itrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_strbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda) {
    strbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ztrbs2d(const lapack_int ConTxt, const char* scope, const char* top, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda) {
    ztrbs2d_(&ConTxt, scope, top, uplo, diag, &m, &n, A, &lda);
}

void SCALAPACKE_ctrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    ctrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_dtrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    dtrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_itrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_int* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    itrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_strrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, float* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    strrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ztrrv2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, lapack_complex_double* A, const lapack_int lda, const lapack_int rsrc, const lapack_int csrc) {
    ztrrv2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rsrc, &csrc);
}

void SCALAPACKE_ctrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    ctrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_dtrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    dtrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_itrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_int* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    itrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_strsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const float* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    strsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_ztrsd2d(const lapack_int ConTxt, const char* uplo, const char* diag, const lapack_int m, const lapack_int n, const lapack_complex_double* A, const lapack_int lda, const lapack_int rdest, const lapack_int cdest) {
    ztrsd2d_(&ConTxt, uplo, diag, &m, &n, A, &lda, &rdest, &cdest);
}

void SCALAPACKE_blacs_abort(const lapack_int ConTxt, const lapack_int ErrNo) {
    blacs_abort_(&ConTxt, &ErrNo);
}

void SCALAPACKE_blacs_barrier(const lapack_int ConTxt, const char* scope) {
    blacs_barrier_(&ConTxt, scope);
}

void SCALAPACKE_blacs_exit(const lapack_int NotDone) {
    blacs_exit_(&NotDone);
}

void SCALAPACKE_blacs_freebuff(const lapack_int ConTxt, const lapack_int wait) {
    blacs_freebuff_(&ConTxt, &wait);
}

void SCALAPACKE_blacs_get(const lapack_int ConTxt, const lapack_int what, lapack_int* val) {
    blacs_get_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_gridexit(const lapack_int ConTxt) {
    blacs_gridexit_(&ConTxt);
}

void SCALAPACKE_blacs_gridinfo(const lapack_int ConTxt, lapack_int* nprow, lapack_int* npcol, lapack_int* myrow, lapack_int* mycol) {
    blacs_gridinfo_(&ConTxt, nprow, npcol, myrow, mycol);
}

void SCALAPACKE_blacs_gridinit(lapack_int* ConTxt, const char* order, const lapack_int nprow, const lapack_int npcol) {
    blacs_gridinit_(ConTxt, order, &nprow, &npcol);
}

void SCALAPACKE_blacs_gridmap(lapack_int* ConTxt, lapack_int* usermap, const lapack_int ldup, const lapack_int nprow0, const lapack_int npcol0) {
    blacs_gridmap_(ConTxt, usermap, &ldup, &nprow0, &npcol0);
}

void SCALAPACKE_blacs_pcoord(const lapack_int ConTxt, const lapack_int nodenum, lapack_int* prow, lapack_int* pcol) {
    blacs_pcoord_(&ConTxt, &nodenum, prow, pcol);
}

void SCALAPACKE_blacs_pinfo(lapack_int* mypnum, lapack_int* nprocs) {
    blacs_pinfo_(mypnum, nprocs);
}

lapack_int SCALAPACKE_blacs_pnum(const lapack_int ConTxt, const lapack_int prow, const lapack_int pcol) {
    return blacs_pnum_(&ConTxt, &prow, &pcol);
}

void SCALAPACKE_blacs_set(const lapack_int ConTxt, const lapack_int what, lapack_int* val) {
    blacs_set_(&ConTxt, &what, val);
}

void SCALAPACKE_blacs_setup(lapack_int* mypnum, lapack_int* nprocs) {
    blacs_setup_(mypnum, nprocs);
}

MPI_Comm SCALAPACKE_blacs2sys_handle(const lapack_int BlacsCtxt) {
    return blacs2sys_handle_(&BlacsCtxt);
}

lapack_int SCALAPACKE_sys2blacs_handle(const MPI_Comm* SysCtxt) {
    return sys2blacs_handle_(SysCtxt);
}
