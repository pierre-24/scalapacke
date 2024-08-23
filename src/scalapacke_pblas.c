#include "scalapacke_pblas.h"


void SCALAPACKE_pcagemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdagemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psagemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzagemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcahemv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzahemv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcamax(Int N, float* AMAX, Int INDX, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pcamax_(&N, AMAX, &INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdamax(Int N, double* AMAX, Int INDX, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdamax_(&N, AMAX, &INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psamax(Int N, float* AMAX, Int INDX, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    psamax_(&N, AMAX, &INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzamax(Int N, double* AMAX, Int INDX, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pzamax_(&N, AMAX, &INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasum(Int N, double ASUM, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdasum_(&N, &ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psasum(Int N, float ASUM, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    psasum_(&N, &ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasymv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psasymv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcaxpy(Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdaxpy(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psaxpy(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzaxpy(Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscasum(Int N, float ASUM, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pscasum_(&N, &ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pscnrm2(Int N, float NORM2, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pscnrm2_(&N, &NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pccopy(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pccopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdcopy(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_picopy(Int N, Int* X, Int IX, Int JX, Int* DESCX, Int INCX, Int* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    picopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscopy(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pscopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzcopy(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pddot(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pddot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psdot(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psdot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotc(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotc(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotu(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotu(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdscal(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pzdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcgeadd(F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgeadd(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgeadd(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    psgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgeadd(F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    psgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemv(F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdgemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psgemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzgemv(F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdger(Int M, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA) {
    pdger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_psger(Int M, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA) {
    psger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgerc(Int M, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA) {
    pcgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgerc(Int M, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA) {
    pzgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgeru(Int M, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA) {
    pcgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgeru(Int M, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA) {
    pzgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pchemm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pchemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzhemm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzhemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pchemv(F_CHAR_T UPLO, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pchemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzhemv(F_CHAR_T UPLO, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzhemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcher2(F_CHAR_T UPLO, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA) {
    pcher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher2(F_CHAR_T UPLO, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA) {
    pzher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcher2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzher2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcher(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* A, Int IA, Int JA, Int* DESCA) {
    pcher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* A, Int IA, Int JA, Int* DESCA) {
    pzher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcherk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzherk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdnrm2(Int N, double NORM2, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdnrm2_(&N, &NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psnrm2(Int N, float NORM2, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    psnrm2_(&N, &NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcscal(Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pcscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdscal(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psscal(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    psscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzscal(Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pzscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcsscal(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pcsscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcswap(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pcswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdswap(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psswap(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    psswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzswap(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pzswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdsymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pssymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pdsymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pssymv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY) {
    pssymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdsyr2(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA) {
    pdsyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr2(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA) {
    pssyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdsyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pssyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* A, Int IA, Int JA, Int* DESCA) {
    pdsyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* A, Int IA, Int JA, Int* DESCA) {
    pssyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pcsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdsyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pssyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pzsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pctradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdtradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pstradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pztradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtran(Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pdtran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstran(Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pstran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranc(Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pctranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranc(Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pztranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranu(Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC) {
    pctranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranu(Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC) {
    pztranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB) {
    pctrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB) {
    pdtrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB) {
    pstrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB) {
    pztrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pctrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdtrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pstrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pztrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pctrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB) {
    pctrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB) {
    pdtrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB) {
    pstrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB) {
    pztrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pctrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdtrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pstrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pztrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdzasum(Int N, double ASUM, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdzasum_(&N, &ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdznrm2(Int N, double NORM2, double* X, Int IX, Int JX, Int* DESCX, Int INCX) {
    pdznrm2_(&N, &NORM2, X, &IX, &JX, DESCX, &INCX);
}
