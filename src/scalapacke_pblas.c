#include "scalapacke_pblas.h"


void SCALAPACKE_pcagemv(const char* TRANS, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdagemv(const char* TRANS, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psagemv(const char* TRANS, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzagemv(const char* TRANS, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzagemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcahemv(const char* UPLO, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzahemv(const char* UPLO, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzahemv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcamax(const lapack_int N, float* AMAX, lapack_int* INDX, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pcamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdamax(const lapack_int N, double* AMAX, lapack_int* INDX, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psamax(const lapack_int N, float* AMAX, lapack_int* INDX, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    psamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzamax(const lapack_int N, double* AMAX, lapack_int* INDX, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzamax_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasum(const lapack_int N, double* ASUM, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psasum(const lapack_int N, float* ASUM, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    psasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdasymv(const char* UPLO, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psasymv(const char* UPLO, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psasymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzatrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzatrmv_(UPLO, TRANS, DIAG, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcaxpy(const lapack_int N, const float* ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdaxpy(const lapack_int N, const double ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psaxpy(const lapack_int N, const float ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psaxpy_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzaxpy(const lapack_int N, const double* ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzaxpy_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscasum(const lapack_int N, float* ASUM, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pscasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pscnrm2(const lapack_int N, float* NORM2, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pscnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pccopy(const lapack_int N, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pccopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdcopy(const lapack_int N, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_picopy(const lapack_int N, const lapack_int* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, lapack_int* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    picopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pscopy(const lapack_int N, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pscopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzcopy(const lapack_int N, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzcopy_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pddot(const lapack_int N, double* DOT, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pddot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psdot(const lapack_int N, float* DOT, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psdot_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotc(const lapack_int N, float* DOT, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotc(const lapack_int N, double* DOT, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzdotc_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcdotu(const lapack_int N, float* DOT, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdotu(const lapack_int N, double* DOT, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzdotu_(&N, DOT, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzdscal(const lapack_int N, const double ALPHA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcgeadd(const char* TRANS, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgeadd(const char* TRANS, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgeadd(const char* TRANS, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    psgeadd_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgeadd(const char* TRANS, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzgeadd_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemm(const char* TRANSA, const char* TRANSB, const lapack_int M, const lapack_int N, const lapack_int K, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdgemm(const char* TRANSA, const char* TRANSB, const lapack_int M, const lapack_int N, const lapack_int K, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psgemm(const char* TRANSA, const char* TRANSB, const lapack_int M, const lapack_int N, const lapack_int K, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    psgemm_(TRANSA, TRANSB, &M, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzgemm(const char* TRANSA, const char* TRANSB, const lapack_int M, const lapack_int N, const lapack_int K, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzgemm_(TRANSA, TRANSB, &M, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcgemv(const char* TRANS, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdgemv(const char* TRANS, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psgemv(const char* TRANS, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psgemv_(TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzgemv(const char* TRANS, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzgemv_(TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdger(const lapack_int M, const lapack_int N, const double ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_psger(const lapack_int M, const lapack_int N, const float ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    psger_(&M, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgerc(const lapack_int M, const lapack_int N, const float* ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pcgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgerc(const lapack_int M, const lapack_int N, const double* ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzgerc_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcgeru(const lapack_int M, const lapack_int N, const float* ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pcgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzgeru(const lapack_int M, const lapack_int N, const double* ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzgeru_(&M, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pchemm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pchemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzhemm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzhemm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pchemv(const char* UPLO, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pchemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzhemv(const char* UPLO, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzhemv_(UPLO, &N, ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcher2(const char* UPLO, const lapack_int N, const float* ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pcher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher2(const char* UPLO, const lapack_int N, const double* ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzher2_(UPLO, &N, ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcher2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzher2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzher2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcher(const char* UPLO, const lapack_int N, const float ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pcher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzher(const char* UPLO, const lapack_int N, const double ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzher_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcherk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzherk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzherk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdnrm2(const lapack_int N, double* NORM2, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psnrm2(const lapack_int N, float* NORM2, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    psnrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcscal(const lapack_int N, const float* ALPHA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pcscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdscal(const lapack_int N, const double ALPHA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psscal(const lapack_int N, const float ALPHA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    psscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzscal(const lapack_int N, const double* ALPHA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzscal_(&N, ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcsscal(const lapack_int N, const float ALPHA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pcsscal_(&N, &ALPHA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcswap(const lapack_int N, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pcswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdswap(const lapack_int N, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_psswap(const lapack_int N, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    psswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pzswap(const lapack_int N, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pzswap_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pcsymm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdsymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssymm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pssymm_(SIDE, UPLO, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsymm(const char* SIDE, const char* UPLO, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzsymm_(SIDE, UPLO, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsymv(const char* UPLO, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double BETA, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pdsymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pssymv(const char* UPLO, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float BETA, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY) {
    pssymv_(UPLO, &N, &ALPHA, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX, &BETA, Y, &IY, &JY, DESCY, &INCY);
}

void SCALAPACKE_pdsyr2(const char* UPLO, const lapack_int N, const double ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdsyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr2(const char* UPLO, const lapack_int N, const float ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, const float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pssyr2_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyr2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdsyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyr2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pssyr2k_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyr2k(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzsyr2k_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyr(const char* UPLO, const lapack_int N, const double ALPHA, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdsyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pssyr(const char* UPLO, const lapack_int N, const float ALPHA, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pssyr_(UPLO, &N, &ALPHA, X, &IX, &JX, DESCX, &INCX, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcsyrk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdsyrk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdsyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pssyrk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pssyrk_(UPLO, TRANS, &N, &K, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzsyrk(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int K, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzsyrk_(UPLO, TRANS, &N, &K, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctradd(const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pctradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtradd(const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdtradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstradd(const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pstradd_(UPLO, TRANS, &M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztradd(const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pztradd_(UPLO, TRANS, &M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdtran(const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdtran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pstran(const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pstran_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranc(const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pctranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranc(const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pztranc_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctranu(const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pctranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pztranu(const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pztranu_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pctrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pctrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pdtrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pstrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrmm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pztrmm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pctrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdtrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pstrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrmv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pztrmv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pctrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pctrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdtrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pdtrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pstrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pstrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, &ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pztrsm(const char* SIDE, const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int M, const lapack_int N, const double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pztrsm_(SIDE, UPLO, TRANS, DIAG, &M, &N, ALPHA, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pctrsv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pctrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdtrsv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdtrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pstrsv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pstrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pztrsv(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pztrsv_(UPLO, TRANS, DIAG, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdzasum(const lapack_int N, double* ASUM, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdzasum_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pdznrm2(const lapack_int N, double* NORM2, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdznrm2_(&N, NORM2, X, &IX, &JX, DESCX, &INCX);
}
