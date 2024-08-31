#include "scalapacke.h"


void SCALAPACKE_pscsum1(const lapack_int N, float* ASUM, const lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pscsum1_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

lapack_int SCALAPACKE_pcdbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_cdbtf2(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, lapack_complex_float* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    cdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_ddbtf2(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, double* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    ddbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sdbtf2(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, float* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    sdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zdbtf2(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, lapack_complex_double* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    zdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_cdbtrf(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, lapack_complex_float* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    cdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_ddbtrf(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, double* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    ddbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, double* A, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, float* A, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sdbtrf(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, float* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    sdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zdbtrf(const lapack_int M, const lapack_int N, const lapack_int KL, const lapack_int KU, lapack_complex_double* AB, const lapack_int LDAB) {
    lapack_int INFO = 0;
    zdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_bdlaapp(const lapack_int ISIDE, const lapack_int M, const lapack_int N, const lapack_int NB, double* A, const lapack_int LDA, const lapack_int NITRAF, const lapack_int* ITRAF, double* DTRAF, double* WORK) {
    bdlaapp_(&ISIDE, &M, &N, &NB, A, &LDA, &NITRAF, ITRAF, DTRAF, WORK);
}

lapack_int SCALAPACKE_bdlaexc(const lapack_int N, double* T, const lapack_int LDT, const lapack_int J1, const lapack_int N1, const lapack_int N2, lapack_int* ITRAF, double* DTRAF, double* WORK) {
    lapack_int INFO = 0;
    bdlaexc_(&N, T, &LDT, &J1, &N1, &N2, ITRAF, DTRAF, WORK, &INFO);
    return INFO;
}

void SCALAPACKE_pzdrscl(const lapack_int N, const double SA, lapack_complex_double* SX, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzdrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

lapack_int SCALAPACKE_bdtrexc(const lapack_int N, double* T, const lapack_int LDT, lapack_int* IFST, lapack_int* ILST, lapack_int* NITRAF, lapack_int* ITRAF, lapack_int* NDTRAF, double* DTRAF, double* WORK) {
    lapack_int INFO = 0;
    bdtrexc_(&N, T, &LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdtsv(const lapack_int N, const lapack_int NRHS, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddtsv(const lapack_int N, const lapack_int NRHS, double* DL, double* D, double* DU, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdtsv(const lapack_int N, const lapack_int NRHS, float* DL, float* D, float* DU, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdtsv(const lapack_int N, const lapack_int NRHS, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_cdttrf(const lapack_int N, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU) {
    lapack_int INFO = 0;
    cdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdttrf(const lapack_int N, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_ddttrf(const lapack_int N, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU) {
    lapack_int INFO = 0;
    ddttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddttrf(const lapack_int N, double* DL, double* D, double* DU, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdttrf(const lapack_int N, float* DL, float* D, float* DU, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sdttrf(const lapack_int N, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU) {
    lapack_int INFO = 0;
    sdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdttrf(const lapack_int N, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zdttrf(const lapack_int N, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU) {
    lapack_int INFO = 0;
    zdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdttrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddttrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, double* DL, double* D, double* DU, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdttrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, float* DL, float* D, float* DU, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_cdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* DL, const lapack_complex_float* D, const lapack_complex_float* DU, lapack_complex_float* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    cdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_float* DL, lapack_complex_float* D, lapack_complex_float* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pddttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, double* DL, double* D, double* DU, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pddttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_ddttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* DL, const lapack_complex_double* D, const lapack_complex_double* DU, lapack_complex_double* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    ddttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, float* DL, float* D, float* DU, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* DL, const lapack_complex_float* D, const lapack_complex_float* DU, lapack_complex_float* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    sdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* DL, const lapack_complex_double* D, const lapack_complex_double* DU, lapack_complex_double* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    zdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzdttrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_double* DL, lapack_complex_double* D, lapack_complex_double* DU, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, double* B, const lapack_int IB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, float* B, const lapack_int IB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgbsv(const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgbtrf(const lapack_int N, const lapack_int BWL, const lapack_int BWU, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgbtrs(const char* TRANS, const lapack_int N, const lapack_int BWL, const lapack_int BWU, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgebal(const char* JOB, const lapack_int N, double* A, const lapack_int* DESCA, lapack_int* ILO, lapack_int* IHI, double* SCALE) {
    lapack_int INFO = 0;
    pdgebal_(JOB, &N, A, DESCA, ILO, IHI, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgebal(const char* JOB, const lapack_int N, float* A, const lapack_int* DESCA, lapack_int* ILO, lapack_int* IHI, float* SCALE) {
    lapack_int INFO = 0;
    psgebal_(JOB, &N, A, DESCA, ILO, IHI, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgebd2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAUQ, lapack_complex_float* TAUP, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgebd2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgebd2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgebd2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAUQ, lapack_complex_double* TAUP, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgebrd(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAUQ, lapack_complex_float* TAUP, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgebrd(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgebrd(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgebrd(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAUQ, lapack_complex_double* TAUP, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgecon(const char* NORM, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float ANORM, float* RCOND, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgecon(const char* NORM, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double ANORM, double* RCOND, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgecon(const char* NORM, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float ANORM, float* RCOND, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgecon(const char* NORM, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double ANORM, double* RCOND, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeequ(const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* R, float* C, float* ROWCND, float* COLCND, float* AMAX) {
    lapack_int INFO = 0;
    pcgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeequ(const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* R, double* C, double* ROWCND, double* COLCND, double* AMAX) {
    lapack_int INFO = 0;
    pdgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeequ(const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* R, float* C, float* ROWCND, float* COLCND, float* AMAX) {
    lapack_int INFO = 0;
    psgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeequ(const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* R, double* C, double* ROWCND, double* COLCND, double* AMAX) {
    lapack_int INFO = 0;
    pzgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgehd2(const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgehd2(const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgehd2(const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgehd2(const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgehrd(const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgehrd(const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgehrd(const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgehrd(const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgelq2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgelq2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgelq2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgelq2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgelqf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgelqf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgelqf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgelqf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgels(const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int NRHS, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgels(const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int NRHS, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgels(const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int NRHS, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgels(const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int NRHS, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeql2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeql2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeql2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeql2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeqlf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeqlf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeqlf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeqlf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeqpf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeqpf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeqpf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeqpf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeqr2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeqr2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeqr2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeqr2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgeqrf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgeqrf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgeqrf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgeqrf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgerfs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_int* IPIV, const lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* FERR, float* BERR, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgerfs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_int* IPIV, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* FERR, double* BERR, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgerfs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_int* IPIV, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* FERR, float* BERR, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgerfs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_int* IPIV, const lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* FERR, double* BERR, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgerq2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgerq2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgerq2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgerq2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgerqf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgerqf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgerqf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgerqf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgesv(const lapack_int N, const lapack_int NRHS, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pcgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgesv(const lapack_int N, const lapack_int NRHS, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgesvd(const char* JOBU, const char* JOBVT, const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* S, lapack_complex_float* U, const lapack_int IU, const lapack_int JU, const lapack_int* DESCU, lapack_complex_float* VT, const lapack_int IVT, const lapack_int JVT, const lapack_int* DESCVT, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK) {
    lapack_int INFO = 0;
    pcgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, RWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgesvd(const char* JOBU, const char* JOBVT, const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* S, double* U, const lapack_int IU, const lapack_int JU, const lapack_int* DESCU, double* VT, const lapack_int IVT, const lapack_int JVT, const lapack_int* DESCVT, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgesvd(const char* JOBU, const char* JOBVT, const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* S, float* U, const lapack_int IU, const lapack_int JU, const lapack_int* DESCU, float* VT, const lapack_int IVT, const lapack_int JVT, const lapack_int* DESCVT, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgesvd(const char* JOBU, const char* JOBVT, const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* S, lapack_complex_double* U, const lapack_int IU, const lapack_int JU, const lapack_int* DESCU, lapack_complex_double* VT, const lapack_int IVT, const lapack_int JVT, const lapack_int* DESCVT, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK) {
    lapack_int INFO = 0;
    pzgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, RWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgesv(const lapack_int N, const lapack_int NRHS, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    psgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgesvx(const char* FACT, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, lapack_int* IPIV, char* EQUED, float* R, float* C, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* RCOND, float* FERR, float* BERR, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgesvx(const char* FACT, const char* TRANS, const lapack_int N, const lapack_int NRHS, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, lapack_int* IPIV, char* EQUED, double* R, double* C, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgesvx(const char* FACT, const char* TRANS, const lapack_int N, const lapack_int NRHS, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, lapack_int* IPIV, char* EQUED, float* R, float* C, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgesvx(const char* FACT, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, lapack_int* IPIV, char* EQUED, double* R, double* C, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* RCOND, double* FERR, double* BERR, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgesv(const lapack_int N, const lapack_int NRHS, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pzgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgetf2(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pcgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgetf2(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pdgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgetf2(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    psgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgetf2(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pzgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgetrf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pcgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgetrf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pdgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgetrf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    psgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgetrf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* IPIV) {
    lapack_int INFO = 0;
    pzgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgetri(const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, lapack_complex_float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pcgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgetri(const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgetri(const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgetri(const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, lapack_complex_double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pzgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcgetrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pcgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdgetrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psgetrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    psgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzgetrs(const char* TRANS, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pzgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcggqrf(const lapack_int N, const lapack_int M, const lapack_int P, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAUA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* TAUB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdggqrf(const lapack_int N, const lapack_int M, const lapack_int P, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAUA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* TAUB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psggqrf(const lapack_int N, const lapack_int M, const lapack_int P, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAUA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* TAUB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzggqrf(const lapack_int N, const lapack_int M, const lapack_int P, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAUA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* TAUB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcggrqf(const lapack_int M, const lapack_int P, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAUA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* TAUB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdggrqf(const lapack_int M, const lapack_int P, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAUA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* TAUB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psggrqf(const lapack_int M, const lapack_int P, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAUA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* TAUB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzggrqf(const lapack_int M, const lapack_int P, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAUA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* TAUB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcheev(const char* JOBZ, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* W, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, lapack_complex_float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcheev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcheevd(const char* JOBZ, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* W, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pcheevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzheevd(const char* JOBZ, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* W, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pzheevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcheevr(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float VL, const float VU, const lapack_int IL, const lapack_int IU, lapack_int* M, lapack_int* NZ, float* W, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pcheevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzheevr(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double VL, const double VU, const lapack_int IL, const lapack_int IU, lapack_int* M, lapack_int* NZ, double* W, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pzheevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcheevx(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float ABSTOL, lapack_int* M, lapack_int* NZ, float* W, const float ORFAC, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    pcheevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzheevx(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double ABSTOL, lapack_int* M, lapack_int* NZ, double* W, const double ORFAC, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pzheevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzheev(const char* JOBZ, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* W, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, lapack_complex_double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzheev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchegs2(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pchegs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhegs2(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pzhegs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchegst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* SCALE) {
    lapack_int INFO = 0;
    pchegst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhegst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* SCALE) {
    lapack_int INFO = 0;
    pzhegst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchegvx(const lapack_int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float ABSTOL, lapack_int* M, lapack_int* NZ, float* W, const float ORFAC, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    pchegvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhegvx(const lapack_int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double ABSTOL, lapack_int* M, lapack_int* NZ, double* W, const double ORFAC, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pzhegvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchengst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* SCALE, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pchengst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhengst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* SCALE, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzhengst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchentrd(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK, lapack_complex_float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pchentrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhentrd(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK, lapack_complex_double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzhentrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchetd2(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pchetd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhetd2(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzhetd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchetrd(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pchetrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhetrd(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzhetrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pchettrd(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pchettrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzhettrd(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzhettrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdhseqr(const char* JOB, const char* COMPZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* H, const lapack_int* DESCH, double* WR, double* WI, double* Z, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdhseqr_(JOB, COMPZ, &N, &ILO, &IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pshseqr(const char* JOB, const char* COMPZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* H, const lapack_int* DESCH, float* WR, float* WI, float* Z, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pshseqr_(JOB, COMPZ, &N, &ILO, &IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlabad(const lapack_int ICTXT, double* SMALL, double* LARGE) {
    pdlabad_(&ICTXT, SMALL, LARGE);
}

void SCALAPACKE_pslabad(const lapack_int ICTXT, float* SMALL, float* LARGE) {
    pslabad_(&ICTXT, SMALL, LARGE);
}

void SCALAPACKE_pclabrd(const lapack_int M, const lapack_int N, const lapack_int NB, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAUQ, lapack_complex_float* TAUP, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, lapack_complex_float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, lapack_complex_float* WORK) {
    pclabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pdlabrd(const lapack_int M, const lapack_int N, const lapack_int NB, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, double* WORK) {
    pdlabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pslabrd(const lapack_int M, const lapack_int N, const lapack_int NB, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, float* WORK) {
    pslabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pzlabrd(const lapack_int M, const lapack_int N, const lapack_int NB, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAUQ, lapack_complex_double* TAUP, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, lapack_complex_double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, lapack_complex_double* WORK) {
    pzlabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pclacgv(const lapack_int N, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pclacgv_(&N, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzlacgv(const lapack_int N, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzlacgv_(&N, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pclacon(const lapack_int N, lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* EST, lapack_int* KASE) {
    pclacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, EST, KASE);
}

void SCALAPACKE_pdlacon(const lapack_int N, double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, lapack_int* ISGN, double* EST, lapack_int* KASE) {
    pdlacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, ISGN, EST, KASE);
}

void SCALAPACKE_pslacon(const lapack_int N, float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, lapack_int* ISGN, float* EST, lapack_int* KASE) {
    pslacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, ISGN, EST, KASE);
}

void SCALAPACKE_pclaconsb(const lapack_complex_float* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* M, const lapack_complex_float H44, const lapack_complex_float H33, const lapack_complex_float H43H34, lapack_complex_float* BUF, const lapack_int LWORK) {
    pclaconsb_(A, DESCA, &I_, &L, M, &H44, &H33, &H43H34, BUF, &LWORK);
}

void SCALAPACKE_pdlaconsb(const double* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* M, const double H44, const double H33, const double H43H34, double* BUF, const lapack_int LWORK) {
    pdlaconsb_(A, DESCA, &I_, &L, M, &H44, &H33, &H43H34, BUF, &LWORK);
}

void SCALAPACKE_pslaconsb(const float* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* M, const float H44, const float H33, const float H43H34, float* BUF, const lapack_int LWORK) {
    pslaconsb_(A, DESCA, &I_, &L, M, &H44, &H33, &H43H34, BUF, &LWORK);
}

void SCALAPACKE_pzlaconsb(const lapack_complex_double* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* M, const lapack_complex_double* H44, const lapack_complex_double* H33, const lapack_complex_double* H43H34, lapack_complex_double* BUF, const lapack_int LWORK) {
    pzlaconsb_(A, DESCA, &I_, &L, M, H44, H33, H43H34, BUF, &LWORK);
}

void SCALAPACKE_pzlacon(const lapack_int N, lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* EST, lapack_int* KASE) {
    pzlacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, EST, KASE);
}

void SCALAPACKE_pclacp2(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pclacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlacp2(const char* UPLO, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pdlacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslacp2(const char* UPLO, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pslacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlacp2(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pzlacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pclacp3(const lapack_int M, const lapack_int I_, lapack_complex_float* A, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int LDB, const lapack_int II, const lapack_int JJ, const lapack_int REV) {
    pclacp3_(&M, &I_, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pdlacp3(const lapack_int M, const lapack_int I_, double* A, const lapack_int* DESCA, double* B, const lapack_int LDB, const lapack_int II, const lapack_int JJ, const lapack_int REV) {
    pdlacp3_(&M, &I_, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pslacp3(const lapack_int M, const lapack_int I_, float* A, const lapack_int* DESCA, float* B, const lapack_int LDB, const lapack_int II, const lapack_int JJ, const lapack_int REV) {
    pslacp3_(&M, &I_, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pzlacp3(const lapack_int M, const lapack_int I_, lapack_complex_double* A, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int LDB, const lapack_int II, const lapack_int JJ, const lapack_int REV) {
    pzlacp3_(&M, &I_, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pclacpy(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pclacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlacpy(const char* UPLO, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pdlacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslacpy(const char* UPLO, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pslacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlacpy(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pzlacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

lapack_int SCALAPACKE_pdlaed0(const lapack_int N, double* D, double* E, double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, double* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    pdlaed0_(&N, D, E, Q, &IQ, &JQ, DESCQ, WORK, IWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslaed0(const lapack_int N, float* D, float* E, float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, float* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    pslaed0_(&N, D, E, Q, &IQ, &JQ, DESCQ, WORK, IWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdlaed1(const lapack_int N, const lapack_int N1, double* D, const lapack_int ID, double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, const double RHO, double* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    pdlaed1_(&N, &N1, D, &ID, Q, &IQ, &JQ, DESCQ, &RHO, WORK, IWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslaed1(const lapack_int N, const lapack_int N1, float* D, const lapack_int ID, float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, const float RHO, float* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    pslaed1_(&N, &N1, D, &ID, Q, &IQ, &JQ, DESCQ, &RHO, WORK, IWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaed2(const lapack_int ICTXT, lapack_int* K, const lapack_int N, const lapack_int N1, const lapack_int NB, double* D, const lapack_int DROW, const lapack_int DCOL, double* Q, const lapack_int LDQ, double* RHO, const double* Z, double* W, double* DLAMDA, double* Q2, const lapack_int LDQ2, double* QBUF, lapack_int* CTOT, lapack_int* PSM, const lapack_int NPCOL, lapack_int* INDX, lapack_int* INDXC, lapack_int* INDXP, lapack_int* INDCOL, lapack_int* COLTYP, lapack_int* NN, lapack_int* NN1, lapack_int* NN2, lapack_int* IB1, lapack_int* IB2) {
    pdlaed2_(&ICTXT, K, &N, &N1, &NB, D, &DROW, &DCOL, Q, &LDQ, RHO, Z, W, DLAMDA, Q2, &LDQ2, QBUF, CTOT, PSM, &NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN, NN1, NN2, IB1, IB2);
}

void SCALAPACKE_pslaed2(const lapack_int ICTXT, lapack_int* K, const lapack_int N, const lapack_int N1, const lapack_int NB, float* D, const lapack_int DROW, const lapack_int DCOL, float* Q, const lapack_int LDQ, float* RHO, const float* Z, float* W, float* DLAMDA, float* Q2, const lapack_int LDQ2, float* QBUF, lapack_int* CTOT, lapack_int* PSM, const lapack_int NPCOL, lapack_int* INDX, lapack_int* INDXC, lapack_int* INDXP, lapack_int* INDCOL, lapack_int* COLTYP, lapack_int* NN, lapack_int* NN1, lapack_int* NN2, lapack_int* IB1, lapack_int* IB2) {
    pslaed2_(&ICTXT, K, &N, &N1, &NB, D, &DROW, &DCOL, Q, &LDQ, RHO, Z, W, DLAMDA, Q2, &LDQ2, QBUF, CTOT, PSM, &NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN, NN1, NN2, IB1, IB2);
}

lapack_int SCALAPACKE_pdlaed3(const lapack_int ICTXT, lapack_int* K, const lapack_int N, const lapack_int NB, double* D, const lapack_int DROW, const lapack_int DCOL, double* RHO, double* DLAMDA, double* W, const double* Z, double* U, const lapack_int LDU, double* BUF, lapack_int* INDX, lapack_int* INDCOL, lapack_int* INDROW, lapack_int* INDXR, lapack_int* INDXC, lapack_int* CTOT, const lapack_int NPCOL) {
    lapack_int INFO = 0;
    pdlaed3_(&ICTXT, K, &N, &NB, D, &DROW, &DCOL, RHO, DLAMDA, W, Z, U, &LDU, BUF, INDX, INDCOL, INDROW, INDXR, INDXC, CTOT, &NPCOL, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslaed3(const lapack_int ICTXT, lapack_int* K, const lapack_int N, const lapack_int NB, float* D, const lapack_int DROW, const lapack_int DCOL, float* RHO, float* DLAMDA, float* W, const float* Z, float* U, const lapack_int LDU, float* BUF, lapack_int* INDX, lapack_int* INDCOL, lapack_int* INDROW, lapack_int* INDXR, lapack_int* INDXC, lapack_int* CTOT, const lapack_int NPCOL) {
    lapack_int INFO = 0;
    pslaed3_(&ICTXT, K, &N, &NB, D, &DROW, &DCOL, RHO, DLAMDA, W, Z, U, &LDU, BUF, INDX, INDCOL, INDROW, INDXR, INDXC, CTOT, &NPCOL, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pjlaenv(const lapack_int ICTXT, const lapack_int ISPEC, const char* NAME, const char* OPTS, const lapack_int N1, const lapack_int N2, const lapack_int N3, const lapack_int N4) {
    return pjlaenv_(&ICTXT, &ISPEC, NAME, OPTS, &N1, &N2, &N3, &N4);
}

lapack_int SCALAPACKE_pilaenvx(const lapack_int ICTXT, const lapack_int ISPEC, const char* NAME, const char* OPTS, const lapack_int N1, const lapack_int N2, const lapack_int N3, const lapack_int N4) {
    return pilaenvx_(&ICTXT, &ISPEC, NAME, OPTS, &N1, &N2, &N3, &N4);
}

void SCALAPACKE_pclaevswp(const lapack_int N, const float* ZIN, const lapack_int LDZI, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, const lapack_int* NVS, const lapack_int* KEY, float* RWORK, const lapack_int LRWORK) {
    pclaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, RWORK, &LRWORK);
}

void SCALAPACKE_pdlaevswp(const lapack_int N, const double* ZIN, const lapack_int LDZI, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, const lapack_int* NVS, const lapack_int* KEY, double* WORK, const lapack_int LWORK) {
    pdlaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, WORK, &LWORK);
}

void SCALAPACKE_pslaevswp(const lapack_int N, const float* ZIN, const lapack_int LDZI, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, const lapack_int* NVS, const lapack_int* KEY, float* WORK, const lapack_int LWORK) {
    pslaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, WORK, &LWORK);
}

void SCALAPACKE_pzlaevswp(const lapack_int N, const double* ZIN, const lapack_int LDZI, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, const lapack_int* NVS, const lapack_int* KEY, double* RWORK, const lapack_int LRWORK) {
    pzlaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, RWORK, &LRWORK);
}

lapack_int SCALAPACKE_clahqr2(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_float* H, const lapack_int LDH, lapack_complex_float* W, const lapack_int ILOZ, const lapack_int IHIZ, lapack_complex_float* Z, const lapack_int LDZ) {
    lapack_int INFO = 0;
    clahqr2_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, &LDH, W, &ILOZ, &IHIZ, Z, &LDZ, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zlahqr2(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_double* H, const lapack_int LDH, lapack_complex_double* W, const lapack_int ILOZ, const lapack_int IHIZ, lapack_complex_double* Z, const lapack_int LDZ) {
    lapack_int INFO = 0;
    zlahqr2_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, &LDH, W, &ILOZ, &IHIZ, Z, &LDZ, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pclahqr(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_float* A, const lapack_int* DESCA, lapack_complex_float* W, const lapack_int ILOZ, const lapack_int IHIZ, lapack_complex_float* Z, const lapack_int* DESCZ, lapack_complex_float* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pclahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, W, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdlahqr(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* A, const lapack_int* DESCA, double* WR, double* WI, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pdlahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslahqr(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* A, const lapack_int* DESCA, float* WR, float* WI, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pslahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzlahqr(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, lapack_complex_double* A, const lapack_int* DESCA, lapack_complex_double* W, const lapack_int ILOZ, const lapack_int IHIZ, lapack_complex_double* Z, const lapack_int* DESCZ, lapack_complex_double* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pzlahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, W, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pclahrd(const lapack_int N, const lapack_int K, const lapack_int NB, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* T, lapack_complex_float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, lapack_complex_float* WORK) {
    pclahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pdlahrd(const lapack_int N, const lapack_int K, const lapack_int NB, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* T, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, double* WORK) {
    pdlahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pslahrd(const lapack_int N, const lapack_int K, const lapack_int NB, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* T, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, float* WORK) {
    pslahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pzlahrd(const lapack_int N, const lapack_int K, const lapack_int NB, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* T, lapack_complex_double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, lapack_complex_double* WORK) {
    pzlahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

double SCALAPACKE_pdlamch(const lapack_int ICTXT, const char* CMACH) {
    return pdlamch_(&ICTXT, CMACH);
}

float SCALAPACKE_pslamch(const lapack_int ICTXT, const char* CMACH) {
    return pslamch_(&ICTXT, CMACH);
}

void SCALAPACKE_pclamr1d(const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pclamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlamr1d(const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pdlamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslamr1d(const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pslamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlamr1d(const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    pzlamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_clamsh(lapack_complex_float* S, const lapack_int LDS, lapack_int* NBULGE, const lapack_int JBLK, lapack_complex_float* H, const lapack_int LDH, const lapack_int N, const float ULP) {
    clamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_dlamsh(double* S, const lapack_int LDS, lapack_int* NBULGE, const lapack_int JBLK, double* H, const lapack_int LDH, const lapack_int N, const double ULP) {
    dlamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_slamsh(float* S, const lapack_int LDS, lapack_int* NBULGE, const lapack_int JBLK, float* H, const lapack_int LDH, const lapack_int N, const float ULP) {
    slamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_zlamsh(lapack_complex_double* S, const lapack_int LDS, lapack_int* NBULGE, const lapack_int JBLK, lapack_complex_double* H, const lapack_int LDH, const lapack_int N, const double ULP) {
    zlamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_pdlamve(const char* UPLO, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* DWORK) {
    pdlamve_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, DWORK);
}

void SCALAPACKE_pslamve(const char* UPLO, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* DWORK) {
    pslamve_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, DWORK);
}

float SCALAPACKE_pclange(const char* NORM, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pclange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlange(const char* NORM, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pdlange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslange(const char* NORM, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pslange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlange(const char* NORM, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pzlange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclanhe(const char* NORM, const char* UPLO, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pclanhe_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlanhe(const char* NORM, const char* UPLO, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pzlanhe_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclanhs(const char* NORM, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pclanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlanhs(const char* NORM, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pdlanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslanhs(const char* NORM, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pslanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlanhs(const char* NORM, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pzlanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclansy(const char* NORM, const char* UPLO, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pclansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlansy(const char* NORM, const char* UPLO, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pdlansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslansy(const char* NORM, const char* UPLO, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pslansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlansy(const char* NORM, const char* UPLO, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pzlansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclantr(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pclantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlantr(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pdlantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslantr(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* WORK) {
    return pslantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlantr(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* WORK) {
    return pzlantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

void SCALAPACKE_clanv2(lapack_complex_float* A, lapack_complex_float* B, lapack_complex_float* C, lapack_complex_float* D, lapack_complex_float* RT1, lapack_complex_float* RT2, float* CS, lapack_complex_float* SN) {
    clanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void SCALAPACKE_zlanv2(lapack_complex_double* A, lapack_complex_double* B, lapack_complex_double* C, lapack_complex_double* D, lapack_complex_double* RT1, lapack_complex_double* RT2, double* CS, lapack_complex_double* SN) {
    zlanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void SCALAPACKE_pclapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP, lapack_int* IWORK) {
    pclapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pdlapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP, lapack_int* IWORK) {
    pdlapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pslapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP, lapack_int* IWORK) {
    pslapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pzlapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP, lapack_int* IWORK) {
    pzlapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

lapack_int SCALAPACKE_dlapst(const char* ID, const lapack_int N, const double* D, const lapack_int* INDX) {
    lapack_int INFO = 0;
    dlapst_(ID, &N, D, INDX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slapst(const char* ID, const lapack_int N, const float* D, const lapack_int* INDX) {
    lapack_int INFO = 0;
    slapst_(ID, &N, D, INDX, &INFO);
    return INFO;
}

void SCALAPACKE_pclapv2(const char* DIREC, const char* ROWCOL, const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP) {
    pclapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pdlapv2(const char* DIREC, const char* ROWCOL, const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP) {
    pdlapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pslapv2(const char* DIREC, const char* ROWCOL, const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP) {
    pslapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pzlapv2(const char* DIREC, const char* ROWCOL, const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int* IPIV, const lapack_int IP, const lapack_int JP, const lapack_int* DESCIP) {
    pzlapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pclaqge(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* R, const float* C, const float ROWCND, const float COLCND, const float AMAX, char* EQUED) {
    pclaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqge(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* R, const double* C, const double ROWCND, const double COLCND, const double AMAX, char* EQUED) {
    pdlaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pslaqge(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* R, const float* C, const float ROWCND, const float COLCND, const float AMAX, char* EQUED) {
    pslaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pzlaqge(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* R, const double* C, const double ROWCND, const double COLCND, const double AMAX, char* EQUED) {
    pzlaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqr0(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* H, const lapack_int* DESCH, double* WR, double* WI, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* INFO, const lapack_int RECLEVEL) {
    pdlaqr0_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, DESCH, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, INFO, &RECLEVEL);
}

void SCALAPACKE_pslaqr0(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* H, const lapack_int* DESCH, float* WR, float* WI, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* INFO, const lapack_int RECLEVEL) {
    pslaqr0_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, DESCH, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, INFO, &RECLEVEL);
}

lapack_int SCALAPACKE_pdlaqr1(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* A, const lapack_int* DESCA, double* WR, double* WI, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pdlaqr1_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslaqr1(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* A, const lapack_int* DESCA, float* WR, float* WI, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, const lapack_int* IWORK, const lapack_int ILWORK) {
    lapack_int INFO = 0;
    pslaqr1_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaqr2(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NW, double* A, const lapack_int* DESCA, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, lapack_int* NS, lapack_int* ND, double* SR, double* SI, double* T, const lapack_int LDT, double* V, const lapack_int LDV, double* WR, double* WI, double* WORK, const lapack_int LWORK) {
    pdlaqr2_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, A, DESCA, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, T, &LDT, V, &LDV, WR, WI, WORK, &LWORK);
}

void SCALAPACKE_pslaqr2(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NW, float* A, const lapack_int* DESCA, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, lapack_int* NS, lapack_int* ND, float* SR, float* SI, float* T, const lapack_int LDT, float* V, const lapack_int LDV, float* WR, float* WI, float* WORK, const lapack_int LWORK) {
    pslaqr2_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, A, DESCA, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, T, &LDT, V, &LDV, WR, WI, WORK, &LWORK);
}

void SCALAPACKE_pdlaqr3(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NW, double* H, const lapack_int* DESCH, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, lapack_int* NS, lapack_int* ND, double* SR, double* SI, double* V, const lapack_int* DESCV, const lapack_int NH, double* T, const lapack_int* DESCT, const lapack_int NV, double* WV, const lapack_int* DESCW, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int RECLEVEL) {
    pdlaqr3_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, V, DESCV, &NH, T, DESCT, &NV, WV, DESCW, WORK, &LWORK, IWORK, &LIWORK, &RECLEVEL);
}

void SCALAPACKE_pslaqr3(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NW, float* H, const lapack_int* DESCH, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, lapack_int* NS, lapack_int* ND, float* SR, float* SI, float* V, const lapack_int* DESCV, const lapack_int NH, float* T, const lapack_int* DESCT, const lapack_int NV, float* WV, const lapack_int* DESCW, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int RECLEVEL) {
    pslaqr3_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, V, DESCV, &NH, T, DESCT, &NV, WV, DESCW, WORK, &LWORK, IWORK, &LIWORK, &RECLEVEL);
}

lapack_int SCALAPACKE_pdlaqr4(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, double* A, const lapack_int* DESCA, double* WR, double* WI, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, double* T, const lapack_int LDT, double* V, const lapack_int LDV, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdlaqr4_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, T, &LDT, V, &LDV, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslaqr4(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int N, const lapack_int ILO, const lapack_int IHI, float* A, const lapack_int* DESCA, float* WR, float* WI, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, float* T, const lapack_int LDT, float* V, const lapack_int LDV, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pslaqr4_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, T, &LDT, V, &LDV, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaqr5(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int KACC22, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NSHFTS, const double* SR, const double* SI, double* H, const lapack_int* DESCH, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    pdlaqr5_(&WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK);
}

void SCALAPACKE_pslaqr5(const lapack_int WANTT, const lapack_int WANTZ, const lapack_int KACC22, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NSHFTS, const float* SR, const float* SI, float* H, const lapack_int* DESCH, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    pslaqr5_(&WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK);
}

void SCALAPACKE_dlaqr6(const char* JOB, const lapack_int WANTT, const lapack_int WANTZ, const lapack_int KACC22, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NSHFTS, const double* SR, const double* SI, double* H, const lapack_int LDH, const lapack_int ILOZ, const lapack_int IHIZ, double* Z, const lapack_int LDZ, double* V, const lapack_int LDV, double* U, const lapack_int LDU, const lapack_int NV, double* WV, const lapack_int LDWV, const lapack_int NH, double* WH, const lapack_int LDWH) {
    dlaqr6_(JOB, &WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, &LDH, &ILOZ, &IHIZ, Z, &LDZ, V, &LDV, U, &LDU, &NV, WV, &LDWV, &NH, WH, &LDWH);
}

void SCALAPACKE_slaqr6(const char* JOB, const lapack_int WANTT, const lapack_int WANTZ, const lapack_int KACC22, const lapack_int N, const lapack_int KTOP, const lapack_int KBOT, const lapack_int NSHFTS, const float* SR, const float* SI, float* H, const lapack_int LDH, const lapack_int ILOZ, const lapack_int IHIZ, float* Z, const lapack_int LDZ, float* V, const lapack_int LDV, float* U, const lapack_int LDU, const lapack_int NV, float* WV, const lapack_int LDWV, const lapack_int NH, float* WH, const lapack_int LDWH) {
    slaqr6_(JOB, &WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, &LDH, &ILOZ, &IHIZ, Z, &LDZ, V, &LDV, U, &LDU, &NV, WV, &LDWV, &NH, WH, &LDWH);
}

void SCALAPACKE_pclaqsy(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* SR, const float* SC, const float SCOND, const float AMAX, char* EQUED) {
    pclaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqsy(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* SR, const double* SC, const double SCOND, const double AMAX, char* EQUED) {
    pdlaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pslaqsy(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* SR, const float* SC, const float SCOND, const float AMAX, char* EQUED) {
    pslaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pzlaqsy(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* SR, const double* SC, const double SCOND, const double AMAX, char* EQUED) {
    pzlaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_dlar1va(const lapack_int N, const lapack_int B1, const lapack_int BN, const double LAMBDA, const double* D, const double* L, const double* LD, const double* LLD, const double PIVMIN, const double GAPTOL, double* Z, const lapack_int WANTNC, lapack_int* NEGCNT, double* ZTZ, double* MINGMA, lapack_int* R, lapack_int* ISUPPZ, double* NRMINV, double* RESID, double* RQCORR, double* WORK) {
    dlar1va_(&N, &B1, &BN, &LAMBDA, D, L, LD, LLD, &PIVMIN, &GAPTOL, Z, &WANTNC, NEGCNT, ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SCALAPACKE_slar1va(const lapack_int N, const lapack_int B1, const lapack_int BN, const float LAMBDA, const float* D, const float* L, const float* LD, const float* LLD, const float PIVMIN, const float GAPTOL, float* Z, const lapack_int WANTNC, lapack_int* NEGCNT, float* ZTZ, float* MINGMA, lapack_int* R, lapack_int* ISUPPZ, float* NRMINV, float* RESID, float* RQCORR, float* WORK) {
    slar1va_(&N, &B1, &BN, &LAMBDA, D, L, LD, LLD, &PIVMIN, &GAPTOL, Z, &WANTNC, NEGCNT, ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SCALAPACKE_pdlared1d(const lapack_int N, const lapack_int IA, const lapack_int JA, const lapack_int* DESC, const double* BYCOL, double* BYALL, double* WORK, const lapack_int* LWORK) {
    pdlared1d_(&N, &IA, &JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void SCALAPACKE_pslared1d(const lapack_int N, const lapack_int IA, const lapack_int JA, const lapack_int* DESC, const float* BYCOL, float* BYALL, float* WORK, const lapack_int* LWORK) {
    pslared1d_(&N, &IA, &JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void SCALAPACKE_pdlared2d(const lapack_int N, const lapack_int IA, const lapack_int JA, const lapack_int* DESC, const double* BYROW, double* BYALL, double* WORK, const lapack_int* LWORK) {
    pdlared2d_(&N, &IA, &JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void SCALAPACKE_pslared2d(const lapack_int N, const lapack_int IA, const lapack_int JA, const lapack_int* DESC, const float* BYROW, float* BYALL, float* WORK, const lapack_int* LWORK) {
    pslared2d_(&N, &IA, &JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void SCALAPACKE_claref(const char* TYPE, lapack_complex_float* A, const lapack_int LDA, const lapack_int WANTZ, lapack_complex_float* Z, const lapack_int LDZ, const lapack_int BLOCK, lapack_int* IROW1, lapack_int* ICOL1, const lapack_int ISTART, const lapack_int ISTOP, const lapack_int ITMP1, const lapack_int ITMP2, const lapack_int LILOZ, const lapack_int LIHIZ, const lapack_complex_float* VECS, lapack_complex_float* V2, lapack_complex_float* V3, lapack_complex_float* T1, lapack_complex_float* T2, lapack_complex_float* T3) {
    claref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_dlaref(const char* TYPE, double* A, const lapack_int LDA, const lapack_int WANTZ, double* Z, const lapack_int LDZ, const lapack_int BLOCK, lapack_int* IROW1, lapack_int* ICOL1, const lapack_int ISTART, const lapack_int ISTOP, const lapack_int ITMP1, const lapack_int ITMP2, const lapack_int LILOZ, const lapack_int LIHIZ, const double* VECS, double* V2, double* V3, double* T1, double* T2, double* T3) {
    dlaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_slaref(const char* TYPE, float* A, const lapack_int LDA, const lapack_int WANTZ, float* Z, const lapack_int LDZ, const lapack_int BLOCK, lapack_int* IROW1, lapack_int* ICOL1, const lapack_int ISTART, const lapack_int ISTOP, const lapack_int ITMP1, const lapack_int ITMP2, const lapack_int LILOZ, const lapack_int LIHIZ, const float* VECS, float* V2, float* V3, float* T1, float* T2, float* T3) {
    slaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_zlaref(const char* TYPE, lapack_complex_double* A, const lapack_int LDA, const lapack_int WANTZ, lapack_complex_double* Z, const lapack_int LDZ, const lapack_int BLOCK, lapack_int* IROW1, lapack_int* ICOL1, const lapack_int ISTART, const lapack_int ISTOP, const lapack_int ITMP1, const lapack_int ITMP2, const lapack_int LILOZ, const lapack_int LIHIZ, const lapack_complex_double* VECS, lapack_complex_double* V2, lapack_complex_double* V3, lapack_complex_double* T1, lapack_complex_double* T2, lapack_complex_double* T3) {
    zlaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_pclarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_float* T, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const double* T, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK) {
    pdlarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const float* T, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK) {
    pslarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_double* T, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarf(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarfc(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarfc_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarfc(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarfc_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarf(const char* SIDE, const lapack_int M, const lapack_int N, const double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK) {
    pdlarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarfg(const lapack_int N, lapack_complex_float* ALPHA, const lapack_int IAX, const lapack_int JAX, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, lapack_complex_float* TAU) {
    pclarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pdlarfg(const lapack_int N, double* ALPHA, const lapack_int IAX, const lapack_int JAX, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* TAU) {
    pdlarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pslarfg(const lapack_int N, float* ALPHA, const lapack_int IAX, const lapack_int JAX, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* TAU) {
    pslarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pzlarfg(const lapack_int N, lapack_complex_double* ALPHA, const lapack_int IAX, const lapack_int JAX, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, lapack_complex_double* TAU) {
    pzlarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pslarf(const char* SIDE, const lapack_int M, const lapack_int N, const float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK) {
    pslarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarft(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_float* TAU, lapack_complex_float* T, lapack_complex_float* WORK) {
    pclarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pdlarft(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const double* TAU, double* T, double* WORK) {
    pdlarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pslarft(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const float* TAU, float* T, float* WORK) {
    pslarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarft(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_double* TAU, lapack_complex_double* T, lapack_complex_double* WORK) {
    pzlarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarf(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

lapack_int SCALAPACKE_dlarrb2(const lapack_int N, const double* D, const double* LLD, const lapack_int IFIRST, const lapack_int ILAST, const double RTOL1, const double RTOL2, const lapack_int OFFSET, double* W, double* WGAP, double* WERR, double* WORK, lapack_int* IWORK, const double PIVMIN, const double LGPVMN, const double LGSPDM, const lapack_int TWIST) {
    lapack_int INFO = 0;
    dlarrb2_(&N, D, LLD, &IFIRST, &ILAST, &RTOL1, &RTOL2, &OFFSET, W, WGAP, WERR, WORK, IWORK, &PIVMIN, &LGPVMN, &LGSPDM, &TWIST, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slarrb2(const lapack_int N, const float* D, const float* LLD, const lapack_int IFIRST, const lapack_int ILAST, const float RTOL1, const float RTOL2, const lapack_int OFFSET, float* W, float* WGAP, float* WERR, float* WORK, lapack_int* IWORK, const float PIVMIN, const float LGPVMN, const float LGSPDM, const lapack_int TWIST) {
    lapack_int INFO = 0;
    slarrb2_(&N, D, LLD, &IFIRST, &ILAST, &RTOL1, &RTOL2, &OFFSET, W, WGAP, WERR, WORK, IWORK, &PIVMIN, &LGPVMN, &LGSPDM, &TWIST, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dlarrd2(const char* RANGE, const char* ORDER, const lapack_int N, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double* GERS, const double RELTOL, const double* D, const double* E, const double* E2, const double PIVMIN, const lapack_int NSPLIT, const lapack_int* ISPLIT, lapack_int* M, double* W, double* WERR, double* WL, double* WU, lapack_int* IBLOCK, lapack_int* INDEXW, double* WORK, lapack_int* IWORK, const lapack_int DOL, const lapack_int DOU) {
    lapack_int INFO = 0;
    dlarrd2_(RANGE, ORDER, &N, &VL, &VU, &IL, &IU, GERS, &RELTOL, D, E, E2, &PIVMIN, &NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, &DOL, &DOU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slarrd2(const char* RANGE, const char* ORDER, const lapack_int N, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float* GERS, const float RELTOL, const float* D, const float* E, const float* E2, const float PIVMIN, const lapack_int NSPLIT, const lapack_int* ISPLIT, lapack_int* M, float* W, float* WERR, float* WL, float* WU, lapack_int* IBLOCK, lapack_int* INDEXW, float* WORK, lapack_int* IWORK, const lapack_int DOL, const lapack_int DOU) {
    lapack_int INFO = 0;
    slarrd2_(RANGE, ORDER, &N, &VL, &VU, &IL, &IU, GERS, &RELTOL, D, E, E2, &PIVMIN, &NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, &DOL, &DOU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dlarre2a(const char* RANGE, const lapack_int N, double* VL, double* VU, const lapack_int IL, const lapack_int IU, double* D, double* E, double* E2, const double RTOL1, const double RTOL2, const double SPLTOL, lapack_int* NSPLIT, lapack_int* ISPLIT, lapack_int* M, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, double* W, double* WERR, double* WGAP, lapack_int* IBLOCK, lapack_int* INDEXW, double* GERS, double* SDIAM, double* PIVMIN, double* WORK, lapack_int* IWORK, const double MINRGP) {
    lapack_int INFO = 0;
    dlarre2a_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, PIVMIN, WORK, IWORK, &MINRGP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slarre2a(const char* RANGE, const lapack_int N, float* VL, float* VU, const lapack_int IL, const lapack_int IU, float* D, float* E, float* E2, const float RTOL1, const float RTOL2, const float SPLTOL, lapack_int* NSPLIT, lapack_int* ISPLIT, lapack_int* M, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, float* W, float* WERR, float* WGAP, lapack_int* IBLOCK, lapack_int* INDEXW, float* GERS, float* SDIAM, float* PIVMIN, float* WORK, lapack_int* IWORK, const float MINRGP) {
    lapack_int INFO = 0;
    slarre2a_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, PIVMIN, WORK, IWORK, &MINRGP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dlarre2(const char* RANGE, const lapack_int N, double* VL, double* VU, const lapack_int IL, const lapack_int IU, double* D, double* E, double* E2, const double RTOL1, const double RTOL2, const double SPLTOL, lapack_int* NSPLIT, lapack_int* ISPLIT, lapack_int* M, const lapack_int DOL, const lapack_int DOU, double* W, double* WERR, double* WGAP, lapack_int* IBLOCK, lapack_int* INDEXW, double* GERS, double* PIVMIN, double* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    dlarre2_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN, WORK, IWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slarre2(const char* RANGE, const lapack_int N, float* VL, float* VU, const lapack_int IL, const lapack_int IU, float* D, float* E, float* E2, const float RTOL1, const float RTOL2, const float SPLTOL, lapack_int* NSPLIT, lapack_int* ISPLIT, lapack_int* M, const lapack_int DOL, const lapack_int DOU, float* W, float* WERR, float* WGAP, lapack_int* IBLOCK, lapack_int* INDEXW, float* GERS, float* PIVMIN, float* WORK, lapack_int* IWORK) {
    lapack_int INFO = 0;
    slarre2_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN, WORK, IWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dlarrv2(const lapack_int N, const double VL, const double VU, double* D, double* L, const double PIVMIN, const lapack_int* ISPLIT, const lapack_int M, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, const double MINRGP, const double RTOL1, const double RTOL2, double* W, double* WERR, double* WGAP, const lapack_int* IBLOCK, const lapack_int* INDEXW, const double* GERS, const double* SDIAM, double* Z, const lapack_int LDZ, lapack_int* ISUPPZ, double* WORK, lapack_int* IWORK, lapack_int* VSTART, lapack_int* FINISH, lapack_int* MAXCLS, lapack_int* NDEPTH, lapack_int* PARITY, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    dlarrv2_(&N, &VL, &VU, D, L, &PIVMIN, ISPLIT, &M, &DOL, &DOU, NEEDIL, NEEDIU, &MINRGP, &RTOL1, &RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, &LDZ, ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slarrv2(const lapack_int N, const float VL, const float VU, float* D, float* L, const float PIVMIN, const lapack_int* ISPLIT, const lapack_int M, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, const float MINRGP, const float RTOL1, const float RTOL2, float* W, float* WERR, float* WGAP, const lapack_int* IBLOCK, const lapack_int* INDEXW, const float* GERS, const float* SDIAM, float* Z, const lapack_int LDZ, lapack_int* ISUPPZ, float* WORK, lapack_int* IWORK, lapack_int* VSTART, lapack_int* FINISH, lapack_int* MAXCLS, lapack_int* NDEPTH, lapack_int* PARITY, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    slarrv2_(&N, &VL, &VU, D, L, &PIVMIN, ISPLIT, &M, &DOL, &DOU, NEEDIL, NEEDIU, &MINRGP, &RTOL1, &RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, &LDZ, ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

void SCALAPACKE_pclarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_float* T, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const double* T, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK) {
    pdlarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const float* T, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK) {
    pslarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_double* T, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarz(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarzc(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK) {
    pclarzc_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarzc(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarzc_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarz(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK) {
    pdlarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarz(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK) {
    pslarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarzt(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, lapack_complex_float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_float* TAU, lapack_complex_float* T, lapack_complex_float* WORK) {
    pclarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pdlarzt(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const double* TAU, double* T, double* WORK) {
    pdlarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pslarzt(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, float* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const float* TAU, float* T, float* WORK) {
    pslarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarzt(const char* DIRECT, const char* STOREV, const lapack_int N, const lapack_int K, lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_complex_double* TAU, lapack_complex_double* T, lapack_complex_double* WORK) {
    pzlarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarz(const char* SIDE, const lapack_int M, const lapack_int N, const lapack_int L, const lapack_complex_double* V, const lapack_int IV, const lapack_int JV, const lapack_int* DESCV, const lapack_int INCV, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK) {
    pzlarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

lapack_int SCALAPACKE_pclascl(const char* TYPE, const float CFROM, const float CTO, const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pclascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdlascl(const char* TYPE, const double CFROM, const double CTO, const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdlascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslascl(const char* TYPE, const float CFROM, const float CTO, const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pslascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzlascl(const char* TYPE, const double CFROM, const double CTO, const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pzlascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

void SCALAPACKE_pclase2(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_float ALPHA, const lapack_complex_float BETA, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pclase2_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlase2(const char* UPLO, const lapack_int M, const lapack_int N, const double ALPHA, const double BETA, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdlase2_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslase2(const char* UPLO, const lapack_int M, const lapack_int N, const float ALPHA, const float BETA, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pslase2_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlase2(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_double* ALPHA, const lapack_complex_double* BETA, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzlase2_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclaset(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_float ALPHA, const lapack_complex_float BETA, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pclaset_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlaset(const char* UPLO, const lapack_int M, const lapack_int N, const double ALPHA, const double BETA, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdlaset_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslaset(const char* UPLO, const lapack_int M, const lapack_int N, const float ALPHA, const float BETA, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pslaset_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlaset(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_double* ALPHA, const lapack_complex_double* BETA, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzlaset_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclasmsub(const lapack_complex_float* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* K, const float SMLNUM, lapack_complex_float* BUF, const lapack_int LWORK) {
    pclasmsub_(A, DESCA, &I_, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pdlasmsub(const double* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* K, const double SMLNUM, double* BUF, const lapack_int LWORK) {
    pdlasmsub_(A, DESCA, &I_, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pslasmsub(const float* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* K, const float SMLNUM, float* BUF, const lapack_int LWORK) {
    pslasmsub_(A, DESCA, &I_, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pzlasmsub(const lapack_complex_double* A, const lapack_int* DESCA, const lapack_int I_, const lapack_int L, lapack_int* K, const double SMLNUM, lapack_complex_double* BUF, const lapack_int LWORK) {
    pzlasmsub_(A, DESCA, &I_, &L, K, &SMLNUM, BUF, &LWORK);
}

lapack_int SCALAPACKE_dlasorte(double* S, const lapack_int LDS, const lapack_int J, double* OUT) {
    lapack_int INFO = 0;
    dlasorte_(S, &LDS, &J, OUT, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slasorte(float* S, const lapack_int LDS, const lapack_int J, float* OUT) {
    lapack_int INFO = 0;
    slasorte_(S, &LDS, &J, OUT, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dlasrt2(const char* ID, const lapack_int N, double* D, lapack_int* KEY) {
    lapack_int INFO = 0;
    dlasrt2_(ID, &N, D, KEY, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_slasrt2(const char* ID, const lapack_int N, float* D, lapack_int* KEY) {
    lapack_int INFO = 0;
    slasrt2_(ID, &N, D, KEY, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdlasrt(const char* ID, const lapack_int N, double* D, const double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdlasrt_(ID, &N, D, Q, &IQ, &JQ, DESCQ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pslasrt(const char* ID, const lapack_int N, float* D, const float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pslasrt_(ID, &N, D, Q, &IQ, &JQ, DESCQ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pclassq(const lapack_int N, const lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* SCALE, float* SUMSQ) {
    pclassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pdlassq(const lapack_int N, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* SCALE, double* SUMSQ) {
    pdlassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pslassq(const lapack_int N, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* SCALE, float* SUMSQ) {
    pslassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pzlassq(const lapack_int N, const lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* SCALE, double* SUMSQ) {
    pzlassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pclaswp(const char* DIREC, const char* ROWCOL, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int K1, const lapack_int K2, const lapack_int* IPIV) {
    pclaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pdlaswp(const char* DIREC, const char* ROWCOL, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int K1, const lapack_int K2, const lapack_int* IPIV) {
    pdlaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pslaswp(const char* DIREC, const char* ROWCOL, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int K1, const lapack_int K2, const lapack_int* IPIV) {
    pslaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pzlaswp(const char* DIREC, const char* ROWCOL, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int K1, const lapack_int K2, const lapack_int* IPIV) {
    pzlaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

lapack_complex_float* SCALAPACKE_pclatra(const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    return pclatra_(&N, A, &IA, &JA, DESCA);
}

double SCALAPACKE_pdlatra(const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    return pdlatra_(&N, A, &IA, &JA, DESCA);
}

float SCALAPACKE_pslatra(const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    return pslatra_(&N, A, &IA, &JA, DESCA);
}

lapack_complex_double* SCALAPACKE_pzlatra(const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    return pzlatra_(&N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclatrd(const char* UPLO, const lapack_int N, const lapack_int NB, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, lapack_complex_float* TAU, lapack_complex_float* W, const lapack_int IW, const lapack_int JW, const lapack_int* DESCW, lapack_complex_float* WORK) {
    pclatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pdlatrd(const char* UPLO, const lapack_int N, const lapack_int NB, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAU, double* W, const lapack_int IW, const lapack_int JW, const lapack_int* DESCW, double* WORK) {
    pdlatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pslatrd(const char* UPLO, const lapack_int N, const lapack_int NB, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAU, float* W, const lapack_int IW, const lapack_int JW, const lapack_int* DESCW, float* WORK) {
    pslatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pzlatrd(const char* UPLO, const lapack_int N, const lapack_int NB, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, lapack_complex_double* TAU, lapack_complex_double* W, const lapack_int IW, const lapack_int JW, const lapack_int* DESCW, lapack_complex_double* WORK) {
    pzlatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pclatrz(const lapack_int M, const lapack_int N, const lapack_int L, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK) {
    pclatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pdlatrz(const lapack_int M, const lapack_int N, const lapack_int L, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK) {
    pdlatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pslatrz(const lapack_int M, const lapack_int N, const lapack_int L, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK) {
    pslatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pzlatrz(const lapack_int M, const lapack_int N, const lapack_int L, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK) {
    pzlatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

lapack_int SCALAPACKE_pclattrs(const char* UPLO, const char* TRANS, const char* DIAG, const char* NORMIN, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* SCALE, float* CNORM) {
    lapack_int INFO = 0;
    pclattrs_(UPLO, TRANS, DIAG, NORMIN, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, SCALE, CNORM, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzlattrs(const char* UPLO, const char* TRANS, const char* DIAG, const char* NORMIN, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* SCALE, double* CNORM) {
    lapack_int INFO = 0;
    pzlattrs_(UPLO, TRANS, DIAG, NORMIN, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, SCALE, CNORM, &INFO);
    return INFO;
}

void SCALAPACKE_pclauu2(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pclauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlauu2(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdlauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslauu2(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pslauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlauu2(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzlauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclauum(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pclauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlauum(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdlauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslauum(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pslauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlauum(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzlauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclawil(const lapack_int II, const lapack_int JJ, const lapack_int M, const lapack_complex_float* A, const lapack_int* DESCA, const lapack_complex_float H44, const lapack_complex_float H33, const lapack_complex_float H43H34, lapack_complex_float* V) {
    pclawil_(&II, &JJ, &M, A, DESCA, &H44, &H33, &H43H34, V);
}

void SCALAPACKE_pdlawil(const lapack_int II, const lapack_int JJ, const lapack_int M, const double* A, const lapack_int* DESCA, const double H44, const double H33, const double H43H34, double* V) {
    pdlawil_(&II, &JJ, &M, A, DESCA, &H44, &H33, &H43H34, V);
}

void SCALAPACKE_pslawil(const lapack_int II, const lapack_int JJ, const lapack_int M, const float* A, const lapack_int* DESCA, const float H44, const float H33, const float H43H34, float* V) {
    pslawil_(&II, &JJ, &M, A, DESCA, &H44, &H33, &H43H34, V);
}

void SCALAPACKE_pzlawil(const lapack_int II, const lapack_int JJ, const lapack_int M, const lapack_complex_double* A, const lapack_int* DESCA, const lapack_complex_double* H44, const lapack_complex_double* H33, const lapack_complex_double* H43H34, lapack_complex_double* V) {
    pzlawil_(&II, &JJ, &M, A, DESCA, H44, H33, H43H34, V);
}

void SCALAPACKE_pcmax1(const lapack_int N, lapack_complex_float* AMAX, lapack_int* INDX, const lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pcmax1_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzmax1(const lapack_int N, lapack_complex_double* AMAX, lapack_int* INDX, const lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pzmax1_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

lapack_int SCALAPACKE_pdorg2l(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorg2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorg2l(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorg2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorg2r(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorg2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorg2r(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorg2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorgl2(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorgl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorgl2(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorgl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorglq(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorglq(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorgql(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorgql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorgql(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorgql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorgqr(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorgqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorgqr(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorgqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorgr2(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorgr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorgr2(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorgr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorgrq(const lapack_int M, const lapack_int N, const lapack_int K, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorgrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorgrq(const lapack_int M, const lapack_int N, const lapack_int K, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorgrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorm2l(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorm2l(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorm2r(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorm2r(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormbr(const char* VECT, const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormbr(const char* VECT, const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormhr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int ILO, const lapack_int IHI, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormhr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int ILO, const lapack_int IHI, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdorml2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdorml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psorml2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psorml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormlq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormlq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormql(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormql(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormqr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormqr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormr2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormr2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormr3(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormr3(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormrq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormrq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormrz(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormrz(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdormtr(const char* SIDE, const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* TAU, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdormtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psormtr(const char* SIDE, const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* TAU, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psormtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpbsv(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpbsv(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspbsv(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpbsv(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpbtrf(const char* UPLO, const lapack_int N, const lapack_int BW, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpbtrf(const char* UPLO, const lapack_int N, const lapack_int BW, double* A, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspbtrf(const char* UPLO, const lapack_int N, const lapack_int BW, float* A, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpbtrf(const char* UPLO, const lapack_int N, const lapack_int BW, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpbtrs(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpbtrs(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspbtrs(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_float* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BW, const lapack_int NRHS, double* A, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BW, const lapack_int NRHS, float* A, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpbtrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpbtrs(const char* UPLO, const lapack_int N, const lapack_int BW, const lapack_int NRHS, lapack_complex_double* A, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pmpcol(const lapack_int MYPROC, const lapack_int NPROCS, const lapack_int IIL, const lapack_int NEEDIL, const lapack_int NEEDIU, const lapack_int* PMYILS, const lapack_int* PMYIUS, lapack_int* COLBRT, lapack_int* FRSTCL, const lapack_int LASTCL) {
    pmpcol_(&MYPROC, &NPROCS, &IIL, &NEEDIL, &NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL, &LASTCL);
}

void SCALAPACKE_pmpim2(const lapack_int IL, const lapack_int IU, const lapack_int NPROCS, lapack_int* PMYILS, lapack_int* PMYIUS) {
    pmpim2_(&IL, &IU, &NPROCS, PMYILS, PMYIUS);
}

lapack_int SCALAPACKE_pcpocon(const char* UPLO, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float ANORM, float* RCOND, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpocon(const char* UPLO, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double ANORM, double* RCOND, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspocon(const char* UPLO, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float ANORM, float* RCOND, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pspocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpocon(const char* UPLO, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double ANORM, double* RCOND, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpoequ(const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* SR, float* SC, float* SCOND, float* AMAX) {
    lapack_int INFO = 0;
    pcpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpoequ(const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* SR, double* SC, double* SCOND, double* AMAX) {
    lapack_int INFO = 0;
    pdpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspoequ(const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* SR, float* SC, float* SCOND, float* AMAX) {
    lapack_int INFO = 0;
    pspoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpoequ(const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* SR, double* SC, double* SCOND, double* AMAX) {
    lapack_int INFO = 0;
    pzpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcporfs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* FERR, float* BERR, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdporfs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* FERR, double* BERR, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psporfs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* FERR, float* BERR, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzporfs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, const lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* FERR, double* BERR, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcposv(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pcposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdposv(const char* UPLO, const lapack_int N, const lapack_int NRHS, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psposv(const char* UPLO, const lapack_int N, const lapack_int NRHS, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    psposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcposvx(const char* FACT, const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, char* EQUED, lapack_complex_float* SR, lapack_complex_float* SC, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* RCOND, float* FERR, float* BERR, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pcposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdposvx(const char* FACT, const char* UPLO, const lapack_int N, const lapack_int NRHS, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, char* EQUED, double* SR, double* SC, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psposvx(const char* FACT, const char* UPLO, const lapack_int N, const lapack_int NRHS, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, char* EQUED, float* SR, float* SC, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzposvx(const char* FACT, const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int IAF, const lapack_int JAF, const lapack_int* DESCAF, char* EQUED, lapack_complex_double* SR, lapack_complex_double* SC, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, double* RCOND, double* FERR, double* BERR, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pzposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzposv(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pzposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpotf2(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pcpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpotf2(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspotf2(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pspotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpotf2(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pzpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpotrf(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pcpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpotrf(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspotrf(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pspotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpotrf(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pzpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpotri(const char* UPLO, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pcpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpotri(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspotri(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pspotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpotri(const char* UPLO, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pzpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpotrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pcpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpotrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspotrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pspotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpotrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pzpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcptsv(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_float* D, lapack_complex_float* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcptsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdptsv(const lapack_int N, const lapack_int NRHS, double* D, double* E, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdptsv_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psptsv(const lapack_int N, const lapack_int NRHS, float* D, float* E, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psptsv_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzptsv(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_double* D, lapack_complex_double* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzptsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpttrf(const lapack_int N, lapack_complex_float* D, lapack_complex_float* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpttrf(const lapack_int N, double* D, double* E, const lapack_int JA, const lapack_int* DESCA, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspttrf(const lapack_int N, float* D, float* E, const lapack_int JA, const lapack_int* DESCA, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpttrf(const lapack_int N, lapack_complex_double* D, lapack_complex_double* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpttrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_float* D, lapack_complex_float* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpttrs_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpttrs(const lapack_int N, const lapack_int NRHS, double* D, double* E, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpttrs_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspttrs(const lapack_int N, const lapack_int NRHS, float* D, float* E, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspttrs_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_cpttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const float* D, const lapack_complex_float* E, lapack_complex_float* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    cpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcpttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_float* D, lapack_complex_float* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_float* AF, const lapack_int LAF, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dpttrsv(const char* TRANS, const lapack_int N, const lapack_int NRHS, const double* D, const lapack_complex_double* E, lapack_complex_double* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    dpttrsv_(TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdpttrsv(const char* UPLO, const lapack_int N, const lapack_int NRHS, double* D, double* E, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int* DESCB, double* AF, const lapack_int LAF, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdpttrsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pspttrsv(const char* UPLO, const lapack_int N, const lapack_int NRHS, float* D, float* E, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int* DESCB, float* AF, const lapack_int LAF, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pspttrsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_spttrsv(const char* TRANS, const lapack_int N, const lapack_int NRHS, const float* D, const lapack_complex_float* E, lapack_complex_float* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    spttrsv_(TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zpttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, const double* D, const lapack_complex_double* E, lapack_complex_double* B, const lapack_int LDB) {
    lapack_int INFO = 0;
    zpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpttrsv(const char* UPLO, const char* TRANS, const lapack_int N, const lapack_int NRHS, lapack_complex_double* D, lapack_complex_double* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzpttrs(const char* UPLO, const lapack_int N, const lapack_int NRHS, lapack_complex_double* D, lapack_complex_double* E, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int* DESCB, lapack_complex_double* AF, const lapack_int LAF, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzpttrs_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdrot(const lapack_int N, double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, double* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, const double CS, const double SN, const double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdrot_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, &CS, &SN, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psrot(const lapack_int N, float* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX, float* Y, const lapack_int IY, const lapack_int JY, const lapack_int* DESCY, const lapack_int INCY, const float CS, const float SN, const float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    psrot_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, &CS, &SN, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdrscl(const lapack_int N, const double SA, double* SX, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psrscl(const lapack_int N, const float SA, float* SX, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    psrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_bslaapp(const lapack_int ISIDE, const lapack_int M, const lapack_int N, const lapack_int NB, float* A, const lapack_int LDA, const lapack_int NITRAF, const lapack_int* ITRAF, float* DTRAF, float* WORK) {
    bslaapp_(&ISIDE, &M, &N, &NB, A, &LDA, &NITRAF, ITRAF, DTRAF, WORK);
}

lapack_int SCALAPACKE_bslaexc(const lapack_int N, float* T, const lapack_int LDT, const lapack_int J1, const lapack_int N1, const lapack_int N2, lapack_int* ITRAF, float* DTRAF, float* WORK) {
    lapack_int INFO = 0;
    bslaexc_(&N, T, &LDT, &J1, &N1, &N2, ITRAF, DTRAF, WORK, &INFO);
    return INFO;
}

void SCALAPACKE_pcsrscl(const lapack_int N, const float SA, lapack_complex_float* SX, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pcsrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

lapack_int SCALAPACKE_pdstebz(const lapack_int ICTXT, const char* RANGE, const char* ORDER, const lapack_int N, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double ABSTOL, const double* D, const double* E, lapack_int* M, lapack_int* NSPLIT, double* W, lapack_int* IBLOCK, lapack_int* ISPLIT, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdstebz_(&ICTXT, RANGE, ORDER, &N, &VL, &VU, &IL, &IU, &ABSTOL, D, E, M, NSPLIT, W, IBLOCK, ISPLIT, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psstebz(const lapack_int ICTXT, const char* RANGE, const char* ORDER, const lapack_int N, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float ABSTOL, const float* D, const float* E, lapack_int* M, lapack_int* NSPLIT, float* W, lapack_int* IBLOCK, lapack_int* ISPLIT, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psstebz_(&ICTXT, RANGE, ORDER, &N, &VL, &VU, &IL, &IU, &ABSTOL, D, E, M, NSPLIT, W, IBLOCK, ISPLIT, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdstedc(const char* COMPZ, const lapack_int N, double* D, double* E, double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, double* WORK, lapack_int* LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdstedc_(COMPZ, &N, D, E, Q, &IQ, &JQ, DESCQ, WORK, LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psstedc(const char* COMPZ, const lapack_int N, float* D, float* E, float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, float* WORK, lapack_int* LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    psstedc_(COMPZ, &N, D, E, Q, &IQ, &JQ, DESCQ, WORK, LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dstegr2a(const char* JOBZ, const char* RANGE, const lapack_int N, double* D, double* E, const double VL, const double VU, const lapack_int IL, const lapack_int IU, lapack_int* M, double* W, double* Z, const lapack_int LDZ, const lapack_int NZC, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, lapack_int* INDERR, lapack_int* NSPLIT, double* PIVMIN, double* SCALE, double* WL, double* WU) {
    lapack_int INFO = 0;
    dstegr2a_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDERR, NSPLIT, PIVMIN, SCALE, WL, WU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sstegr2a(const char* JOBZ, const char* RANGE, const lapack_int N, float* D, float* E, const float VL, const float VU, const lapack_int IL, const lapack_int IU, lapack_int* M, float* W, float* Z, const lapack_int LDZ, const lapack_int NZC, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, lapack_int* INDERR, lapack_int* NSPLIT, float* PIVMIN, float* SCALE, float* WL, float* WU) {
    lapack_int INFO = 0;
    sstegr2a_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDERR, NSPLIT, PIVMIN, SCALE, WL, WU, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dstegr2b(const char* JOBZ, const lapack_int N, double* D, double* E, const lapack_int M, const double* W, double* Z, const lapack_int LDZ, const lapack_int NZC, lapack_int* ISUPPZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, lapack_int* INDWLC, const double PIVMIN, const double SCALE, const double WL, const double WU, lapack_int* VSTART, lapack_int* FINISH, lapack_int* MAXCLS, lapack_int* NDEPTH, lapack_int* PARITY, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    dstegr2b_(JOBZ, &N, D, E, &M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDWLC, &PIVMIN, &SCALE, &WL, &WU, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sstegr2b(const char* JOBZ, const lapack_int N, float* D, float* E, const lapack_int M, const float* W, float* Z, const lapack_int LDZ, const lapack_int NZC, lapack_int* ISUPPZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, lapack_int* NEEDIL, lapack_int* NEEDIU, lapack_int* INDWLC, const float PIVMIN, const float SCALE, const float WL, const float WU, lapack_int* VSTART, lapack_int* FINISH, lapack_int* MAXCLS, lapack_int* NDEPTH, lapack_int* PARITY, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    sstegr2b_(JOBZ, &N, D, E, &M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDWLC, &PIVMIN, &SCALE, &WL, &WU, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dstegr2(const char* JOBZ, const char* RANGE, const lapack_int N, double* D, double* E, const double VL, const double VU, const lapack_int IL, const lapack_int IU, lapack_int* M, double* W, double* Z, const lapack_int LDZ, const lapack_int NZC, lapack_int* ISUPPZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    dstegr2_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, &ZOFFSET, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sstegr2(const char* JOBZ, const char* RANGE, const lapack_int N, float* D, float* E, const float VL, const float VU, const lapack_int IL, const lapack_int IU, lapack_int* M, float* W, float* Z, const lapack_int LDZ, const lapack_int NZC, lapack_int* ISUPPZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, const lapack_int DOL, const lapack_int DOU, const lapack_int ZOFFSET) {
    lapack_int INFO = 0;
    sstegr2_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, &ZOFFSET, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dstein2(const lapack_int N, const double* D, const double* E, const lapack_int M, const double* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const double ORFAC, double* Z, const lapack_int LDZ, double* WORK, lapack_int* IWORK, lapack_int* IFAIL) {
    lapack_int INFO = 0;
    dstein2_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &LDZ, WORK, IWORK, IFAIL, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_sstein2(const lapack_int N, const float* D, const float* E, const lapack_int M, const float* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const float ORFAC, float* Z, const lapack_int LDZ, float* WORK, lapack_int* IWORK, lapack_int* IFAIL) {
    lapack_int INFO = 0;
    sstein2_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &LDZ, WORK, IWORK, IFAIL, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcstein(const lapack_int N, const float* D, const float* E, const lapack_int M, float* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const float ORFAC, lapack_complex_float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    pcstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdstein(const lapack_int N, const double* D, const double* E, const lapack_int M, double* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const double ORFAC, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pdstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_psstein(const lapack_int N, const float* D, const float* E, const lapack_int M, float* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const float ORFAC, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    psstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzstein(const lapack_int N, const double* D, const double* E, const lapack_int M, double* W, const lapack_int* IBLOCK, const lapack_int* ISPLIT, const double ORFAC, lapack_complex_double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pzstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_csteqr2(const char* COMPZ, const lapack_int N, float* D, float* E, lapack_complex_float* Z, const lapack_int LDZ, const lapack_int NR, float* WORK) {
    lapack_int INFO = 0;
    csteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_dsteqr2(const char* COMPZ, const lapack_int N, double* D, double* E, double* Z, const lapack_int LDZ, const lapack_int NR, double* WORK) {
    lapack_int INFO = 0;
    dsteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_ssteqr2(const char* COMPZ, const lapack_int N, float* D, float* E, float* Z, const lapack_int LDZ, const lapack_int NR, float* WORK) {
    lapack_int INFO = 0;
    ssteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_zsteqr2(const char* COMPZ, const lapack_int N, double* D, double* E, lapack_complex_double* Z, const lapack_int LDZ, const lapack_int NR, double* WORK) {
    lapack_int INFO = 0;
    zsteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_bstrexc(const lapack_int N, float* T, const lapack_int LDT, lapack_int* IFST, lapack_int* ILST, lapack_int* NITRAF, lapack_int* ITRAF, lapack_int* NDTRAF, float* DTRAF, float* WORK) {
    lapack_int INFO = 0;
    bstrexc_(&N, T, &LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyev(const char* JOBZ, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* W, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsyev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyevd(const char* JOBZ, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* W, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdsyevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyevd(const char* JOBZ, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* W, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pssyevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyevr(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double VL, const double VU, const lapack_int IL, const lapack_int IU, lapack_int* M, lapack_int* NZ, double* W, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdsyevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyevr(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float VL, const float VU, const lapack_int IL, const lapack_int IU, lapack_int* M, lapack_int* NZ, float* W, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pssyevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyev(const char* JOBZ, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* W, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssyev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyevx(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double ABSTOL, lapack_int* M, lapack_int* NZ, double* W, const double ORFAC, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pdsyevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyevx(const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float ABSTOL, lapack_int* M, lapack_int* NZ, float* W, const float ORFAC, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    pssyevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsygs2(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdsygs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssygs2(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pssygs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsygst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* SCALE) {
    lapack_int INFO = 0;
    pdsygst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssygst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* SCALE) {
    lapack_int INFO = 0;
    pssygst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsygvx(const lapack_int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const double VL, const double VU, const lapack_int IL, const lapack_int IU, const double ABSTOL, lapack_int* M, lapack_int* NZ, double* W, const double ORFAC, double* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, double* GAP) {
    lapack_int INFO = 0;
    pdsygvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssygvx(const lapack_int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const float VL, const float VU, const lapack_int IL, const lapack_int IU, const float ABSTOL, lapack_int* M, lapack_int* NZ, float* W, const float ORFAC, float* Z, const lapack_int IZ, const lapack_int JZ, const lapack_int* DESCZ, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK, lapack_int* IFAIL, lapack_int* ICLUSTR, float* GAP) {
    lapack_int INFO = 0;
    pssygvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyngst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, double* SCALE, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsyngst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyngst(const lapack_int IBTYPE, const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, float* SCALE, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssyngst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyntrd(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsyntrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyntrd(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssyntrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsytd2(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsytd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssytd2(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssytd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsytrd(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsytrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssytrd(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssytrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdsyttrd(const char* UPLO, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* D, double* E, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdsyttrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pssyttrd(const char* UPLO, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* D, float* E, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pssyttrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctrcon(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* RCOND, lapack_complex_float* WORK, const lapack_int LWORK, float* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pctrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrcon(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* RCOND, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdtrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrcon(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* RCOND, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pstrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztrcon(const char* NORM, const char* UPLO, const char* DIAG, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* RCOND, lapack_complex_double* WORK, const lapack_int LWORK, double* RWORK, const lapack_int LRWORK) {
    lapack_int INFO = 0;
    pztrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctrevc(const char* SIDE, const char* HOWMNY, const lapack_int* SELECT, const lapack_int N, lapack_complex_float* T, const lapack_int* DESCT, lapack_complex_float* VL, const lapack_int* DESCVL, lapack_complex_float* VR, const lapack_int* DESCVR, const lapack_int MM, lapack_int* M, lapack_complex_float* WORK, float* RWORK) {
    lapack_int INFO = 0;
    pctrevc_(SIDE, HOWMNY, SELECT, &N, T, DESCT, VL, DESCVL, VR, DESCVR, &MM, M, WORK, RWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztrevc(const char* SIDE, const char* HOWMNY, const lapack_int* SELECT, const lapack_int N, lapack_complex_double* T, const lapack_int* DESCT, lapack_complex_double* VL, const lapack_int* DESCVL, lapack_complex_double* VR, const lapack_int* DESCVR, const lapack_int MM, lapack_int* M, lapack_complex_double* WORK, double* RWORK) {
    lapack_int INFO = 0;
    pztrevc_(SIDE, HOWMNY, SELECT, &N, T, DESCT, VL, DESCVL, VR, DESCVR, &MM, M, WORK, RWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrord(const char* COMPQ, lapack_int* SELECT, const lapack_int* PARA, const lapack_int N, double* T, const lapack_int IT, const lapack_int JT, const lapack_int* DESCT, double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, double* WR, double* WI, lapack_int* M, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdtrord_(COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrord(const char* COMPQ, lapack_int* SELECT, const lapack_int* PARA, const lapack_int N, float* T, const lapack_int IT, const lapack_int JT, const lapack_int* DESCT, float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, float* WR, float* WI, lapack_int* M, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pstrord_(COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrsen(const char* JOB, const char* COMPQ, const lapack_int* SELECT, const lapack_int* PARA, const lapack_int N, double* T, const lapack_int IT, const lapack_int JT, const lapack_int* DESCT, double* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, double* WR, double* WI, lapack_int* M, double* S, double* SEP, double* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pdtrsen_(JOB, COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, S, SEP, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrsen(const char* JOB, const char* COMPQ, const lapack_int* SELECT, const lapack_int* PARA, const lapack_int N, float* T, const lapack_int IT, const lapack_int JT, const lapack_int* DESCT, float* Q, const lapack_int IQ, const lapack_int JQ, const lapack_int* DESCQ, float* WR, float* WI, lapack_int* M, float* S, float* SEP, float* WORK, const lapack_int LWORK, lapack_int* IWORK, const lapack_int LIWORK) {
    lapack_int INFO = 0;
    pstrsen_(JOB, COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, S, SEP, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctrti2(const char* UPLO, const char* DIAG, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pctrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrti2(const char* UPLO, const char* DIAG, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdtrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrti2(const char* UPLO, const char* DIAG, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pstrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztrti2(const char* UPLO, const char* DIAG, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pztrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctrtri(const char* UPLO, const char* DIAG, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pctrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrtri(const char* UPLO, const char* DIAG, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pdtrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrtri(const char* UPLO, const char* DIAG, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pstrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztrtri(const char* UPLO, const char* DIAG, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    lapack_int INFO = 0;
    pztrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const lapack_int NRHS, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pctrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const lapack_int NRHS, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pdtrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const lapack_int NRHS, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pstrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const lapack_int N, const lapack_int NRHS, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB) {
    lapack_int INFO = 0;
    pztrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pctzrzf(const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pctzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pdtzrzf(const lapack_int M, const lapack_int N, double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* TAU, double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pdtzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pstzrzf(const lapack_int M, const lapack_int N, float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* TAU, float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pstzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pztzrzf(const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pztzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcung2l(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcung2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzung2l(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzung2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcung2r(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcung2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzung2r(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzung2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcungl2(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcungl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzungl2(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzungl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunglq(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunglq(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcungql(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcungql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzungql(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzungql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcungqr(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcungqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzungqr(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzungqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcungr2(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcungr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzungr2(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzungr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcungrq(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcungrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzungrq(const lapack_int M, const lapack_int N, const lapack_int K, lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzungrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunm2l(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunm2l(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunm2r(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunm2r(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmbr(const char* VECT, const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmbr(const char* VECT, const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmhr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int ILO, const lapack_int IHI, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmhr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int ILO, const lapack_int IHI, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunml2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunml2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmlq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmlq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmql(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmql(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmqr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmqr(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmr2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmr2(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmr3(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmr3(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmrq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmrq(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmrz(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmrz(const char* SIDE, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_int K, const lapack_int L, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pcunmtr(const char* SIDE, const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float* TAU, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_float* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pcunmtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

lapack_int SCALAPACKE_pzunmtr(const char* SIDE, const char* UPLO, const char* TRANS, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* TAU, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC, lapack_complex_double* WORK, const lapack_int LWORK) {
    lapack_int INFO = 0;
    pzunmtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdzsum1(const lapack_int N, double* ASUM, const lapack_complex_double* X, const lapack_int IX, const lapack_int JX, const lapack_int* DESCX, const lapack_int INCX) {
    pdzsum1_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

lapack_int SCALAPACKE_chk1mat(const lapack_int MA, const lapack_int MAPOS0, const lapack_int NA, const lapack_int NAPOS0, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int DESCAPOS0) {
    lapack_int INFO = 0;
    chk1mat_(&MA, &MAPOS0, &NA, &NAPOS0, &IA, &JA, DESCA, &DESCAPOS0, &INFO);
    return INFO;
}

void SCALAPACKE_clatcpy(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int LDA, lapack_complex_float* B, const lapack_int LDB) {
    clatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_cmatadd(const lapack_int M, const lapack_int N, const lapack_complex_float ALPHA, const lapack_complex_float* A, const lapack_int LDA, const lapack_complex_float BETA, lapack_complex_float* C, const lapack_int LDC) {
    cmatadd_(&M, &N, &ALPHA, A, &LDA, &BETA, C, &LDC);
}

lapack_int SCALAPACKE_descinit(lapack_int* DESC, const lapack_int M, const lapack_int N, const lapack_int MB, const lapack_int NB, const lapack_int IRSRC, const lapack_int ICSRC, const lapack_int ICTXT, const lapack_int LLD) {
    lapack_int INFO = 0;
    descinit_(DESC, &M, &N, &MB, &NB, &IRSRC, &ICSRC, &ICTXT, &LLD, &INFO);
    return INFO;
}

void SCALAPACKE_descset(lapack_int* DESC, const lapack_int M, const lapack_int N, const lapack_int MB, const lapack_int NB, const lapack_int IRSRC, const lapack_int ICSRC, const lapack_int ICTXT, const lapack_int LLD) {
    descset_(DESC, &M, &N, &MB, &NB, &IRSRC, &ICSRC, &ICTXT, &LLD);
}

void SCALAPACKE_dlatcpy(const char* UPLO, const lapack_int M, const lapack_int N, const double* A, const lapack_int LDA, double* B, const lapack_int LDB) {
    dlatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_dmatadd(const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int LDA, const double BETA, double* C, const lapack_int LDC) {
    dmatadd_(&M, &N, &ALPHA, A, &LDA, &BETA, C, &LDC);
}

lapack_int SCALAPACKE_iceil(const lapack_int INUM, const lapack_int IDENOM) {
    return iceil_(&INUM, &IDENOM);
}

void SCALAPACKE_ilacpy(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_int* A, const lapack_int LDA, lapack_int* B, const lapack_int LDB) {
    ilacpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

lapack_int SCALAPACKE_ilcm(const lapack_int M, const lapack_int N) {
    return ilcm_(&M, &N);
}

lapack_int SCALAPACKE_indxg2l(const lapack_int INDXGLOB, const lapack_int NB, const lapack_int IPROC, const lapack_int ISRCPROC, const lapack_int NPROCS) {
    return indxg2l_(&INDXGLOB, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

lapack_int SCALAPACKE_indxg2p(const lapack_int INDXGLOB, const lapack_int NB, const lapack_int IPROC, const lapack_int ISRCPROC, const lapack_int NPROCS) {
    return indxg2p_(&INDXGLOB, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

lapack_int SCALAPACKE_indxl2g(const lapack_int INDXLOC, const lapack_int NB, const lapack_int IPROC, const lapack_int ISRCPROC, const lapack_int NPROCS) {
    return indxl2g_(&INDXLOC, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

void SCALAPACKE_infog1l(const lapack_int GINDX, const lapack_int NB, const lapack_int NPROCS, const lapack_int MYROC, const lapack_int ISRCPROC, lapack_int* LINDX, lapack_int* ROCSRC) {
    infog1l_(&GINDX, &NB, &NPROCS, &MYROC, &ISRCPROC, LINDX, ROCSRC);
}

void SCALAPACKE_infog2l(const lapack_int GRINDX, const lapack_int GCINDX, const lapack_int* DESC, const lapack_int NPROW, const lapack_int NPCOL, const lapack_int MYROW, const lapack_int MYCOL, lapack_int* LRINDX, lapack_int* LCINDX, lapack_int* RSRC, lapack_int* CSRC) {
    infog2l_(&GRINDX, &GCINDX, DESC, &NPROW, &NPCOL, &MYROW, &MYCOL, LRINDX, LCINDX, RSRC, CSRC);
}

lapack_int SCALAPACKE_npreroc(const lapack_int N, const lapack_int NB, const lapack_int IPROC, const lapack_int ISRCPROC, const lapack_int NPROCS) {
    return npreroc_(&N, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

lapack_int SCALAPACKE_numroc(const lapack_int N, const lapack_int NB, const lapack_int IPROC, const lapack_int ISRCPROC, const lapack_int NPROCS) {
    return numroc_(&N, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

void SCALAPACKE_pcchekpad(const lapack_int ICTXT, const char* MESS, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_complex_float CHKVAL) {
    pcchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pccol2row(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_complex_float* VS, const lapack_int LDVS, lapack_complex_float* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_complex_float* WORK) {
    pccol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pcelget(const char* SCOPE, const char* TOP, lapack_complex_float* ALPHA, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pcelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcelset(lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float ALPHA) {
    pcelset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pcelset2(lapack_complex_float* ALPHA, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float BETA) {
    pcelset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pcfillpad(const lapack_int ICTXT, const lapack_int M, const lapack_int N, lapack_complex_float* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_complex_float CHKVAL) {
    pcfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

lapack_int SCALAPACKE_pchk1mat(const lapack_int MA, const lapack_int MAPOS0, const lapack_int NA, const lapack_int NAPOS0, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int DESCAPOS0, const lapack_int NEXTRA, const lapack_int* EX, const lapack_int* EXPOS) {
    lapack_int INFO = 0;
    pchk1mat_(&MA, &MAPOS0, &NA, &NAPOS0, &IA, &JA, DESCA, &DESCAPOS0, &NEXTRA, EX, EXPOS, &INFO);
    return INFO;
}

void SCALAPACKE_pclaprnt(const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int IRPRNT, const lapack_int ICPRNT, const char* CMATNM, const lapack_int NOUT, lapack_complex_float* WORK) {
    pclaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pcmatadd(const lapack_int M, const lapack_int N, const lapack_complex_float ALPHA, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_float BETA, lapack_complex_float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pcmatadd_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcrow2col(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_complex_float* VS, const lapack_int LDVS, lapack_complex_float* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_complex_float* WORK) {
    pcrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pdchekpad(const lapack_int ICTXT, const char* MESS, const lapack_int M, const lapack_int N, const double* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const double CHKVAL) {
    pdchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pdcol2row(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const double* VS, const lapack_int LDVS, double* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, double* WORK) {
    pdcol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pdelget(const char* SCOPE, const char* TOP, double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pdelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdelset(double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double ALPHA) {
    pdelset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pdelset2(double* ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA) {
    pdelset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pdfillpad(const lapack_int ICTXT, const lapack_int M, const lapack_int N, double* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const double CHKVAL) {
    pdfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pdlaprnt(const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int IRPRNT, const lapack_int ICPRNT, const char* CMATNM, const lapack_int NOUT, double* WORK) {
    pdlaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pdmatadd(const lapack_int M, const lapack_int N, const double ALPHA, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const double BETA, double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pdmatadd_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdrow2col(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const double* VS, const lapack_int LDVS, double* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, double* WORK) {
    pdrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pichekpad(const lapack_int ICTXT, const char* MESS, const lapack_int M, const lapack_int N, const lapack_int* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_int CHKVAL) {
    pichekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_picol2row(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_int* VS, const lapack_int LDVS, lapack_int* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_int* WORK) {
    picol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pielget(const char* SCOPE, const char* TOP, lapack_int* ALPHA, const lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pielget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pielset(lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int ALPHA) {
    pielset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pielset2(lapack_int* ALPHA, const lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int BETA) {
    pielset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pifillpad(const lapack_int ICTXT, const lapack_int M, const lapack_int N, lapack_int* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_int CHKVAL) {
    pifillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pilaprnt(const lapack_int M, const lapack_int N, const lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int IRPRNT, const lapack_int ICPRNT, const char* CMATNM, const lapack_int NOUT, lapack_int* WORK) {
    pilaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pirow2col(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_int* VS, const lapack_int LDVS, lapack_int* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_int* WORK) {
    pirow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pschekpad(const lapack_int ICTXT, const char* MESS, const lapack_int M, const lapack_int N, const float* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const float CHKVAL) {
    pschekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pscol2row(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const float* VS, const lapack_int LDVS, float* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, float* WORK) {
    pscol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pselget(const char* SCOPE, const char* TOP, float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pselget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pselset(float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float ALPHA) {
    pselset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pselset2(float* ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA) {
    pselset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_psfillpad(const lapack_int ICTXT, const lapack_int M, const lapack_int N, float* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const float CHKVAL) {
    psfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pslaprnt(const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int IRPRNT, const lapack_int ICPRNT, const char* CMATNM, const lapack_int NOUT, float* WORK) {
    pslaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_psmatadd(const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const float BETA, float* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    psmatadd_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psrow2col(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const float* VS, const lapack_int LDVS, float* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, float* WORK) {
    psrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pzchekpad(const lapack_int ICTXT, const char* MESS, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_complex_double* CHKVAL) {
    pzchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

void SCALAPACKE_pzcol2row(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_complex_double* VS, const lapack_int LDVS, lapack_complex_double* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_complex_double* WORK) {
    pzcol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pzelget(const char* SCOPE, const char* TOP, lapack_complex_double* ALPHA, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA) {
    pzelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzelset(lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* ALPHA) {
    pzelset_(A, &IA, &JA, DESCA, ALPHA);
}

void SCALAPACKE_pzelset2(lapack_complex_double* ALPHA, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* BETA) {
    pzelset2_(ALPHA, A, &IA, &JA, DESCA, BETA);
}

void SCALAPACKE_pzfillpad(const lapack_int ICTXT, const lapack_int M, const lapack_int N, lapack_complex_double* A, const lapack_int LDA, const lapack_int IPRE, const lapack_int IPOST, const lapack_complex_double* CHKVAL) {
    pzfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

void SCALAPACKE_pzlaprnt(const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_int IRPRNT, const lapack_int ICPRNT, const char* CMATNM, const lapack_int NOUT, lapack_complex_double* WORK) {
    pzlaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pzmatadd(const lapack_int M, const lapack_int N, const lapack_complex_double* ALPHA, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, const lapack_complex_double* BETA, lapack_complex_double* C, const lapack_int IC, const lapack_int JC, const lapack_int* DESCC) {
    pzmatadd_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzrow2col(const lapack_int ICTXT, const lapack_int M, const lapack_int N, const lapack_int NB, const lapack_complex_double* VS, const lapack_int LDVS, lapack_complex_double* VD, const lapack_int LDVD, const lapack_int RSRC, const lapack_int CSRC, const lapack_int RDEST, const lapack_int CDEST, lapack_complex_double* WORK) {
    pzrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_sl_init(lapack_int* ICTXT, const lapack_int NPROW, const lapack_int NPCOL) {
    sl_init_(ICTXT, &NPROW, &NPCOL);
}

void SCALAPACKE_slatcpy(const char* UPLO, const lapack_int M, const lapack_int N, const float* A, const lapack_int LDA, float* B, const lapack_int LDB) {
    slatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_slboot() {
    slboot_();
}

void SCALAPACKE_smatadd(const lapack_int M, const lapack_int N, const float ALPHA, const float* A, const lapack_int LDA, const float BETA, float* C, const lapack_int LDC) {
    smatadd_(&M, &N, &ALPHA, A, &LDA, &BETA, C, &LDC);
}

void SCALAPACKE_zlatcpy(const char* UPLO, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int LDA, lapack_complex_double* B, const lapack_int LDB) {
    zlatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_zmatadd(const lapack_int M, const lapack_int N, const lapack_complex_double* ALPHA, const lapack_complex_double* A, const lapack_int LDA, const lapack_complex_double* BETA, lapack_complex_double* C, const lapack_int LDC) {
    zmatadd_(&M, &N, ALPHA, A, &LDA, BETA, C, &LDC);
}

void SCALAPACKE_pcgemr2d(const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pcgemr2d_(&M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pdgemr2d(const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pdgemr2d_(&M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pigemr2d(const lapack_int M, const lapack_int N, const lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pigemr2d_(&M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_psgemr2d(const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    psgemr2d_(&M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pzgemr2d(const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pzgemr2d_(&M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pctrmr2d(const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const lapack_complex_float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pctrmr2d_(UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pdtrmr2d(const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pdtrmr2d_(UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pitrmr2d(const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const lapack_int* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_int* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pitrmr2d_(UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pstrmr2d(const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const float* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, float* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pstrmr2d_(UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}

void SCALAPACKE_pztrmr2d(const char* UPLO, const char* DIAG, const lapack_int M, const lapack_int N, const lapack_complex_double* A, const lapack_int IA, const lapack_int JA, const lapack_int* DESCA, lapack_complex_double* B, const lapack_int IB, const lapack_int JB, const lapack_int* DESCB, const lapack_int ICTXT) {
    pztrmr2d_(UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &ICTXT);
}
