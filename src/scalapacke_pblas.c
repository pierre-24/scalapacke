#include "scalapacke_pblas.h"


void SCALAPACKE_pcagemv(const char* TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdagemv(const char* TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psagemv(const char* TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzagemv(const char* TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcahemv(const char* UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzahemv(const char* UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcamax(const Int N, float* AMAX, Int* INDX, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pcamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdamax(const Int N, double* AMAX, Int* INDX, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psamax(const Int N, float* AMAX, Int* INDX, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    psamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzamax(const Int N, double* AMAX, Int* INDX, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasum(const Int N, double* ASUM, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psasum(const Int N, float* ASUM, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    psasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasymv(const char* UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psasymv(const char* UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcaxpy(const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdaxpy(const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psaxpy(const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzaxpy(const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscasum(const Int N, float* ASUM, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pscasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pscnrm2(const Int N, float* NORM2, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pscnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pccopy(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pccopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdcopy(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_picopy(const Int N, const Int* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, Int* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    picopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscopy(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pscopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzcopy(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pddot(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pddot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psdot(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psdot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotc(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotc(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotu(const Int N, float* DOT, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotu(const Int N, double* DOT, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdscal(const Int N, const double ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcgeadd(const char* TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgeadd(const char* TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgeadd(const char* TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    psgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgeadd(const char* TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemm(const char* TRANSA, const char* TRANSB, const Int M, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgemm(const char* TRANSA, const char* TRANSB, const Int M, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgemm(const char* TRANSA, const char* TRANSB, const Int M, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    psgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgemm(const char* TRANSA, const char* TRANSB, const Int M, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemv(const char* TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdgemv(const char* TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psgemv(const char* TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzgemv(const char* TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdger(const Int M, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_psger(const Int M, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA) {
    psger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgerc(const Int M, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pcgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgerc(const Int M, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgeru(const Int M, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pcgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgeru(const Int M, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pchemm(const char* SIDE, const char* UPLO, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pchemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzhemm(const char* SIDE, const char* UPLO, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzhemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pchemv(const char* UPLO, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pchemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzhemv(const char* UPLO, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzhemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcher2(const char* UPLO, const Int N, const float* ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pcher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher2(const char* UPLO, const Int N, const double* ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcher2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzher2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcher(const char* UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pcher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher(const char* UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcherk(const char* UPLO, const char* TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzherk(const char* UPLO, const char* TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdnrm2(const Int N, double* NORM2, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psnrm2(const Int N, float* NORM2, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    psnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcscal(const Int N, const float* ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pcscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdscal(const Int N, const double ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psscal(const Int N, const float ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    psscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzscal(const Int N, const double* ALPHA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcsscal(const Int N, const float ALPHA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pcsscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcswap(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pcswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdswap(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psswap(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    psswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzswap(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pzswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcsymm(const char* SIDE, const char* UPLO, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymm(const char* SIDE, const char* UPLO, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdsymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssymm(const char* SIDE, const char* UPLO, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pssymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsymm(const char* SIDE, const char* UPLO, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymv(const char* UPLO, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double BETA, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pdsymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pssymv(const char* UPLO, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float BETA, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY) {
    pssymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdsyr2(const char* UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdsyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr2(const char* UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, const float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pssyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyr2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdsyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyr2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pssyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyr2k(const char* UPLO, const char* TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr(const char* UPLO, const Int N, const double ALPHA, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdsyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr(const char* UPLO, const Int N, const float ALPHA, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pssyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyrk(const char* UPLO, const char* TRANS, const Int N, const Int K, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyrk(const char* UPLO, const char* TRANS, const Int N, const Int K, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdsyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyrk(const char* UPLO, const char* TRANS, const Int N, const Int K, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pssyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyrk(const char* UPLO, const char* TRANS, const Int N, const Int K, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctradd(const char* UPLO, const char* TRANS, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pctradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtradd(const char* UPLO, const char* TRANS, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdtradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstradd(const char* UPLO, const char* TRANS, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pstradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztradd(const char* UPLO, const char* TRANS, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pztradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtran(const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdtran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstran(const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pstran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranc(const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pctranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranc(const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pztranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranu(const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pctranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranu(const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pztranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pctrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pdtrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pstrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pztrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pctrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdtrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pstrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrmv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pztrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pctrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pctrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pdtrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pstrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pztrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrsv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pctrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrsv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdtrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrsv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pstrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrsv(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pztrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdzasum(const Int N, double* ASUM, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdzasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdznrm2(const Int N, double* NORM2, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdznrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}
