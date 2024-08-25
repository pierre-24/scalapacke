#include "scalapacke.h"


Int SCALAPACKE_clahqr2(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* H, const Int LDH, float* W, const Int ILOZ, const Int IHIZ, float* Z, const Int LDZ) {
    Int INFO = 0;
    clahqr2_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, &LDH, W, &ILOZ, &IHIZ, Z, &LDZ, &INFO);
    return INFO;
}

Int SCALAPACKE_zlahqr2(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* H, const Int LDH, double* W, const Int ILOZ, const Int IHIZ, double* Z, const Int LDZ) {
    Int INFO = 0;
    zlahqr2_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, &LDH, W, &ILOZ, &IHIZ, Z, &LDZ, &INFO);
    return INFO;
}

void SCALAPACKE_dlamsh(double* S, const Int LDS, Int* NBULGE, const Int JBLK, double* H, const Int LDH, const Int N, const double ULP) {
    dlamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_zlamsh(double* S, const Int LDS, Int* NBULGE, const Int JBLK, double* H, const Int LDH, const Int N, const double ULP) {
    zlamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_slamsh(float* S, const Int LDS, Int* NBULGE, const Int JBLK, float* H, const Int LDH, const Int N, const float ULP) {
    slamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_clamsh(float* S, const Int LDS, Int* NBULGE, const Int JBLK, float* H, const Int LDH, const Int N, const float ULP) {
    clamsh_(S, &LDS, NBULGE, &JBLK, H, &LDH, &N, &ULP);
}

void SCALAPACKE_clanv2(float* A, float* B, float* C, float* D, float* RT1, float* RT2, float* CS, float* SN) {
    clanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

void SCALAPACKE_zlanv2(double* A, double* B, double* C, double* D, double* RT1, double* RT2, double* CS, double* SN) {
    zlanv2_(A, B, C, D, RT1, RT2, CS, SN);
}

Int SCALAPACKE_slapst(const char* ID, const Int N, const float* D, const Int* INDX) {
    Int INFO = 0;
    slapst_(ID, &N, D, INDX, &INFO);
    return INFO;
}

Int SCALAPACKE_dlapst(const char* ID, const Int N, const double* D, const Int* INDX) {
    Int INFO = 0;
    dlapst_(ID, &N, D, INDX, &INFO);
    return INFO;
}

void SCALAPACKE_slaqr6(const char* JOB, const Int WANTT, const Int WANTZ, const Int KACC22, const Int N, const Int KTOP, const Int KBOT, const Int NSHFTS, const float* SR, const float* SI, float* H, const Int LDH, const Int ILOZ, const Int IHIZ, float* Z, const Int LDZ, float* V, const Int LDV, float* U, const Int LDU, const Int NV, float* WV, const Int LDWV, const Int NH, float* WH, const Int LDWH) {
    slaqr6_(JOB, &WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, &LDH, &ILOZ, &IHIZ, Z, &LDZ, V, &LDV, U, &LDU, &NV, WV, &LDWV, &NH, WH, &LDWH);
}

void SCALAPACKE_dlaqr6(const char* JOB, const Int WANTT, const Int WANTZ, const Int KACC22, const Int N, const Int KTOP, const Int KBOT, const Int NSHFTS, const double* SR, const double* SI, double* H, const Int LDH, const Int ILOZ, const Int IHIZ, double* Z, const Int LDZ, double* V, const Int LDV, double* U, const Int LDU, const Int NV, double* WV, const Int LDWV, const Int NH, double* WH, const Int LDWH) {
    dlaqr6_(JOB, &WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, &LDH, &ILOZ, &IHIZ, Z, &LDZ, V, &LDV, U, &LDU, &NV, WV, &LDWV, &NH, WH, &LDWH);
}

void SCALAPACKE_slar1va(const Int N, const Int B1, const Int BN, const float LAMBDA, const float* D, const float* L, const float* LD, const float* LLD, const float PIVMIN, const float GAPTOL, float* Z, const Int WANTNC, Int* NEGCNT, float* ZTZ, float* MINGMA, Int* R, Int* ISUPPZ, float* NRMINV, float* RESID, float* RQCORR, float* WORK) {
    slar1va_(&N, &B1, &BN, &LAMBDA, D, L, LD, LLD, &PIVMIN, &GAPTOL, Z, &WANTNC, NEGCNT, ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SCALAPACKE_dlar1va(const Int N, const Int B1, const Int BN, const double LAMBDA, const double* D, const double* L, const double* LD, const double* LLD, const double PIVMIN, const double GAPTOL, double* Z, const Int WANTNC, Int* NEGCNT, double* ZTZ, double* MINGMA, Int* R, Int* ISUPPZ, double* NRMINV, double* RESID, double* RQCORR, double* WORK) {
    dlar1va_(&N, &B1, &BN, &LAMBDA, D, L, LD, LLD, &PIVMIN, &GAPTOL, Z, &WANTNC, NEGCNT, ZTZ, MINGMA, R, ISUPPZ, NRMINV, RESID, RQCORR, WORK);
}

void SCALAPACKE_zlaref(const char* TYPE, double* A, const Int LDA, const Int WANTZ, double* Z, const Int LDZ, const Int BLOCK, Int* IROW1, Int* ICOL1, const Int ISTART, const Int ISTOP, const Int ITMP1, const Int ITMP2, const Int LILOZ, const Int LIHIZ, const double* VECS, double* V2, double* V3, double* T1, double* T2, double* T3) {
    zlaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_slaref(const char* TYPE, float* A, const Int LDA, const Int WANTZ, float* Z, const Int LDZ, const Int BLOCK, Int* IROW1, Int* ICOL1, const Int ISTART, const Int ISTOP, const Int ITMP1, const Int ITMP2, const Int LILOZ, const Int LIHIZ, const float* VECS, float* V2, float* V3, float* T1, float* T2, float* T3) {
    slaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_dlaref(const char* TYPE, double* A, const Int LDA, const Int WANTZ, double* Z, const Int LDZ, const Int BLOCK, Int* IROW1, Int* ICOL1, const Int ISTART, const Int ISTOP, const Int ITMP1, const Int ITMP2, const Int LILOZ, const Int LIHIZ, const double* VECS, double* V2, double* V3, double* T1, double* T2, double* T3) {
    dlaref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

void SCALAPACKE_claref(const char* TYPE, float* A, const Int LDA, const Int WANTZ, float* Z, const Int LDZ, const Int BLOCK, Int* IROW1, Int* ICOL1, const Int ISTART, const Int ISTOP, const Int ITMP1, const Int ITMP2, const Int LILOZ, const Int LIHIZ, const float* VECS, float* V2, float* V3, float* T1, float* T2, float* T3) {
    claref_(TYPE, A, &LDA, &WANTZ, Z, &LDZ, &BLOCK, IROW1, ICOL1, &ISTART, &ISTOP, &ITMP1, &ITMP2, &LILOZ, &LIHIZ, VECS, V2, V3, T1, T2, T3);
}

Int SCALAPACKE_slarrb2(const Int N, const float* D, const float* LLD, const Int IFIRST, const Int ILAST, const float RTOL1, const float RTOL2, const Int OFFSET, float* W, float* WGAP, float* WERR, float* WORK, Int* IWORK, const float PIVMIN, const float LGPVMN, const float LGSPDM, const Int TWIST) {
    Int INFO = 0;
    slarrb2_(&N, D, LLD, &IFIRST, &ILAST, &RTOL1, &RTOL2, &OFFSET, W, WGAP, WERR, WORK, IWORK, &PIVMIN, &LGPVMN, &LGSPDM, &TWIST, &INFO);
    return INFO;
}

Int SCALAPACKE_dlarrb2(const Int N, const double* D, const double* LLD, const Int IFIRST, const Int ILAST, const double RTOL1, const double RTOL2, const Int OFFSET, double* W, double* WGAP, double* WERR, double* WORK, Int* IWORK, const double PIVMIN, const double LGPVMN, const double LGSPDM, const Int TWIST) {
    Int INFO = 0;
    dlarrb2_(&N, D, LLD, &IFIRST, &ILAST, &RTOL1, &RTOL2, &OFFSET, W, WGAP, WERR, WORK, IWORK, &PIVMIN, &LGPVMN, &LGSPDM, &TWIST, &INFO);
    return INFO;
}

Int SCALAPACKE_slarrd2(const char* RANGE, const char* ORDER, const Int N, const float VL, const float VU, const Int IL, const Int IU, const float* GERS, const float RELTOL, const float* D, const float* E, const float* E2, const float PIVMIN, const Int NSPLIT, const Int* ISPLIT, Int* M, float* W, float* WERR, float* WL, float* WU, Int* IBLOCK, Int* INDEXW, float* WORK, Int* IWORK, const Int DOL, const Int DOU) {
    Int INFO = 0;
    slarrd2_(RANGE, ORDER, &N, &VL, &VU, &IL, &IU, GERS, &RELTOL, D, E, E2, &PIVMIN, &NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, &DOL, &DOU, &INFO);
    return INFO;
}

Int SCALAPACKE_dlarrd2(const char* RANGE, const char* ORDER, const Int N, const double VL, const double VU, const Int IL, const Int IU, const double* GERS, const double RELTOL, const double* D, const double* E, const double* E2, const double PIVMIN, const Int NSPLIT, const Int* ISPLIT, Int* M, double* W, double* WERR, double* WL, double* WU, Int* IBLOCK, Int* INDEXW, double* WORK, Int* IWORK, const Int DOL, const Int DOU) {
    Int INFO = 0;
    dlarrd2_(RANGE, ORDER, &N, &VL, &VU, &IL, &IU, GERS, &RELTOL, D, E, E2, &PIVMIN, &NSPLIT, ISPLIT, M, W, WERR, WL, WU, IBLOCK, INDEXW, WORK, IWORK, &DOL, &DOU, &INFO);
    return INFO;
}

Int SCALAPACKE_dlarre2(const char* RANGE, const Int N, double* VL, double* VU, const Int IL, const Int IU, double* D, double* E, double* E2, const double RTOL1, const double RTOL2, const double SPLTOL, Int* NSPLIT, Int* ISPLIT, Int* M, const Int DOL, const Int DOU, double* W, double* WERR, double* WGAP, Int* IBLOCK, Int* INDEXW, double* GERS, double* PIVMIN, double* WORK, Int* IWORK) {
    Int INFO = 0;
    dlarre2_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN, WORK, IWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_slarre2(const char* RANGE, const Int N, float* VL, float* VU, const Int IL, const Int IU, float* D, float* E, float* E2, const float RTOL1, const float RTOL2, const float SPLTOL, Int* NSPLIT, Int* ISPLIT, Int* M, const Int DOL, const Int DOU, float* W, float* WERR, float* WGAP, Int* IBLOCK, Int* INDEXW, float* GERS, float* PIVMIN, float* WORK, Int* IWORK) {
    Int INFO = 0;
    slarre2_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, PIVMIN, WORK, IWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_dlarre2a(const char* RANGE, const Int N, double* VL, double* VU, const Int IL, const Int IU, double* D, double* E, double* E2, const double RTOL1, const double RTOL2, const double SPLTOL, Int* NSPLIT, Int* ISPLIT, Int* M, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, double* W, double* WERR, double* WGAP, Int* IBLOCK, Int* INDEXW, double* GERS, double* SDIAM, double* PIVMIN, double* WORK, Int* IWORK, const double MINRGP) {
    Int INFO = 0;
    dlarre2a_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, PIVMIN, WORK, IWORK, &MINRGP, &INFO);
    return INFO;
}

Int SCALAPACKE_slarre2a(const char* RANGE, const Int N, float* VL, float* VU, const Int IL, const Int IU, float* D, float* E, float* E2, const float RTOL1, const float RTOL2, const float SPLTOL, Int* NSPLIT, Int* ISPLIT, Int* M, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, float* W, float* WERR, float* WGAP, Int* IBLOCK, Int* INDEXW, float* GERS, float* SDIAM, float* PIVMIN, float* WORK, Int* IWORK, const float MINRGP) {
    Int INFO = 0;
    slarre2a_(RANGE, &N, VL, VU, &IL, &IU, D, E, E2, &RTOL1, &RTOL2, &SPLTOL, NSPLIT, ISPLIT, M, &DOL, &DOU, NEEDIL, NEEDIU, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, PIVMIN, WORK, IWORK, &MINRGP, &INFO);
    return INFO;
}

Int SCALAPACKE_slarrv2(const Int N, const float VL, const float VU, float* D, float* L, const float PIVMIN, const Int* ISPLIT, const Int M, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, const float MINRGP, const float RTOL1, const float RTOL2, float* W, float* WERR, float* WGAP, const Int* IBLOCK, const Int* INDEXW, const float* GERS, const float* SDIAM, float* Z, const Int LDZ, Int* ISUPPZ, float* WORK, Int* IWORK, Int* VSTART, Int* FINISH, Int* MAXCLS, Int* NDEPTH, Int* PARITY, const Int ZOFFSET) {
    Int INFO = 0;
    slarrv2_(&N, &VL, &VU, D, L, &PIVMIN, ISPLIT, &M, &DOL, &DOU, NEEDIL, NEEDIU, &MINRGP, &RTOL1, &RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, &LDZ, ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_dlarrv2(const Int N, const double VL, const double VU, double* D, double* L, const double PIVMIN, const Int* ISPLIT, const Int M, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, const double MINRGP, const double RTOL1, const double RTOL2, double* W, double* WERR, double* WGAP, const Int* IBLOCK, const Int* INDEXW, const double* GERS, const double* SDIAM, double* Z, const Int LDZ, Int* ISUPPZ, double* WORK, Int* IWORK, Int* VSTART, Int* FINISH, Int* MAXCLS, Int* NDEPTH, Int* PARITY, const Int ZOFFSET) {
    Int INFO = 0;
    dlarrv2_(&N, &VL, &VU, D, L, &PIVMIN, ISPLIT, &M, &DOL, &DOU, NEEDIL, NEEDIU, &MINRGP, &RTOL1, &RTOL2, W, WERR, WGAP, IBLOCK, INDEXW, GERS, SDIAM, Z, &LDZ, ISUPPZ, WORK, IWORK, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_dlasorte(double* S, const Int LDS, const Int J, double* OUT) {
    Int INFO = 0;
    dlasorte_(S, &LDS, &J, OUT, &INFO);
    return INFO;
}

Int SCALAPACKE_slasorte(float* S, const Int LDS, const Int J, float* OUT) {
    Int INFO = 0;
    slasorte_(S, &LDS, &J, OUT, &INFO);
    return INFO;
}

Int SCALAPACKE_slasrt2(const char* ID, const Int N, float* D, Int* KEY) {
    Int INFO = 0;
    slasrt2_(ID, &N, D, KEY, &INFO);
    return INFO;
}

Int SCALAPACKE_dlasrt2(const char* ID, const Int N, double* D, Int* KEY) {
    Int INFO = 0;
    dlasrt2_(ID, &N, D, KEY, &INFO);
    return INFO;
}

Int SCALAPACKE_cdbtf2(const Int M, const Int N, const Int KL, const Int KU, float* AB, const Int LDAB) {
    Int INFO = 0;
    cdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_sdbtf2(const Int M, const Int N, const Int KL, const Int KU, float* AB, const Int LDAB) {
    Int INFO = 0;
    sdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_zdbtf2(const Int M, const Int N, const Int KL, const Int KU, double* AB, const Int LDAB) {
    Int INFO = 0;
    zdbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_ddbtf2(const Int M, const Int N, const Int KL, const Int KU, double* AB, const Int LDAB) {
    Int INFO = 0;
    ddbtf2_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_ddbtrf(const Int M, const Int N, const Int KL, const Int KU, double* AB, const Int LDAB) {
    Int INFO = 0;
    ddbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_cdbtrf(const Int M, const Int N, const Int KL, const Int KU, float* AB, const Int LDAB) {
    Int INFO = 0;
    cdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_sdbtrf(const Int M, const Int N, const Int KL, const Int KU, float* AB, const Int LDAB) {
    Int INFO = 0;
    sdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

Int SCALAPACKE_zdbtrf(const Int M, const Int N, const Int KL, const Int KU, double* AB, const Int LDAB) {
    Int INFO = 0;
    zdbtrf_(&M, &N, &KL, &KU, AB, &LDAB, &INFO);
    return INFO;
}

void SCALAPACKE_pscsum1(const Int N, float* ASUM, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pscsum1_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

Int SCALAPACKE_pcdbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdbtrf(const Int N, const Int BWL, const Int BWU, float* A, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddbtrf(const Int N, const Int BWL, const Int BWU, double* A, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdbtrf(const Int N, const Int BWL, const Int BWU, float* A, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdbtrf(const Int N, const Int BWL, const Int BWU, double* A, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdbtrsv_(UPLO, TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pzdrscl(const Int N, const double SA, double* SX, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzdrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

Int SCALAPACKE_pcdtsv(const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddtsv(const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdtsv(const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdtsv(const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdtsv_(&N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdttrf(const Int N, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddttrf(const Int N, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdttrf(const Int N, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdttrf(const Int N, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdttrf_(&N, DL, D, DU, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdttrs(const char* TRANS, const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddttrs(const char* TRANS, const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdttrs(const char* TRANS, const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdttrs(const char* TRANS, const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdttrs_(TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pddttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pddttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, float* DL, float* D, float* DU, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, double* DL, double* D, double* DU, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgbsv(const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgbsv_(&N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgbtrf(const Int N, const Int BWL, const Int BWU, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgbtrf(const Int N, const Int BWL, const Int BWU, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgbtrf(const Int N, const Int BWL, const Int BWU, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgbtrf(const Int N, const Int BWL, const Int BWU, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgbtrf_(&N, &BWL, &BWU, A, &JA, DESCA, IPIV, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, float* A, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgbtrs(const char* TRANS, const Int N, const Int BWL, const Int BWU, const Int NRHS, double* A, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgbtrs_(TRANS, &N, &BWL, &BWU, &NRHS, A, &JA, DESCA, IPIV, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgebal(const char* JOB, const Int N, double* A, const Int* DESCA, Int* ILO, Int* IHI, double* SCALE) {
    Int INFO = 0;
    pdgebal_(JOB, &N, A, DESCA, ILO, IHI, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_psgebal(const char* JOB, const Int N, float* A, const Int* DESCA, Int* ILO, Int* IHI, float* SCALE) {
    Int INFO = 0;
    psgebal_(JOB, &N, A, DESCA, ILO, IHI, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgebd2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgebd2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgebd2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgebd2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgebd2_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgebrd(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgebrd(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgebrd(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgebrd(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgebrd_(&M, &N, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgecon(const char* NORM, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float ANORM, float* RCOND, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgecon(const char* NORM, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double ANORM, double* RCOND, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgecon(const char* NORM, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float ANORM, float* RCOND, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgecon(const char* NORM, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double ANORM, double* RCOND, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzgecon_(NORM, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeequ(const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* R, float* C, float* ROWCND, float* COLCND, float* AMAX) {
    Int INFO = 0;
    pcgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeequ(const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* R, double* C, double* ROWCND, double* COLCND, double* AMAX) {
    Int INFO = 0;
    pdgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeequ(const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* R, float* C, float* ROWCND, float* COLCND, float* AMAX) {
    Int INFO = 0;
    psgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeequ(const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* R, double* C, double* ROWCND, double* COLCND, double* AMAX) {
    Int INFO = 0;
    pzgeequ_(&M, &N, A, &IA, &JA, DESCA, R, C, ROWCND, COLCND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgehd2(const Int N, const Int ILO, const Int IHI, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgehd2(const Int N, const Int ILO, const Int IHI, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgehd2(const Int N, const Int ILO, const Int IHI, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgehd2(const Int N, const Int ILO, const Int IHI, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgehd2_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgehrd(const Int N, const Int ILO, const Int IHI, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgehrd(const Int N, const Int ILO, const Int IHI, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgehrd(const Int N, const Int ILO, const Int IHI, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgehrd(const Int N, const Int ILO, const Int IHI, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgehrd_(&N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgelq2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgelq2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgelq2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgelq2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgelq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgelqf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgelqf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgelqf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgelqf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgelqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgels(const char* TRANS, const Int M, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgels(const char* TRANS, const Int M, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgels(const char* TRANS, const Int M, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgels(const char* TRANS, const Int M, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgels_(TRANS, &M, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeql2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeql2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeql2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeql2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgeql2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeqlf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeqlf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeqlf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeqlf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgeqlf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeqpf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, float* TAU, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeqpf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeqpf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeqpf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, double* TAU, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzgeqpf_(&M, &N, A, &IA, &JA, DESCA, IPIV, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeqr2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeqr2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeqr2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeqr2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgeqr2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgeqrf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgeqrf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgeqrf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgeqrf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgeqrf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgerfs(const char* TRANS, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* AF, const Int IAF, const Int JAF, const Int* DESCAF, const Int* IPIV, const float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* FERR, float* BERR, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgerfs(const char* TRANS, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* AF, const Int IAF, const Int JAF, const Int* DESCAF, const Int* IPIV, const double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* FERR, double* BERR, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgerfs(const char* TRANS, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* AF, const Int IAF, const Int JAF, const Int* DESCAF, const Int* IPIV, const float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* FERR, float* BERR, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgerfs(const char* TRANS, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* AF, const Int IAF, const Int JAF, const Int* DESCAF, const Int* IPIV, const double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* FERR, double* BERR, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzgerfs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgerq2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgerq2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgerq2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgerq2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgerq2_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgerqf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgerqf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgerqf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgerqf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzgerqf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgesv(const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pcgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgesv(const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_psgesv(const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    psgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgesv(const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pzgesv_(&N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgesvd(const char* JOBU, const char* JOBVT, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* S, float* U, const Int IU, const Int JU, const Int* DESCU, float* VT, const Int IVT, const Int JVT, const Int* DESCVT, float* WORK, const Int LWORK, float* RWORK) {
    Int INFO = 0;
    pcgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, RWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgesvd(const char* JOBU, const char* JOBVT, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* S, double* U, const Int IU, const Int JU, const Int* DESCU, double* VT, const Int IVT, const Int JVT, const Int* DESCVT, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgesvd(const char* JOBU, const char* JOBVT, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* S, float* U, const Int IU, const Int JU, const Int* DESCU, float* VT, const Int IVT, const Int JVT, const Int* DESCVT, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgesvd(const char* JOBU, const char* JOBVT, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* S, double* U, const Int IU, const Int JU, const Int* DESCU, double* VT, const Int IVT, const Int JVT, const Int* DESCVT, double* WORK, const Int LWORK, double* RWORK) {
    Int INFO = 0;
    pzgesvd_(JOBU, JOBVT, &M, &N, A, &IA, &JA, DESCA, S, U, &IU, &JU, DESCU, VT, &IVT, &JVT, DESCVT, WORK, &LWORK, RWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgesvx(const char* FACT, const char* TRANS, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* AF, const Int IAF, const Int JAF, const Int* DESCAF, Int* IPIV, char* EQUED, float* R, float* C, float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgesvx(const char* FACT, const char* TRANS, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* AF, const Int IAF, const Int JAF, const Int* DESCAF, Int* IPIV, char* EQUED, double* R, double* C, double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgesvx(const char* FACT, const char* TRANS, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* AF, const Int IAF, const Int JAF, const Int* DESCAF, Int* IPIV, char* EQUED, float* R, float* C, float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgesvx(const char* FACT, const char* TRANS, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* AF, const Int IAF, const Int JAF, const Int* DESCAF, Int* IPIV, char* EQUED, double* R, double* C, double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzgesvx_(FACT, TRANS, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, IPIV, EQUED, R, C, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgetf2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pcgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgetf2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pdgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_psgetf2(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    psgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgetf2(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pzgetf2_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgetrf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pcgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgetrf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pdgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_psgetrf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    psgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgetrf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, Int* IPIV) {
    Int INFO = 0;
    pzgetrf_(&M, &N, A, &IA, &JA, DESCA, IPIV, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgetri(const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pcgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgetri(const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psgetri(const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgetri(const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pzgetri_(&N, A, &IA, &JA, DESCA, IPIV, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcgetrs(const char* TRANS, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pcgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdgetrs(const char* TRANS, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_psgetrs(const char* TRANS, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    psgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pzgetrs(const char* TRANS, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pzgetrs_(TRANS, &N, &NRHS, A, &IA, &JA, DESCA, IPIV, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pcggqrf(const Int N, const Int M, const Int P, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAUA, float* B, const Int IB, const Int JB, const Int* DESCB, float* TAUB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdggqrf(const Int N, const Int M, const Int P, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAUA, double* B, const Int IB, const Int JB, const Int* DESCB, double* TAUB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psggqrf(const Int N, const Int M, const Int P, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAUA, float* B, const Int IB, const Int JB, const Int* DESCB, float* TAUB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzggqrf(const Int N, const Int M, const Int P, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAUA, double* B, const Int IB, const Int JB, const Int* DESCB, double* TAUB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzggqrf_(&N, &M, &P, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcggrqf(const Int M, const Int P, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAUA, float* B, const Int IB, const Int JB, const Int* DESCB, float* TAUB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdggrqf(const Int M, const Int P, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAUA, double* B, const Int IB, const Int JB, const Int* DESCB, double* TAUB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psggrqf(const Int M, const Int P, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAUA, float* B, const Int IB, const Int JB, const Int* DESCB, float* TAUB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzggrqf(const Int M, const Int P, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAUA, double* B, const Int IB, const Int JB, const Int* DESCB, double* TAUB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzggrqf_(&M, &P, &N, A, &IA, &JA, DESCA, TAUA, B, &IB, &JB, DESCB, TAUB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcheev(const char* JOBZ, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcheev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzheev(const char* JOBZ, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzheev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcheevd(const char* JOBZ, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pcheevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzheevd(const char* JOBZ, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pzheevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcheevr(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float VL, const float VU, const Int IL, const Int IU, Int* M, Int* NZ, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pcheevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzheevr(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double VL, const double VU, const Int IL, const Int IU, Int* M, Int* NZ, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pzheevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcheevx(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float VL, const float VU, const Int IL, const Int IU, const float ABSTOL, Int* M, Int* NZ, float* W, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    pcheevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pzheevx(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double VL, const double VU, const Int IL, const Int IU, const double ABSTOL, Int* M, Int* NZ, double* W, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pzheevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pchegs2(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pchegs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhegs2(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pzhegs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pchegst(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, float* SCALE) {
    Int INFO = 0;
    pchegst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhegst(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, double* SCALE) {
    Int INFO = 0;
    pzhegst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_pchegvx(const Int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB, const float VL, const float VU, const Int IL, const Int IU, const float ABSTOL, Int* M, Int* NZ, float* W, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    pchegvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhegvx(const Int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB, const double VL, const double VU, const Int IL, const Int IU, const double ABSTOL, Int* M, Int* NZ, double* W, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pzhegvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, RWORK, &LRWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pchengst(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, float* SCALE, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pchengst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhengst(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, double* SCALE, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzhengst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pchentrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pchentrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhentrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzhentrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pchetd2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pchetd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhetd2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzhetd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pchetrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pchetrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhetrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzhetrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pchettrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pchettrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzhettrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzhettrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdhseqr(const char* JOB, const char* COMPZ, const Int N, const Int ILO, const Int IHI, double* H, const Int* DESCH, double* WR, double* WI, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdhseqr_(JOB, COMPZ, &N, &ILO, &IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pshseqr(const char* JOB, const char* COMPZ, const Int N, const Int ILO, const Int IHI, float* H, const Int* DESCH, float* WR, float* WI, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pshseqr_(JOB, COMPZ, &N, &ILO, &IHI, H, DESCH, WR, WI, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

void SCALAPACKE_bdlaapp(const Int ISIDE, const Int M, const Int N, const Int NB, double* A, const Int LDA, const Int NITRAF, const Int* ITRAF, double* DTRAF, double* WORK) {
    bdlaapp_(&ISIDE, &M, &N, &NB, A, &LDA, &NITRAF, ITRAF, DTRAF, WORK);
}

void SCALAPACKE_bslaapp(const Int ISIDE, const Int M, const Int N, const Int NB, float* A, const Int LDA, const Int NITRAF, const Int* ITRAF, float* DTRAF, float* WORK) {
    bslaapp_(&ISIDE, &M, &N, &NB, A, &LDA, &NITRAF, ITRAF, DTRAF, WORK);
}

void SCALAPACKE_pdlabad(const Int ICTXT, double* SMALL, double* LARGE) {
    pdlabad_(&ICTXT, SMALL, LARGE);
}

void SCALAPACKE_pslabad(const Int ICTXT, float* SMALL, float* LARGE) {
    pslabad_(&ICTXT, SMALL, LARGE);
}

void SCALAPACKE_pclabrd(const Int M, const Int N, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* X, const Int IX, const Int JX, const Int* DESCX, float* Y, const Int IY, const Int JY, const Int* DESCY, float* WORK) {
    pclabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pdlabrd(const Int M, const Int N, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* X, const Int IX, const Int JX, const Int* DESCX, double* Y, const Int IY, const Int JY, const Int* DESCY, double* WORK) {
    pdlabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pslabrd(const Int M, const Int N, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAUQ, float* TAUP, float* X, const Int IX, const Int JX, const Int* DESCX, float* Y, const Int IY, const Int JY, const Int* DESCY, float* WORK) {
    pslabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pzlabrd(const Int M, const Int N, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAUQ, double* TAUP, double* X, const Int IX, const Int JX, const Int* DESCX, double* Y, const Int IY, const Int JY, const Int* DESCY, double* WORK) {
    pzlabrd_(&M, &N, &NB, A, &IA, &JA, DESCA, D, E, TAUQ, TAUP, X, &IX, &JX, DESCX, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pclacgv(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pclacgv_(&N, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzlacgv(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzlacgv_(&N, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pclacon(const Int N, float* V, const Int IV, const Int JV, const Int* DESCV, float* X, const Int IX, const Int JX, const Int* DESCX, float* EST, Int* KASE) {
    pclacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, EST, KASE);
}

void SCALAPACKE_pdlacon(const Int N, double* V, const Int IV, const Int JV, const Int* DESCV, double* X, const Int IX, const Int JX, const Int* DESCX, Int* ISGN, double* EST, Int* KASE) {
    pdlacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, ISGN, EST, KASE);
}

void SCALAPACKE_pslacon(const Int N, float* V, const Int IV, const Int JV, const Int* DESCV, float* X, const Int IX, const Int JX, const Int* DESCX, Int* ISGN, float* EST, Int* KASE) {
    pslacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, ISGN, EST, KASE);
}

void SCALAPACKE_pzlacon(const Int N, double* V, const Int IV, const Int JV, const Int* DESCV, double* X, const Int IX, const Int JX, const Int* DESCX, double* EST, Int* KASE) {
    pzlacon_(&N, V, &IV, &JV, DESCV, X, &IX, &JX, DESCX, EST, KASE);
}

void SCALAPACKE_pclaconsb(const float* A, const Int* DESCA, const Int I, const Int L, Int* M, const float* H44, const float* H33, const float* H43H34, float* BUF, const Int LWORK) {
    pclaconsb_(A, DESCA, &I, &L, M, H44, H33, H43H34, BUF, &LWORK);
}

void SCALAPACKE_pdlaconsb(const double* A, const Int* DESCA, const Int I, const Int L, Int* M, const double H44, const double H33, const double H43H34, double* BUF, const Int LWORK) {
    pdlaconsb_(A, DESCA, &I, &L, M, &H44, &H33, &H43H34, BUF, &LWORK);
}

void SCALAPACKE_pslaconsb(const float* A, const Int* DESCA, const Int I, const Int L, Int* M, const float H44, const float H33, const float H43H34, float* BUF, const Int LWORK) {
    pslaconsb_(A, DESCA, &I, &L, M, &H44, &H33, &H43H34, BUF, &LWORK);
}

void SCALAPACKE_pzlaconsb(const double* A, const Int* DESCA, const Int I, const Int L, Int* M, const double* H44, const double* H33, const double* H43H34, double* BUF, const Int LWORK) {
    pzlaconsb_(A, DESCA, &I, &L, M, H44, H33, H43H34, BUF, &LWORK);
}

void SCALAPACKE_pclacp2(const char* UPLO, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pclacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlacp2(const char* UPLO, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pdlacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslacp2(const char* UPLO, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pslacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlacp2(const char* UPLO, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pzlacp2_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pclacp3(const Int M, const Int I, float* A, const Int* DESCA, float* B, const Int LDB, const Int II, const Int JJ, const Int REV) {
    pclacp3_(&M, &I, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pdlacp3(const Int M, const Int I, double* A, const Int* DESCA, double* B, const Int LDB, const Int II, const Int JJ, const Int REV) {
    pdlacp3_(&M, &I, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pslacp3(const Int M, const Int I, float* A, const Int* DESCA, float* B, const Int LDB, const Int II, const Int JJ, const Int REV) {
    pslacp3_(&M, &I, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pzlacp3(const Int M, const Int I, double* A, const Int* DESCA, double* B, const Int LDB, const Int II, const Int JJ, const Int REV) {
    pzlacp3_(&M, &I, A, DESCA, B, &LDB, &II, &JJ, &REV);
}

void SCALAPACKE_pclacpy(const char* UPLO, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pclacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlacpy(const char* UPLO, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pdlacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslacpy(const char* UPLO, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pslacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlacpy(const char* UPLO, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pzlacpy_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

Int SCALAPACKE_pdlaed0(const Int N, double* D, double* E, double* Q, const Int IQ, const Int JQ, const Int* DESCQ, double* WORK, Int* IWORK) {
    Int INFO = 0;
    pdlaed0_(&N, D, E, Q, &IQ, &JQ, DESCQ, WORK, IWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslaed0(const Int N, float* D, float* E, float* Q, const Int IQ, const Int JQ, const Int* DESCQ, float* WORK, Int* IWORK) {
    Int INFO = 0;
    pslaed0_(&N, D, E, Q, &IQ, &JQ, DESCQ, WORK, IWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdlaed1(const Int N, const Int N1, double* D, const Int ID, double* Q, const Int IQ, const Int JQ, const Int* DESCQ, const double RHO, double* WORK, Int* IWORK) {
    Int INFO = 0;
    pdlaed1_(&N, &N1, D, &ID, Q, &IQ, &JQ, DESCQ, &RHO, WORK, IWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslaed1(const Int N, const Int N1, float* D, const Int ID, float* Q, const Int IQ, const Int JQ, const Int* DESCQ, const float RHO, float* WORK, Int* IWORK) {
    Int INFO = 0;
    pslaed1_(&N, &N1, D, &ID, Q, &IQ, &JQ, DESCQ, &RHO, WORK, IWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaed2(const Int ICTXT, Int* K, const Int N, const Int N1, const Int NB, double* D, const Int DROW, const Int DCOL, double* Q, const Int LDQ, double* RHO, const double* Z, double* W, double* DLAMDA, double* Q2, const Int LDQ2, double* QBUF, Int* CTOT, Int* PSM, const Int NPCOL, Int* INDX, Int* INDXC, Int* INDXP, Int* INDCOL, Int* COLTYP, Int* NN, Int* NN1, Int* NN2, Int* IB1, Int* IB2) {
    pdlaed2_(&ICTXT, K, &N, &N1, &NB, D, &DROW, &DCOL, Q, &LDQ, RHO, Z, W, DLAMDA, Q2, &LDQ2, QBUF, CTOT, PSM, &NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN, NN1, NN2, IB1, IB2);
}

void SCALAPACKE_pslaed2(const Int ICTXT, Int* K, const Int N, const Int N1, const Int NB, float* D, const Int DROW, const Int DCOL, float* Q, const Int LDQ, float* RHO, const float* Z, float* W, float* DLAMDA, float* Q2, const Int LDQ2, float* QBUF, Int* CTOT, Int* PSM, const Int NPCOL, Int* INDX, Int* INDXC, Int* INDXP, Int* INDCOL, Int* COLTYP, Int* NN, Int* NN1, Int* NN2, Int* IB1, Int* IB2) {
    pslaed2_(&ICTXT, K, &N, &N1, &NB, D, &DROW, &DCOL, Q, &LDQ, RHO, Z, W, DLAMDA, Q2, &LDQ2, QBUF, CTOT, PSM, &NPCOL, INDX, INDXC, INDXP, INDCOL, COLTYP, NN, NN1, NN2, IB1, IB2);
}

Int SCALAPACKE_pdlaed3(const Int ICTXT, Int* K, const Int N, const Int NB, double* D, const Int DROW, const Int DCOL, double* RHO, double* DLAMDA, double* W, const double* Z, double* U, const Int LDU, double* BUF, Int* INDX, Int* INDCOL, Int* INDROW, Int* INDXR, Int* INDXC, Int* CTOT, const Int NPCOL) {
    Int INFO = 0;
    pdlaed3_(&ICTXT, K, &N, &NB, D, &DROW, &DCOL, RHO, DLAMDA, W, Z, U, &LDU, BUF, INDX, INDCOL, INDROW, INDXR, INDXC, CTOT, &NPCOL, &INFO);
    return INFO;
}

Int SCALAPACKE_pslaed3(const Int ICTXT, Int* K, const Int N, const Int NB, float* D, const Int DROW, const Int DCOL, float* RHO, float* DLAMDA, float* W, const float* Z, float* U, const Int LDU, float* BUF, Int* INDX, Int* INDCOL, Int* INDROW, Int* INDXR, Int* INDXC, Int* CTOT, const Int NPCOL) {
    Int INFO = 0;
    pslaed3_(&ICTXT, K, &N, &NB, D, &DROW, &DCOL, RHO, DLAMDA, W, Z, U, &LDU, BUF, INDX, INDCOL, INDROW, INDXR, INDXC, CTOT, &NPCOL, &INFO);
    return INFO;
}

Int SCALAPACKE_pjlaenv(const Int ICTXT, const Int ISPEC, const char* NAME, const char* OPTS, const Int N1, const Int N2, const Int N3, const Int N4) {
    return pjlaenv_(&ICTXT, &ISPEC, NAME, OPTS, &N1, &N2, &N3, &N4);
}

Int SCALAPACKE_pilaenvx(const Int ICTXT, const Int ISPEC, const char* NAME, const char* OPTS, const Int N1, const Int N2, const Int N3, const Int N4) {
    return pilaenvx_(&ICTXT, &ISPEC, NAME, OPTS, &N1, &N2, &N3, &N4);
}

void SCALAPACKE_pclaevswp(const Int N, const float* ZIN, const Int LDZI, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, const Int* NVS, const Int* KEY, float* RWORK, const Int LRWORK) {
    pclaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, RWORK, &LRWORK);
}

void SCALAPACKE_pdlaevswp(const Int N, const double* ZIN, const Int LDZI, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, const Int* NVS, const Int* KEY, double* WORK, const Int LWORK) {
    pdlaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, WORK, &LWORK);
}

void SCALAPACKE_pslaevswp(const Int N, const float* ZIN, const Int LDZI, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, const Int* NVS, const Int* KEY, float* WORK, const Int LWORK) {
    pslaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, WORK, &LWORK);
}

void SCALAPACKE_pzlaevswp(const Int N, const double* ZIN, const Int LDZI, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, const Int* NVS, const Int* KEY, double* RWORK, const Int LRWORK) {
    pzlaevswp_(&N, ZIN, &LDZI, Z, &IZ, &JZ, DESCZ, NVS, KEY, RWORK, &LRWORK);
}

Int SCALAPACKE_bdlaexc(const Int N, double* T, const Int LDT, const Int J1, const Int N1, const Int N2, Int* ITRAF, double* DTRAF, double* WORK) {
    Int INFO = 0;
    bdlaexc_(&N, T, &LDT, &J1, &N1, &N2, ITRAF, DTRAF, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_bslaexc(const Int N, float* T, const Int LDT, const Int J1, const Int N1, const Int N2, Int* ITRAF, float* DTRAF, float* WORK) {
    Int INFO = 0;
    bslaexc_(&N, T, &LDT, &J1, &N1, &N2, ITRAF, DTRAF, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pclahqr(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* A, const Int* DESCA, float* W, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pclahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, W, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdlahqr(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* A, const Int* DESCA, double* WR, double* WI, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pdlahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslahqr(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* A, const Int* DESCA, float* WR, float* WI, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pslahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzlahqr(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* A, const Int* DESCA, double* W, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pzlahqr_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, W, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pclahrd(const Int N, const Int K, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* T, float* Y, const Int IY, const Int JY, const Int* DESCY, float* WORK) {
    pclahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pdlahrd(const Int N, const Int K, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* T, double* Y, const Int IY, const Int JY, const Int* DESCY, double* WORK) {
    pdlahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pslahrd(const Int N, const Int K, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* T, float* Y, const Int IY, const Int JY, const Int* DESCY, float* WORK) {
    pslahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

void SCALAPACKE_pzlahrd(const Int N, const Int K, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* T, double* Y, const Int IY, const Int JY, const Int* DESCY, double* WORK) {
    pzlahrd_(&N, &K, &NB, A, &IA, &JA, DESCA, TAU, T, Y, &IY, &JY, DESCY, WORK);
}

double SCALAPACKE_pdlamch(const Int ICTXT, const char* CMACH) {
    return pdlamch_(&ICTXT, CMACH);
}

float SCALAPACKE_pslamch(const Int ICTXT, const char* CMACH) {
    return pslamch_(&ICTXT, CMACH);
}

void SCALAPACKE_pclamr1d(const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pclamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlamr1d(const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pdlamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pslamr1d(const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    pslamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pzlamr1d(const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    pzlamr1d_(&N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB);
}

void SCALAPACKE_pdlamve(const char* UPLO, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB, double* DWORK) {
    pdlamve_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, DWORK);
}

void SCALAPACKE_pslamve(const char* UPLO, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB, float* DWORK) {
    pslamve_(UPLO, &M, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, DWORK);
}

float SCALAPACKE_pclange(const char* NORM, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pclange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlange(const char* NORM, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pdlange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslange(const char* NORM, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pslange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlange(const char* NORM, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pzlange_(NORM, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclanhe(const char* NORM, const char* UPLO, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pclanhe_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlanhe(const char* NORM, const char* UPLO, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pzlanhe_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclanhs(const char* NORM, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pclanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlanhs(const char* NORM, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pdlanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslanhs(const char* NORM, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pslanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlanhs(const char* NORM, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pzlanhs_(NORM, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclansy(const char* NORM, const char* UPLO, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pclansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlansy(const char* NORM, const char* UPLO, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pdlansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslansy(const char* NORM, const char* UPLO, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pslansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlansy(const char* NORM, const char* UPLO, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pzlansy_(NORM, UPLO, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pclantr(const char* NORM, const char* UPLO, const char* DIAG, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pclantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pdlantr(const char* NORM, const char* UPLO, const char* DIAG, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pdlantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

float SCALAPACKE_pslantr(const char* NORM, const char* UPLO, const char* DIAG, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* WORK) {
    return pslantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

double SCALAPACKE_pzlantr(const char* NORM, const char* UPLO, const char* DIAG, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* WORK) {
    return pzlantr_(NORM, UPLO, DIAG, &M, &N, A, &IA, &JA, DESCA, WORK);
}

void SCALAPACKE_pclapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP, Int* IWORK) {
    pclapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pdlapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP, Int* IWORK) {
    pdlapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pslapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP, Int* IWORK) {
    pslapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pzlapiv(const char* DIREC, const char* ROWCOL, const char* PIVROC, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP, Int* IWORK) {
    pzlapiv_(DIREC, ROWCOL, PIVROC, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP, IWORK);
}

void SCALAPACKE_pclapv2(const char* DIREC, const char* ROWCOL, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP) {
    pclapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pdlapv2(const char* DIREC, const char* ROWCOL, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP) {
    pdlapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pslapv2(const char* DIREC, const char* ROWCOL, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP) {
    pslapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pzlapv2(const char* DIREC, const char* ROWCOL, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int* IPIV, const Int IP, const Int JP, const Int* DESCIP) {
    pzlapv2_(DIREC, ROWCOL, &M, &N, A, &IA, &JA, DESCA, IPIV, &IP, &JP, DESCIP);
}

void SCALAPACKE_pclaqge(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* R, const float* C, const float ROWCND, const float COLCND, const float AMAX, char* EQUED) {
    pclaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqge(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* R, const double* C, const double ROWCND, const double COLCND, const double AMAX, char* EQUED) {
    pdlaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pslaqge(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* R, const float* C, const float ROWCND, const float COLCND, const float AMAX, char* EQUED) {
    pslaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pzlaqge(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* R, const double* C, const double ROWCND, const double COLCND, const double AMAX, char* EQUED) {
    pzlaqge_(&M, &N, A, &IA, &JA, DESCA, R, C, &ROWCND, &COLCND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqr0(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* H, const Int* DESCH, double* WR, double* WI, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* INFO, const Int RECLEVEL) {
    pdlaqr0_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, DESCH, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, INFO, &RECLEVEL);
}

void SCALAPACKE_pslaqr0(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* H, const Int* DESCH, float* WR, float* WI, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* INFO, const Int RECLEVEL) {
    pslaqr0_(&WANTT, &WANTZ, &N, &ILO, &IHI, H, DESCH, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK, INFO, &RECLEVEL);
}

Int SCALAPACKE_pdlaqr1(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* A, const Int* DESCA, double* WR, double* WI, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pdlaqr1_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslaqr1(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* A, const Int* DESCA, float* WR, float* WI, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, const Int* IWORK, const Int ILWORK) {
    Int INFO = 0;
    pslaqr1_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &ILWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaqr2(const Int WANTT, const Int WANTZ, const Int N, const Int KTOP, const Int KBOT, const Int NW, double* A, const Int* DESCA, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, Int* NS, Int* ND, double* SR, double* SI, double* T, const Int LDT, double* V, const Int LDV, double* WR, double* WI, double* WORK, const Int LWORK) {
    pdlaqr2_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, A, DESCA, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, T, &LDT, V, &LDV, WR, WI, WORK, &LWORK);
}

void SCALAPACKE_pslaqr2(const Int WANTT, const Int WANTZ, const Int N, const Int KTOP, const Int KBOT, const Int NW, float* A, const Int* DESCA, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, Int* NS, Int* ND, float* SR, float* SI, float* T, const Int LDT, float* V, const Int LDV, float* WR, float* WI, float* WORK, const Int LWORK) {
    pslaqr2_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, A, DESCA, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, T, &LDT, V, &LDV, WR, WI, WORK, &LWORK);
}

void SCALAPACKE_pdlaqr3(const Int WANTT, const Int WANTZ, const Int N, const Int KTOP, const Int KBOT, const Int NW, double* H, const Int* DESCH, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, Int* NS, Int* ND, double* SR, double* SI, double* V, const Int* DESCV, const Int NH, double* T, const Int* DESCT, const Int NV, double* WV, const Int* DESCW, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int RECLEVEL) {
    pdlaqr3_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, V, DESCV, &NH, T, DESCT, &NV, WV, DESCW, WORK, &LWORK, IWORK, &LIWORK, &RECLEVEL);
}

void SCALAPACKE_pslaqr3(const Int WANTT, const Int WANTZ, const Int N, const Int KTOP, const Int KBOT, const Int NW, float* H, const Int* DESCH, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, Int* NS, Int* ND, float* SR, float* SI, float* V, const Int* DESCV, const Int NH, float* T, const Int* DESCT, const Int NV, float* WV, const Int* DESCW, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int RECLEVEL) {
    pslaqr3_(&WANTT, &WANTZ, &N, &KTOP, &KBOT, &NW, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, NS, ND, SR, SI, V, DESCV, &NH, T, DESCT, &NV, WV, DESCW, WORK, &LWORK, IWORK, &LIWORK, &RECLEVEL);
}

Int SCALAPACKE_pdlaqr4(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, double* A, const Int* DESCA, double* WR, double* WI, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* T, const Int LDT, double* V, const Int LDV, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdlaqr4_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, T, &LDT, V, &LDV, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslaqr4(const Int WANTT, const Int WANTZ, const Int N, const Int ILO, const Int IHI, float* A, const Int* DESCA, float* WR, float* WI, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* T, const Int LDT, float* V, const Int LDV, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pslaqr4_(&WANTT, &WANTZ, &N, &ILO, &IHI, A, DESCA, WR, WI, &ILOZ, &IHIZ, Z, DESCZ, T, &LDT, V, &LDV, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdlaqr5(const Int WANTT, const Int WANTZ, const Int KACC22, const Int N, const Int KTOP, const Int KBOT, const Int NSHFTS, const double* SR, const double* SI, double* H, const Int* DESCH, const Int ILOZ, const Int IHIZ, double* Z, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    pdlaqr5_(&WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK);
}

void SCALAPACKE_pslaqr5(const Int WANTT, const Int WANTZ, const Int KACC22, const Int N, const Int KTOP, const Int KBOT, const Int NSHFTS, const float* SR, const float* SI, float* H, const Int* DESCH, const Int ILOZ, const Int IHIZ, float* Z, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    pslaqr5_(&WANTT, &WANTZ, &KACC22, &N, &KTOP, &KBOT, &NSHFTS, SR, SI, H, DESCH, &ILOZ, &IHIZ, Z, DESCZ, WORK, &LWORK, IWORK, &LIWORK);
}

void SCALAPACKE_pclaqsy(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* SR, const float* SC, const float SCOND, const float AMAX, char* EQUED) {
    pclaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pdlaqsy(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* SR, const double* SC, const double SCOND, const double AMAX, char* EQUED) {
    pdlaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pslaqsy(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* SR, const float* SC, const float SCOND, const float AMAX, char* EQUED) {
    pslaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pzlaqsy(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* SR, const double* SC, const double SCOND, const double AMAX, char* EQUED) {
    pzlaqsy_(UPLO, &N, A, &IA, &JA, DESCA, SR, SC, &SCOND, &AMAX, EQUED);
}

void SCALAPACKE_pdlared1d(const Int N, const Int IA, const Int JA, const Int* DESC, const double* BYCOL, double* BYALL, double* WORK, const Int* LWORK) {
    pdlared1d_(&N, &IA, &JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void SCALAPACKE_pslared1d(const Int N, const Int IA, const Int JA, const Int* DESC, const float* BYCOL, float* BYALL, float* WORK, const Int* LWORK) {
    pslared1d_(&N, &IA, &JA, DESC, BYCOL, BYALL, WORK, LWORK);
}

void SCALAPACKE_pdlared2d(const Int N, const Int IA, const Int JA, const Int* DESC, const double* BYROW, double* BYALL, double* WORK, const Int* LWORK) {
    pdlared2d_(&N, &IA, &JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void SCALAPACKE_pslared2d(const Int N, const Int IA, const Int JA, const Int* DESC, const float* BYROW, float* BYALL, float* WORK, const Int* LWORK) {
    pslared2d_(&N, &IA, &JA, DESC, BYROW, BYALL, WORK, LWORK);
}

void SCALAPACKE_pclarf(const char* SIDE, const Int M, const Int N, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarf(const char* SIDE, const Int M, const Int N, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pdlarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarf(const char* SIDE, const Int M, const Int N, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pslarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarf(const char* SIDE, const Int M, const Int N, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarf_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const float* V, const Int IV, const Int JV, const Int* DESCV, const float* T, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const double* V, const Int IV, const Int JV, const Int* DESCV, const double* T, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pdlarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const float* V, const Int IV, const Int JV, const Int* DESCV, const float* T, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pslarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarfb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const double* V, const Int IV, const Int JV, const Int* DESCV, const double* T, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarfb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarfc(const char* SIDE, const Int M, const Int N, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarfc_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarfc(const char* SIDE, const Int M, const Int N, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarfc_(SIDE, &M, &N, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarfg(const Int N, float* ALPHA, const Int IAX, const Int JAX, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* TAU) {
    pclarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pdlarfg(const Int N, double* ALPHA, const Int IAX, const Int JAX, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* TAU) {
    pdlarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pslarfg(const Int N, float* ALPHA, const Int IAX, const Int JAX, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* TAU) {
    pslarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pzlarfg(const Int N, double* ALPHA, const Int IAX, const Int JAX, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* TAU) {
    pzlarfg_(&N, ALPHA, &IAX, &JAX, X, &IX, &JX, DESCX, &INCX, TAU);
}

void SCALAPACKE_pclarft(const char* DIRECT, const char* STOREV, const Int N, const Int K, float* V, const Int IV, const Int JV, const Int* DESCV, const float* TAU, float* T, float* WORK) {
    pclarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pdlarft(const char* DIRECT, const char* STOREV, const Int N, const Int K, double* V, const Int IV, const Int JV, const Int* DESCV, const double* TAU, double* T, double* WORK) {
    pdlarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pslarft(const char* DIRECT, const char* STOREV, const Int N, const Int K, float* V, const Int IV, const Int JV, const Int* DESCV, const float* TAU, float* T, float* WORK) {
    pslarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarft(const char* DIRECT, const char* STOREV, const Int N, const Int K, double* V, const Int IV, const Int JV, const Int* DESCV, const double* TAU, double* T, double* WORK) {
    pzlarft_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pclarz(const char* SIDE, const Int M, const Int N, const Int L, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarz(const char* SIDE, const Int M, const Int N, const Int L, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pdlarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarz(const char* SIDE, const Int M, const Int N, const Int L, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pslarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarz(const char* SIDE, const Int M, const Int N, const Int L, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarz_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const Int L, const float* V, const Int IV, const Int JV, const Int* DESCV, const float* T, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pdlarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const Int L, const double* V, const Int IV, const Int JV, const Int* DESCV, const double* T, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pdlarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pslarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const Int L, const float* V, const Int IV, const Int JV, const Int* DESCV, const float* T, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pslarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarzb(const char* SIDE, const char* TRANS, const char* DIRECT, const char* STOREV, const Int M, const Int N, const Int K, const Int L, const double* V, const Int IV, const Int JV, const Int* DESCV, const double* T, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarzb_(SIDE, TRANS, DIRECT, STOREV, &M, &N, &K, &L, V, &IV, &JV, DESCV, T, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarzc(const char* SIDE, const Int M, const Int N, const Int L, const float* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK) {
    pclarzc_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pzlarzc(const char* SIDE, const Int M, const Int N, const Int L, const double* V, const Int IV, const Int JV, const Int* DESCV, const Int INCV, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK) {
    pzlarzc_(SIDE, &M, &N, &L, V, &IV, &JV, DESCV, &INCV, TAU, C, &IC, &JC, DESCC, WORK);
}

void SCALAPACKE_pclarzt(const char* DIRECT, const char* STOREV, const Int N, const Int K, float* V, const Int IV, const Int JV, const Int* DESCV, const float* TAU, float* T, float* WORK) {
    pclarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pdlarzt(const char* DIRECT, const char* STOREV, const Int N, const Int K, double* V, const Int IV, const Int JV, const Int* DESCV, const double* TAU, double* T, double* WORK) {
    pdlarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pslarzt(const char* DIRECT, const char* STOREV, const Int N, const Int K, float* V, const Int IV, const Int JV, const Int* DESCV, const float* TAU, float* T, float* WORK) {
    pslarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

void SCALAPACKE_pzlarzt(const char* DIRECT, const char* STOREV, const Int N, const Int K, double* V, const Int IV, const Int JV, const Int* DESCV, const double* TAU, double* T, double* WORK) {
    pzlarzt_(DIRECT, STOREV, &N, &K, V, &IV, &JV, DESCV, TAU, T, WORK);
}

Int SCALAPACKE_pclascl(const char* TYPE, const float CFROM, const float CTO, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pclascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdlascl(const char* TYPE, const double CFROM, const double CTO, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdlascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pslascl(const char* TYPE, const float CFROM, const float CTO, const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pslascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pzlascl(const char* TYPE, const double CFROM, const double CTO, const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pzlascl_(TYPE, &CFROM, &CTO, &M, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

void SCALAPACKE_pclase2(const char* UPLO, const Int M, const Int N, const float* ALPHA, const float* BETA, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pclase2_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlase2(const char* UPLO, const Int M, const Int N, const double ALPHA, const double BETA, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdlase2_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslase2(const char* UPLO, const Int M, const Int N, const float ALPHA, const float BETA, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pslase2_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlase2(const char* UPLO, const Int M, const Int N, const double* ALPHA, const double* BETA, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzlase2_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclaset(const char* UPLO, const Int M, const Int N, const float* ALPHA, const float* BETA, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pclaset_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlaset(const char* UPLO, const Int M, const Int N, const double ALPHA, const double BETA, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdlaset_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslaset(const char* UPLO, const Int M, const Int N, const float ALPHA, const float BETA, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pslaset_(UPLO, &M, &N, &ALPHA, &BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlaset(const char* UPLO, const Int M, const Int N, const double* ALPHA, const double* BETA, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzlaset_(UPLO, &M, &N, ALPHA, BETA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclasmsub(const float* A, const Int* DESCA, const Int I, const Int L, Int* K, const float SMLNUM, float* BUF, const Int LWORK) {
    pclasmsub_(A, DESCA, &I, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pdlasmsub(const double* A, const Int* DESCA, const Int I, const Int L, Int* K, const double SMLNUM, double* BUF, const Int LWORK) {
    pdlasmsub_(A, DESCA, &I, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pslasmsub(const float* A, const Int* DESCA, const Int I, const Int L, Int* K, const float SMLNUM, float* BUF, const Int LWORK) {
    pslasmsub_(A, DESCA, &I, &L, K, &SMLNUM, BUF, &LWORK);
}

void SCALAPACKE_pzlasmsub(const double* A, const Int* DESCA, const Int I, const Int L, Int* K, const double SMLNUM, double* BUF, const Int LWORK) {
    pzlasmsub_(A, DESCA, &I, &L, K, &SMLNUM, BUF, &LWORK);
}

Int SCALAPACKE_pdlasrt(const char* ID, const Int N, double* D, const double* Q, const Int IQ, const Int JQ, const Int* DESCQ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdlasrt_(ID, &N, D, Q, &IQ, &JQ, DESCQ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pslasrt(const char* ID, const Int N, float* D, const float* Q, const Int IQ, const Int JQ, const Int* DESCQ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pslasrt_(ID, &N, D, Q, &IQ, &JQ, DESCQ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pclassq(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* SCALE, float* SUMSQ) {
    pclassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pdlassq(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* SCALE, double* SUMSQ) {
    pdlassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pslassq(const Int N, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* SCALE, float* SUMSQ) {
    pslassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pzlassq(const Int N, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* SCALE, double* SUMSQ) {
    pzlassq_(&N, X, &IX, &JX, DESCX, &INCX, SCALE, SUMSQ);
}

void SCALAPACKE_pclaswp(const char* DIREC, const char* ROWCOL, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int K1, const Int K2, const Int* IPIV) {
    pclaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pdlaswp(const char* DIREC, const char* ROWCOL, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int K1, const Int K2, const Int* IPIV) {
    pdlaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pslaswp(const char* DIREC, const char* ROWCOL, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const Int K1, const Int K2, const Int* IPIV) {
    pslaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

void SCALAPACKE_pzlaswp(const char* DIREC, const char* ROWCOL, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const Int K1, const Int K2, const Int* IPIV) {
    pzlaswp_(DIREC, ROWCOL, &N, A, &IA, &JA, DESCA, &K1, &K2, IPIV);
}

float* SCALAPACKE_pclatra(const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA) {
    return pclatra_(&N, A, &IA, &JA, DESCA);
}

double SCALAPACKE_pdlatra(const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA) {
    return pdlatra_(&N, A, &IA, &JA, DESCA);
}

float SCALAPACKE_pslatra(const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA) {
    return pslatra_(&N, A, &IA, &JA, DESCA);
}

double* SCALAPACKE_pzlatra(const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA) {
    return pzlatra_(&N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclatrd(const char* UPLO, const Int N, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* W, const Int IW, const Int JW, const Int* DESCW, float* WORK) {
    pclatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pdlatrd(const char* UPLO, const Int N, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* W, const Int IW, const Int JW, const Int* DESCW, double* WORK) {
    pdlatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pslatrd(const char* UPLO, const Int N, const Int NB, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* W, const Int IW, const Int JW, const Int* DESCW, float* WORK) {
    pslatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pzlatrd(const char* UPLO, const Int N, const Int NB, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* W, const Int IW, const Int JW, const Int* DESCW, double* WORK) {
    pzlatrd_(UPLO, &N, &NB, A, &IA, &JA, DESCA, D, E, TAU, W, &IW, &JW, DESCW, WORK);
}

void SCALAPACKE_pclatrz(const Int M, const Int N, const Int L, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK) {
    pclatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pdlatrz(const Int M, const Int N, const Int L, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK) {
    pdlatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pslatrz(const Int M, const Int N, const Int L, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK) {
    pslatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

void SCALAPACKE_pzlatrz(const Int M, const Int N, const Int L, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK) {
    pzlatrz_(&M, &N, &L, A, &IA, &JA, DESCA, TAU, WORK);
}

Int SCALAPACKE_pclattrs(const char* UPLO, const char* TRANS, const char* DIAG, const char* NORMIN, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* X, const Int IX, const Int JX, const Int* DESCX, float* SCALE, float* CNORM) {
    Int INFO = 0;
    pclattrs_(UPLO, TRANS, DIAG, NORMIN, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, SCALE, CNORM, &INFO);
    return INFO;
}

Int SCALAPACKE_pzlattrs(const char* UPLO, const char* TRANS, const char* DIAG, const char* NORMIN, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* X, const Int IX, const Int JX, const Int* DESCX, double* SCALE, double* CNORM) {
    Int INFO = 0;
    pzlattrs_(UPLO, TRANS, DIAG, NORMIN, &N, A, &IA, &JA, DESCA, X, &IX, &JX, DESCX, SCALE, CNORM, &INFO);
    return INFO;
}

void SCALAPACKE_pclauu2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pclauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlauu2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdlauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslauu2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pslauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlauu2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzlauu2_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclauum(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pclauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdlauum(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdlauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pslauum(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    pslauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzlauum(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzlauum_(UPLO, &N, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pclawil(const Int II, const Int JJ, const Int M, const float* A, const Int* DESCA, const float* H44, const float* H33, const float* H43H34, float* V) {
    pclawil_(&II, &JJ, &M, A, DESCA, H44, H33, H43H34, V);
}

void SCALAPACKE_pdlawil(const Int II, const Int JJ, const Int M, const double* A, const Int* DESCA, const double H44, const double H33, const double H43H34, double* V) {
    pdlawil_(&II, &JJ, &M, A, DESCA, &H44, &H33, &H43H34, V);
}

void SCALAPACKE_pslawil(const Int II, const Int JJ, const Int M, const float* A, const Int* DESCA, const float H44, const float H33, const float H43H34, float* V) {
    pslawil_(&II, &JJ, &M, A, DESCA, &H44, &H33, &H43H34, V);
}

void SCALAPACKE_pzlawil(const Int II, const Int JJ, const Int M, const double* A, const Int* DESCA, const double* H44, const double* H33, const double* H43H34, double* V) {
    pzlawil_(&II, &JJ, &M, A, DESCA, H44, H33, H43H34, V);
}

void SCALAPACKE_pcmax1(const Int N, float* AMAX, Int* INDX, const float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pcmax1_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pzmax1(const Int N, double* AMAX, Int* INDX, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pzmax1_(&N, AMAX, INDX, X, &IX, &JX, DESCX, &INCX);
}

Int SCALAPACKE_pdorg2l(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorg2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorg2l(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorg2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorg2r(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorg2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorg2r(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorg2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorgl2(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorgl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorgl2(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorgl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorglq(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorglq(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorgql(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorgql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorgql(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorgql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorgqr(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorgqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorgqr(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorgqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorgr2(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorgr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorgr2(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorgr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorgrq(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorgrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorgrq(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorgrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorm2l(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorm2l(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorm2r(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorm2r(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormbr(const char* VECT, const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormbr(const char* VECT, const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormhr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int ILO, const Int IHI, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormhr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int ILO, const Int IHI, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdorml2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdorml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psorml2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psorml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormlq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormlq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormql(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormql(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormqr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormqr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormr2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormr2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormr3(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormr3(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormrq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormrq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormrz(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormrz(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdormtr(const char* SIDE, const char* UPLO, const char* TRANS, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdormtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psormtr(const char* SIDE, const char* UPLO, const char* TRANS, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psormtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpbsv(const char* UPLO, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpbsv(const char* UPLO, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspbsv(const char* UPLO, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpbsv(const char* UPLO, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpbsv_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpbtrf(const char* UPLO, const Int N, const Int BW, float* A, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpbtrf(const char* UPLO, const Int N, const Int BW, double* A, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspbtrf(const char* UPLO, const Int N, const Int BW, float* A, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpbtrf(const char* UPLO, const Int N, const Int BW, double* A, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpbtrf_(UPLO, &N, &BW, A, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpbtrs(const char* UPLO, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpbtrs(const char* UPLO, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspbtrs(const char* UPLO, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpbtrs(const char* UPLO, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpbtrs_(UPLO, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BW, const Int NRHS, float* A, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpbtrsv(const char* UPLO, const char* TRANS, const Int N, const Int BW, const Int NRHS, double* A, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpbtrsv_(UPLO, TRANS, &N, &BW, &NRHS, A, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pmpcol(const Int MYPROC, const Int NPROCS, const Int IIL, const Int NEEDIL, const Int NEEDIU, const Int* PMYILS, const Int* PMYIUS, Int* COLBRT, Int* FRSTCL, const Int LASTCL) {
    pmpcol_(&MYPROC, &NPROCS, &IIL, &NEEDIL, &NEEDIU, PMYILS, PMYIUS, COLBRT, FRSTCL, &LASTCL);
}

void SCALAPACKE_pmpim2(const Int IL, const Int IU, const Int NPROCS, Int* PMYILS, Int* PMYIUS) {
    pmpim2_(&IL, &IU, &NPROCS, PMYILS, PMYIUS);
}

Int SCALAPACKE_pcpocon(const char* UPLO, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float ANORM, float* RCOND, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpocon(const char* UPLO, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double ANORM, double* RCOND, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspocon(const char* UPLO, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float ANORM, float* RCOND, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pspocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpocon(const char* UPLO, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double ANORM, double* RCOND, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzpocon_(UPLO, &N, A, &IA, &JA, DESCA, &ANORM, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpoequ(const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* SR, float* SC, float* SCOND, float* AMAX) {
    Int INFO = 0;
    pcpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpoequ(const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* SR, double* SC, double* SCOND, double* AMAX) {
    Int INFO = 0;
    pdpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pspoequ(const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* SR, float* SC, float* SCOND, float* AMAX) {
    Int INFO = 0;
    pspoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpoequ(const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* SR, double* SC, double* SCOND, double* AMAX) {
    Int INFO = 0;
    pzpoequ_(&N, A, &IA, &JA, DESCA, SR, SC, SCOND, AMAX, &INFO);
    return INFO;
}

Int SCALAPACKE_pcporfs(const char* UPLO, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* AF, const Int IAF, const Int JAF, const Int* DESCAF, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* X, const Int IX, const Int JX, const Int* DESCX, float* FERR, float* BERR, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdporfs(const char* UPLO, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* AF, const Int IAF, const Int JAF, const Int* DESCAF, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* X, const Int IX, const Int JX, const Int* DESCX, double* FERR, double* BERR, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psporfs(const char* UPLO, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* AF, const Int IAF, const Int JAF, const Int* DESCAF, const float* B, const Int IB, const Int JB, const Int* DESCB, const float* X, const Int IX, const Int JX, const Int* DESCX, float* FERR, float* BERR, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzporfs(const char* UPLO, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* AF, const Int IAF, const Int JAF, const Int* DESCAF, const double* B, const Int IB, const Int JB, const Int* DESCB, const double* X, const Int IX, const Int JX, const Int* DESCX, double* FERR, double* BERR, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzporfs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcposv(const char* UPLO, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pcposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdposv(const char* UPLO, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_psposv(const char* UPLO, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    psposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pzposv(const char* UPLO, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pzposv_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pcposvx(const char* FACT, const char* UPLO, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* AF, const Int IAF, const Int JAF, const Int* DESCAF, char* EQUED, float* SR, float* SC, float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pcposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdposvx(const char* FACT, const char* UPLO, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* AF, const Int IAF, const Int JAF, const Int* DESCAF, char* EQUED, double* SR, double* SC, double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psposvx(const char* FACT, const char* UPLO, const Int N, const Int NRHS, float* A, const Int IA, const Int JA, const Int* DESCA, float* AF, const Int IAF, const Int JAF, const Int* DESCAF, char* EQUED, float* SR, float* SC, float* B, const Int IB, const Int JB, const Int* DESCB, float* X, const Int IX, const Int JX, const Int* DESCX, float* RCOND, float* FERR, float* BERR, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzposvx(const char* FACT, const char* UPLO, const Int N, const Int NRHS, double* A, const Int IA, const Int JA, const Int* DESCA, double* AF, const Int IAF, const Int JAF, const Int* DESCAF, char* EQUED, double* SR, double* SC, double* B, const Int IB, const Int JB, const Int* DESCB, double* X, const Int IX, const Int JX, const Int* DESCX, double* RCOND, double* FERR, double* BERR, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pzposvx_(FACT, UPLO, &N, &NRHS, A, &IA, &JA, DESCA, AF, &IAF, &JAF, DESCAF, EQUED, SR, SC, B, &IB, &JB, DESCB, X, &IX, &JX, DESCX, RCOND, FERR, BERR, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpotf2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pcpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpotf2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pspotf2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pspotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpotf2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pzpotf2_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpotrf(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pcpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpotrf(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pspotrf(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pspotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpotrf(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pzpotrf_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpotri(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pcpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpotri(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pspotri(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pspotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpotri(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pzpotri_(UPLO, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpotrs(const char* UPLO, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pcpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpotrs(const char* UPLO, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pspotrs(const char* UPLO, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pspotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpotrs(const char* UPLO, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pzpotrs_(UPLO, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pcptsv(const char* UPLO, const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcptsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdptsv(const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdptsv_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psptsv(const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* WORK, const Int LWORK) {
    Int INFO = 0;
    psptsv_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzptsv(const char* UPLO, const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzptsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpttrf(const Int N, float* D, float* E, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpttrf(const Int N, double* D, double* E, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspttrf(const Int N, float* D, float* E, const Int JA, const Int* DESCA, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpttrf(const Int N, double* D, double* E, const Int JA, const Int* DESCA, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpttrf_(&N, D, E, &JA, DESCA, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpttrs(const char* UPLO, const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpttrs_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpttrs(const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpttrs_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspttrs(const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspttrs_(&N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpttrs(const char* UPLO, const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpttrs_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcpttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdpttrsv(const char* UPLO, const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdpttrsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pspttrsv(const char* UPLO, const Int N, const Int NRHS, float* D, float* E, const Int JA, const Int* DESCA, float* B, const Int IB, const Int* DESCB, float* AF, const Int LAF, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pspttrsv_(UPLO, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzpttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, double* D, double* E, const Int JA, const Int* DESCA, double* B, const Int IB, const Int* DESCB, double* AF, const Int LAF, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, &JA, DESCA, B, &IB, DESCB, AF, &LAF, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdrot(const Int N, double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, double* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, const double CS, const double SN, const double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdrot_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, &CS, &SN, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psrot(const Int N, float* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX, float* Y, const Int IY, const Int JY, const Int* DESCY, const Int INCY, const float CS, const float SN, const float* WORK, const Int LWORK) {
    Int INFO = 0;
    psrot_(&N, X, &IX, &JX, DESCX, &INCX, Y, &IY, &JY, DESCY, &INCY, &CS, &SN, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdrscl(const Int N, const double SA, double* SX, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_psrscl(const Int N, const float SA, float* SX, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    psrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

void SCALAPACKE_pcsrscl(const Int N, const float SA, float* SX, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pcsrscl_(&N, &SA, SX, &IX, &JX, DESCX, &INCX);
}

Int SCALAPACKE_pdstebz(const Int ICTXT, const char* RANGE, const char* ORDER, const Int N, const double VL, const double VU, const Int IL, const Int IU, const double ABSTOL, const double* D, const double* E, Int* M, Int* NSPLIT, double* W, Int* IBLOCK, Int* ISPLIT, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdstebz_(&ICTXT, RANGE, ORDER, &N, &VL, &VU, &IL, &IU, &ABSTOL, D, E, M, NSPLIT, W, IBLOCK, ISPLIT, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psstebz(const Int ICTXT, const char* RANGE, const char* ORDER, const Int N, const float VL, const float VU, const Int IL, const Int IU, const float ABSTOL, const float* D, const float* E, Int* M, Int* NSPLIT, float* W, Int* IBLOCK, Int* ISPLIT, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psstebz_(&ICTXT, RANGE, ORDER, &N, &VL, &VU, &IL, &IU, &ABSTOL, D, E, M, NSPLIT, W, IBLOCK, ISPLIT, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdstedc(const char* COMPZ, const Int N, double* D, double* E, double* Q, const Int IQ, const Int JQ, const Int* DESCQ, double* WORK, Int* LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdstedc_(COMPZ, &N, D, E, Q, &IQ, &JQ, DESCQ, WORK, LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_psstedc(const char* COMPZ, const Int N, float* D, float* E, float* Q, const Int IQ, const Int JQ, const Int* DESCQ, float* WORK, Int* LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    psstedc_(COMPZ, &N, D, E, Q, &IQ, &JQ, DESCQ, WORK, LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcstein(const Int N, const float* D, const float* E, const Int M, float* W, const Int* IBLOCK, const Int* ISPLIT, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    pcstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pdstein(const Int N, const double* D, const double* E, const Int M, double* W, const Int* IBLOCK, const Int* ISPLIT, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pdstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_psstein(const Int N, const float* D, const float* E, const Int M, float* W, const Int* IBLOCK, const Int* ISPLIT, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    psstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pzstein(const Int N, const double* D, const double* E, const Int M, double* W, const Int* IBLOCK, const Int* ISPLIT, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pzstein_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyev(const char* JOBZ, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsyev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyev(const char* JOBZ, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssyev_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyevd(const char* JOBZ, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdsyevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyevd(const char* JOBZ, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pssyevd_(JOBZ, UPLO, &N, A, &IA, &JA, DESCA, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyevr(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double VL, const double VU, const Int IL, const Int IU, Int* M, Int* NZ, double* W, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdsyevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyevr(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float VL, const float VU, const Int IL, const Int IU, Int* M, Int* NZ, float* W, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pssyevr_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, M, NZ, W, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyevx(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double VL, const double VU, const Int IL, const Int IU, const double ABSTOL, Int* M, Int* NZ, double* W, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pdsyevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyevx(const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float VL, const float VU, const Int IL, const Int IU, const float ABSTOL, Int* M, Int* NZ, float* W, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    pssyevx_(JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsygs2(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdsygs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pssygs2(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pssygs2_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsygst(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, double* SCALE) {
    Int INFO = 0;
    pdsygst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_pssygst(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, float* SCALE) {
    Int INFO = 0;
    pssygst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsygvx(const Int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB, const double VL, const double VU, const Int IL, const Int IU, const double ABSTOL, Int* M, Int* NZ, double* W, const double ORFAC, double* Z, const Int IZ, const Int JZ, const Int* DESCZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, double* GAP) {
    Int INFO = 0;
    pdsygvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pssygvx(const Int IBTYPE, const char* JOBZ, const char* RANGE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB, const float VL, const float VU, const Int IL, const Int IU, const float ABSTOL, Int* M, Int* NZ, float* W, const float ORFAC, float* Z, const Int IZ, const Int JZ, const Int* DESCZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, Int* IFAIL, Int* ICLUSTR, float* GAP) {
    Int INFO = 0;
    pssygvx_(&IBTYPE, JOBZ, RANGE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &VL, &VU, &IL, &IU, &ABSTOL, M, NZ, W, &ORFAC, Z, &IZ, &JZ, DESCZ, WORK, &LWORK, IWORK, &LIWORK, IFAIL, ICLUSTR, GAP, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyngst(const Int IBTYPE, const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, const double* B, const Int IB, const Int JB, const Int* DESCB, double* SCALE, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsyngst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyngst(const Int IBTYPE, const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, const float* B, const Int IB, const Int JB, const Int* DESCB, float* SCALE, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssyngst_(&IBTYPE, UPLO, &N, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, SCALE, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyntrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsyntrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyntrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssyntrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsytd2(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsytd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssytd2(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssytd2_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsytrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsytrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssytrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssytrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdsyttrd(const char* UPLO, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* D, double* E, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdsyttrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pssyttrd(const char* UPLO, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* D, float* E, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pssyttrd_(UPLO, &N, A, &IA, &JA, DESCA, D, E, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_dstegr2(const char* JOBZ, const char* RANGE, const Int N, double* D, double* E, const double VL, const double VU, const Int IL, const Int IU, Int* M, double* W, double* Z, const Int LDZ, const Int NZC, Int* ISUPPZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, const Int ZOFFSET) {
    Int INFO = 0;
    dstegr2_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_sstegr2(const char* JOBZ, const char* RANGE, const Int N, float* D, float* E, const float VL, const float VU, const Int IL, const Int IU, Int* M, float* W, float* Z, const Int LDZ, const Int NZC, Int* ISUPPZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, const Int ZOFFSET) {
    Int INFO = 0;
    sstegr2_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_dstegr2a(const char* JOBZ, const char* RANGE, const Int N, double* D, double* E, const double VL, const double VU, const Int IL, const Int IU, Int* M, double* W, double* Z, const Int LDZ, const Int NZC, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, Int* INDERR, Int* NSPLIT, double* PIVMIN, double* SCALE, double* WL, double* WU) {
    Int INFO = 0;
    dstegr2a_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDERR, NSPLIT, PIVMIN, SCALE, WL, WU, &INFO);
    return INFO;
}

Int SCALAPACKE_sstegr2a(const char* JOBZ, const char* RANGE, const Int N, float* D, float* E, const float VL, const float VU, const Int IL, const Int IU, Int* M, float* W, float* Z, const Int LDZ, const Int NZC, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, Int* INDERR, Int* NSPLIT, float* PIVMIN, float* SCALE, float* WL, float* WU) {
    Int INFO = 0;
    sstegr2a_(JOBZ, RANGE, &N, D, E, &VL, &VU, &IL, &IU, M, W, Z, &LDZ, &NZC, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDERR, NSPLIT, PIVMIN, SCALE, WL, WU, &INFO);
    return INFO;
}

Int SCALAPACKE_dstegr2b(const char* JOBZ, const Int N, double* D, double* E, const Int M, const double* W, double* Z, const Int LDZ, const Int NZC, Int* ISUPPZ, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, Int* INDWLC, const double PIVMIN, const double SCALE, const double WL, const double WU, Int* VSTART, Int* FINISH, Int* MAXCLS, Int* NDEPTH, Int* PARITY, const Int ZOFFSET) {
    Int INFO = 0;
    dstegr2b_(JOBZ, &N, D, E, &M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDWLC, &PIVMIN, &SCALE, &WL, &WU, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_sstegr2b(const char* JOBZ, const Int N, float* D, float* E, const Int M, const float* W, float* Z, const Int LDZ, const Int NZC, Int* ISUPPZ, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK, const Int DOL, const Int DOU, Int* NEEDIL, Int* NEEDIU, Int* INDWLC, const float PIVMIN, const float SCALE, const float WL, const float WU, Int* VSTART, Int* FINISH, Int* MAXCLS, Int* NDEPTH, Int* PARITY, const Int ZOFFSET) {
    Int INFO = 0;
    sstegr2b_(JOBZ, &N, D, E, &M, W, Z, &LDZ, &NZC, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &DOL, &DOU, NEEDIL, NEEDIU, INDWLC, &PIVMIN, &SCALE, &WL, &WU, VSTART, FINISH, MAXCLS, NDEPTH, PARITY, &ZOFFSET, &INFO);
    return INFO;
}

Int SCALAPACKE_dstein2(const Int N, const double* D, const double* E, const Int M, const double* W, const Int* IBLOCK, const Int* ISPLIT, const double ORFAC, double* Z, const Int LDZ, double* WORK, Int* IWORK, Int* IFAIL) {
    Int INFO = 0;
    dstein2_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &LDZ, WORK, IWORK, IFAIL, &INFO);
    return INFO;
}

Int SCALAPACKE_sstein2(const Int N, const float* D, const float* E, const Int M, const float* W, const Int* IBLOCK, const Int* ISPLIT, const float ORFAC, float* Z, const Int LDZ, float* WORK, Int* IWORK, Int* IFAIL) {
    Int INFO = 0;
    sstein2_(&N, D, E, &M, W, IBLOCK, ISPLIT, &ORFAC, Z, &LDZ, WORK, IWORK, IFAIL, &INFO);
    return INFO;
}

Int SCALAPACKE_dsteqr2(const char* COMPZ, const Int N, double* D, double* E, double* Z, const Int LDZ, const Int NR, double* WORK) {
    Int INFO = 0;
    dsteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_ssteqr2(const char* COMPZ, const Int N, float* D, float* E, float* Z, const Int LDZ, const Int NR, float* WORK) {
    Int INFO = 0;
    ssteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_csteqr2(const char* COMPZ, const Int N, float* D, float* E, float* Z, const Int LDZ, const Int NR, float* WORK) {
    Int INFO = 0;
    csteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_zsteqr2(const char* COMPZ, const Int N, double* D, double* E, double* Z, const Int LDZ, const Int NR, double* WORK) {
    Int INFO = 0;
    zsteqr2_(COMPZ, &N, D, E, Z, &LDZ, &NR, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pctrcon(const char* NORM, const char* UPLO, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* RCOND, float* WORK, const Int LWORK, float* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pctrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrcon(const char* NORM, const char* UPLO, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* RCOND, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdtrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrcon(const char* NORM, const char* UPLO, const char* DIAG, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, float* RCOND, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pstrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pztrcon(const char* NORM, const char* UPLO, const char* DIAG, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, double* RCOND, double* WORK, const Int LWORK, double* RWORK, const Int LRWORK) {
    Int INFO = 0;
    pztrcon_(NORM, UPLO, DIAG, &N, A, &IA, &JA, DESCA, RCOND, WORK, &LWORK, RWORK, &LRWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pctrevc(const char* SIDE, const char* HOWMNY, const Int* SELECT, const Int N, float* T, const Int* DESCT, float* VL, const Int* DESCVL, float* VR, const Int* DESCVR, const Int MM, Int* M, float* WORK, float* RWORK) {
    Int INFO = 0;
    pctrevc_(SIDE, HOWMNY, SELECT, &N, T, DESCT, VL, DESCVL, VR, DESCVR, &MM, M, WORK, RWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pztrevc(const char* SIDE, const char* HOWMNY, const Int* SELECT, const Int N, double* T, const Int* DESCT, double* VL, const Int* DESCVL, double* VR, const Int* DESCVR, const Int MM, Int* M, double* WORK, double* RWORK) {
    Int INFO = 0;
    pztrevc_(SIDE, HOWMNY, SELECT, &N, T, DESCT, VL, DESCVL, VR, DESCVR, &MM, M, WORK, RWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_bdtrexc(const Int N, double* T, const Int LDT, Int* IFST, Int* ILST, Int* NITRAF, Int* ITRAF, Int* NDTRAF, double* DTRAF, double* WORK) {
    Int INFO = 0;
    bdtrexc_(&N, T, &LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_bstrexc(const Int N, float* T, const Int LDT, Int* IFST, Int* ILST, Int* NITRAF, Int* ITRAF, Int* NDTRAF, float* DTRAF, float* WORK) {
    Int INFO = 0;
    bstrexc_(&N, T, &LDT, IFST, ILST, NITRAF, ITRAF, NDTRAF, DTRAF, WORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrord(const char* COMPQ, Int* SELECT, const Int* PARA, const Int N, double* T, const Int IT, const Int JT, const Int* DESCT, double* Q, const Int IQ, const Int JQ, const Int* DESCQ, double* WR, double* WI, Int* M, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdtrord_(COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrord(const char* COMPQ, Int* SELECT, const Int* PARA, const Int N, float* T, const Int IT, const Int JT, const Int* DESCT, float* Q, const Int IQ, const Int JQ, const Int* DESCQ, float* WR, float* WI, Int* M, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pstrord_(COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrsen(const char* JOB, const char* COMPQ, const Int* SELECT, const Int* PARA, const Int N, double* T, const Int IT, const Int JT, const Int* DESCT, double* Q, const Int IQ, const Int JQ, const Int* DESCQ, double* WR, double* WI, Int* M, double* S, double* SEP, double* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pdtrsen_(JOB, COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, S, SEP, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrsen(const char* JOB, const char* COMPQ, const Int* SELECT, const Int* PARA, const Int N, float* T, const Int IT, const Int JT, const Int* DESCT, float* Q, const Int IQ, const Int JQ, const Int* DESCQ, float* WR, float* WI, Int* M, float* S, float* SEP, float* WORK, const Int LWORK, Int* IWORK, const Int LIWORK) {
    Int INFO = 0;
    pstrsen_(JOB, COMPQ, SELECT, PARA, &N, T, &IT, &JT, DESCT, Q, &IQ, &JQ, DESCQ, WR, WI, M, S, SEP, WORK, &LWORK, IWORK, &LIWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pctrti2(const char* UPLO, const char* DIAG, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pctrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrti2(const char* UPLO, const char* DIAG, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdtrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrti2(const char* UPLO, const char* DIAG, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pstrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pztrti2(const char* UPLO, const char* DIAG, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pztrti2_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pctrtri(const char* UPLO, const char* DIAG, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pctrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrtri(const char* UPLO, const char* DIAG, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pdtrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrtri(const char* UPLO, const char* DIAG, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pstrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pztrtri(const char* UPLO, const char* DIAG, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA) {
    Int INFO = 0;
    pztrtri_(UPLO, DIAG, &N, A, &IA, &JA, DESCA, &INFO);
    return INFO;
}

Int SCALAPACKE_pctrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pctrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pdtrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pstrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const Int NRHS, const float* A, const Int IA, const Int JA, const Int* DESCA, float* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pstrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_pztrtrs(const char* UPLO, const char* TRANS, const char* DIAG, const Int N, const Int NRHS, const double* A, const Int IA, const Int JA, const Int* DESCA, double* B, const Int IB, const Int JB, const Int* DESCB) {
    Int INFO = 0;
    pztrtrs_(UPLO, TRANS, DIAG, &N, &NRHS, A, &IA, &JA, DESCA, B, &IB, &JB, DESCB, &INFO);
    return INFO;
}

Int SCALAPACKE_cdttrf(const Int N, float* DL, float* D, float* DU) {
    Int INFO = 0;
    cdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

Int SCALAPACKE_ddttrf(const Int N, double* DL, double* D, double* DU) {
    Int INFO = 0;
    ddttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

Int SCALAPACKE_sdttrf(const Int N, float* DL, float* D, float* DU) {
    Int INFO = 0;
    sdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

Int SCALAPACKE_zdttrf(const Int N, double* DL, double* D, double* DU) {
    Int INFO = 0;
    zdttrf_(&N, DL, D, DU, &INFO);
    return INFO;
}

Int SCALAPACKE_zdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const double* DL, const double* D, const double* DU, double* B, const Int LDB) {
    Int INFO = 0;
    zdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_cdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const float* DL, const float* D, const float* DU, float* B, const Int LDB) {
    Int INFO = 0;
    cdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_ddttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const double* DL, const double* D, const double* DU, double* B, const Int LDB) {
    Int INFO = 0;
    ddttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_sdttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const float* DL, const float* D, const float* DU, float* B, const Int LDB) {
    Int INFO = 0;
    sdttrsv_(UPLO, TRANS, &N, &NRHS, DL, D, DU, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_dpttrsv(const char* TRANS, const Int N, const Int NRHS, const double* D, const double* E, double* B, const Int LDB) {
    Int INFO = 0;
    dpttrsv_(TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_cpttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const float* D, const float* E, float* B, const Int LDB) {
    Int INFO = 0;
    cpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_zpttrsv(const char* UPLO, const char* TRANS, const Int N, const Int NRHS, const double* D, const double* E, double* B, const Int LDB) {
    Int INFO = 0;
    zpttrsv_(UPLO, TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_spttrsv(const char* TRANS, const Int N, const Int NRHS, const float* D, const float* E, float* B, const Int LDB) {
    Int INFO = 0;
    spttrsv_(TRANS, &N, &NRHS, D, E, B, &LDB, &INFO);
    return INFO;
}

Int SCALAPACKE_pctzrzf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pctzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pdtzrzf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pdtzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pstzrzf(const Int M, const Int N, float* A, const Int IA, const Int JA, const Int* DESCA, float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pstzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pztzrzf(const Int M, const Int N, double* A, const Int IA, const Int JA, const Int* DESCA, double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pztzrzf_(&M, &N, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcung2l(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcung2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzung2l(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzung2l_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcung2r(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcung2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzung2r(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzung2r_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcungl2(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcungl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzungl2(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzungl2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunglq(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunglq(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunglq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcungql(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcungql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzungql(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzungql_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcungqr(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcungqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzungqr(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzungqr_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcungr2(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcungr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzungr2(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzungr2_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcungrq(const Int M, const Int N, const Int K, float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcungrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzungrq(const Int M, const Int N, const Int K, double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzungrq_(&M, &N, &K, A, &IA, &JA, DESCA, TAU, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunm2l(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunm2l(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunm2l_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunm2r(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunm2r(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunm2r_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmbr(const char* VECT, const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmbr(const char* VECT, const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmbr_(VECT, SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmhr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int ILO, const Int IHI, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmhr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int ILO, const Int IHI, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmhr_(SIDE, TRANS, &M, &N, &ILO, &IHI, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunml2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunml2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunml2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmlq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmlq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmlq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmql(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmql(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmql_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmqr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmqr(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmqr_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmr2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmr2(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmr2_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmr3(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmr3(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmr3_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmrq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmrq(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmrq_(SIDE, TRANS, &M, &N, &K, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmrz(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmrz(const char* SIDE, const char* TRANS, const Int M, const Int N, const Int K, const Int L, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmrz_(SIDE, TRANS, &M, &N, &K, &L, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pcunmtr(const char* SIDE, const char* UPLO, const char* TRANS, const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* TAU, float* C, const Int IC, const Int JC, const Int* DESCC, float* WORK, const Int LWORK) {
    Int INFO = 0;
    pcunmtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

Int SCALAPACKE_pzunmtr(const char* SIDE, const char* UPLO, const char* TRANS, const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* TAU, double* C, const Int IC, const Int JC, const Int* DESCC, double* WORK, const Int LWORK) {
    Int INFO = 0;
    pzunmtr_(SIDE, UPLO, TRANS, &M, &N, A, &IA, &JA, DESCA, TAU, C, &IC, &JC, DESCC, WORK, &LWORK, &INFO);
    return INFO;
}

void SCALAPACKE_pdzsum1(const Int N, double* ASUM, const double* X, const Int IX, const Int JX, const Int* DESCX, const Int INCX) {
    pdzsum1_(&N, ASUM, X, &IX, &JX, DESCX, &INCX);
}

Int SCALAPACKE_chk1mat(const Int MA, const Int MAPOS0, const Int NA, const Int NAPOS0, const Int IA, const Int JA, const Int* DESCA, const Int DESCAPOS0) {
    Int INFO = 0;
    chk1mat_(&MA, &MAPOS0, &NA, &NAPOS0, &IA, &JA, DESCA, &DESCAPOS0, &INFO);
    return INFO;
}

void SCALAPACKE_clatcpy(const char* UPLO, const Int M, const Int N, const float* A, const Int LDA, float* B, const Int LDB) {
    clatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_cmatadd(const Int M, const Int N, const float* ALPHA, const float* A, const Int LDA, const float* BETA, float* C, const Int LDC) {
    cmatadd_(&M, &N, ALPHA, A, &LDA, BETA, C, &LDC);
}

Int SCALAPACKE_descinit(Int* DESC, const Int M, const Int N, const Int MB, const Int NB, const Int IRSRC, const Int ICSRC, const Int ICTXT, const Int LLD) {
    Int INFO = 0;
    descinit_(DESC, &M, &N, &MB, &NB, &IRSRC, &ICSRC, &ICTXT, &LLD, &INFO);
    return INFO;
}

void SCALAPACKE_descset(Int* DESC, const Int M, const Int N, const Int MB, const Int NB, const Int IRSRC, const Int ICSRC, const Int ICTXT, const Int LLD) {
    descset_(DESC, &M, &N, &MB, &NB, &IRSRC, &ICSRC, &ICTXT, &LLD);
}

void SCALAPACKE_dlatcpy(const char* UPLO, const Int M, const Int N, const double* A, const Int LDA, double* B, const Int LDB) {
    dlatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_dmatadd(const Int M, const Int N, const double ALPHA, const double* A, const Int LDA, const double BETA, double* C, const Int LDC) {
    dmatadd_(&M, &N, &ALPHA, A, &LDA, &BETA, C, &LDC);
}

Int SCALAPACKE_iceil(const Int INUM, const Int IDENOM) {
    return iceil_(&INUM, &IDENOM);
}

void SCALAPACKE_ilacpy(const char* UPLO, const Int M, const Int N, const Int* A, const Int LDA, Int* B, const Int LDB) {
    ilacpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

Int SCALAPACKE_ilcm(const Int M, const Int N) {
    return ilcm_(&M, &N);
}

Int SCALAPACKE_indxg2l(const Int INDXGLOB, const Int NB, const Int IPROC, const Int ISRCPROC, const Int NPROCS) {
    return indxg2l_(&INDXGLOB, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

Int SCALAPACKE_indxg2p(const Int INDXGLOB, const Int NB, const Int IPROC, const Int ISRCPROC, const Int NPROCS) {
    return indxg2p_(&INDXGLOB, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

Int SCALAPACKE_indxl2g(const Int INDXLOC, const Int NB, const Int IPROC, const Int ISRCPROC, const Int NPROCS) {
    return indxl2g_(&INDXLOC, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

void SCALAPACKE_infog1l(const Int GINDX, const Int NB, const Int NPROCS, const Int MYROC, const Int ISRCPROC, Int* LINDX, Int* ROCSRC) {
    infog1l_(&GINDX, &NB, &NPROCS, &MYROC, &ISRCPROC, LINDX, ROCSRC);
}

void SCALAPACKE_infog2l(const Int GRINDX, const Int GCINDX, const Int* DESC, const Int NPROW, const Int NPCOL, const Int MYROW, const Int MYCOL, Int* LRINDX, Int* LCINDX, Int* RSRC, Int* CSRC) {
    infog2l_(&GRINDX, &GCINDX, DESC, &NPROW, &NPCOL, &MYROW, &MYCOL, LRINDX, LCINDX, RSRC, CSRC);
}

Int SCALAPACKE_npreroc(const Int N, const Int NB, const Int IPROC, const Int ISRCPROC, const Int NPROCS) {
    return npreroc_(&N, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

Int SCALAPACKE_numroc(const Int N, const Int NB, const Int IPROC, const Int ISRCPROC, const Int NPROCS) {
    return numroc_(&N, &NB, &IPROC, &ISRCPROC, &NPROCS);
}

void SCALAPACKE_pcchekpad(const Int ICTXT, const char* MESS, const Int M, const Int N, const float* A, const Int LDA, const Int IPRE, const Int IPOST, const float* CHKVAL) {
    pcchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

void SCALAPACKE_pccol2row(const Int ICTXT, const Int M, const Int N, const Int NB, const float* VS, const Int LDVS, float* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, float* WORK) {
    pccol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pcelget(const char* SCOPE, const char* TOP, float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA) {
    pcelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pcelset2(float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA) {
    pcelset2_(ALPHA, A, &IA, &JA, DESCA, BETA);
}

void SCALAPACKE_pcelset(float* A, const Int IA, const Int JA, const Int* DESCA, const float* ALPHA) {
    pcelset_(A, &IA, &JA, DESCA, ALPHA);
}

void SCALAPACKE_pcfillpad(const Int ICTXT, const Int M, const Int N, float* A, const Int LDA, const Int IPRE, const Int IPOST, const float* CHKVAL) {
    pcfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

Int SCALAPACKE_pchk1mat(const Int MA, const Int MAPOS0, const Int NA, const Int NAPOS0, const Int IA, const Int JA, const Int* DESCA, const Int DESCAPOS0, const Int NEXTRA, const Int* EX, const Int* EXPOS) {
    Int INFO = 0;
    pchk1mat_(&MA, &MAPOS0, &NA, &NAPOS0, &IA, &JA, DESCA, &DESCAPOS0, &NEXTRA, EX, EXPOS, &INFO);
    return INFO;
}

void SCALAPACKE_pclaprnt(const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const Int IRPRNT, const Int ICPRNT, const char* CMATNM, const Int NOUT, float* WORK) {
    pclaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pcmatadd(const Int M, const Int N, const float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float* BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    pcmatadd_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pcrow2col(const Int ICTXT, const Int M, const Int N, const Int NB, const float* VS, const Int LDVS, float* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, float* WORK) {
    pcrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pdchekpad(const Int ICTXT, const char* MESS, const Int M, const Int N, const double* A, const Int LDA, const Int IPRE, const Int IPOST, const double CHKVAL) {
    pdchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pdcol2row(const Int ICTXT, const Int M, const Int N, const Int NB, const double* VS, const Int LDVS, double* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, double* WORK) {
    pdcol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pdelget(const char* SCOPE, const char* TOP, double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA) {
    pdelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pdelset2(double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA) {
    pdelset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pdelset(double* A, const Int IA, const Int JA, const Int* DESCA, const double ALPHA) {
    pdelset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pdfillpad(const Int ICTXT, const Int M, const Int N, double* A, const Int LDA, const Int IPRE, const Int IPOST, const double CHKVAL) {
    pdfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pdlaprnt(const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const Int IRPRNT, const Int ICPRNT, const char* CMATNM, const Int NOUT, double* WORK) {
    pdlaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pdmatadd(const Int M, const Int N, const double ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pdmatadd_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pdrow2col(const Int ICTXT, const Int M, const Int N, const Int NB, const double* VS, const Int LDVS, double* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, double* WORK) {
    pdrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pichekpad(const Int ICTXT, const char* MESS, const Int M, const Int N, const Int* A, const Int LDA, const Int IPRE, const Int IPOST, const Int CHKVAL) {
    pichekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_picol2row(const Int ICTXT, const Int M, const Int N, const Int NB, const Int* VS, const Int LDVS, Int* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, Int* WORK) {
    picol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pielget(const char* SCOPE, const char* TOP, Int* ALPHA, const Int* A, const Int IA, const Int JA, const Int* DESCA) {
    pielget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pielset2(Int* ALPHA, const Int* A, const Int IA, const Int JA, const Int* DESCA, const Int BETA) {
    pielset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pielset(Int* A, const Int IA, const Int JA, const Int* DESCA, const Int ALPHA) {
    pielset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_pifillpad(const Int ICTXT, const Int M, const Int N, Int* A, const Int LDA, const Int IPRE, const Int IPOST, const Int CHKVAL) {
    pifillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pilaprnt(const Int M, const Int N, const Int* A, const Int IA, const Int JA, const Int* DESCA, const Int IRPRNT, const Int ICPRNT, const char* CMATNM, const Int NOUT, Int* WORK) {
    pilaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pirow2col(const Int ICTXT, const Int M, const Int N, const Int NB, const Int* VS, const Int LDVS, Int* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, Int* WORK) {
    pirow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pschekpad(const Int ICTXT, const char* MESS, const Int M, const Int N, const float* A, const Int LDA, const Int IPRE, const Int IPOST, const float CHKVAL) {
    pschekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pscol2row(const Int ICTXT, const Int M, const Int N, const Int NB, const float* VS, const Int LDVS, float* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, float* WORK) {
    pscol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pselget(const char* SCOPE, const char* TOP, float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA) {
    pselget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pselset2(float* ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA) {
    pselset2_(ALPHA, A, &IA, &JA, DESCA, &BETA);
}

void SCALAPACKE_pselset(float* A, const Int IA, const Int JA, const Int* DESCA, const float ALPHA) {
    pselset_(A, &IA, &JA, DESCA, &ALPHA);
}

void SCALAPACKE_psfillpad(const Int ICTXT, const Int M, const Int N, float* A, const Int LDA, const Int IPRE, const Int IPOST, const float CHKVAL) {
    psfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, &CHKVAL);
}

void SCALAPACKE_pslaprnt(const Int M, const Int N, const float* A, const Int IA, const Int JA, const Int* DESCA, const Int IRPRNT, const Int ICPRNT, const char* CMATNM, const Int NOUT, float* WORK) {
    pslaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_psmatadd(const Int M, const Int N, const float ALPHA, const float* A, const Int IA, const Int JA, const Int* DESCA, const float BETA, float* C, const Int IC, const Int JC, const Int* DESCC) {
    psmatadd_(&M, &N, &ALPHA, A, &IA, &JA, DESCA, &BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_psrow2col(const Int ICTXT, const Int M, const Int N, const Int NB, const float* VS, const Int LDVS, float* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, float* WORK) {
    psrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pzchekpad(const Int ICTXT, const char* MESS, const Int M, const Int N, const double* A, const Int LDA, const Int IPRE, const Int IPOST, const double* CHKVAL) {
    pzchekpad_(&ICTXT, MESS, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

void SCALAPACKE_pzcol2row(const Int ICTXT, const Int M, const Int N, const Int NB, const double* VS, const Int LDVS, double* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, double* WORK) {
    pzcol2row_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_pzelget(const char* SCOPE, const char* TOP, double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA) {
    pzelget_(SCOPE, TOP, ALPHA, A, &IA, &JA, DESCA);
}

void SCALAPACKE_pzelset2(double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA) {
    pzelset2_(ALPHA, A, &IA, &JA, DESCA, BETA);
}

void SCALAPACKE_pzelset(double* A, const Int IA, const Int JA, const Int* DESCA, const double* ALPHA) {
    pzelset_(A, &IA, &JA, DESCA, ALPHA);
}

void SCALAPACKE_pzfillpad(const Int ICTXT, const Int M, const Int N, double* A, const Int LDA, const Int IPRE, const Int IPOST, const double* CHKVAL) {
    pzfillpad_(&ICTXT, &M, &N, A, &LDA, &IPRE, &IPOST, CHKVAL);
}

void SCALAPACKE_pzlaprnt(const Int M, const Int N, const double* A, const Int IA, const Int JA, const Int* DESCA, const Int IRPRNT, const Int ICPRNT, const char* CMATNM, const Int NOUT, double* WORK) {
    pzlaprnt_(&M, &N, A, &IA, &JA, DESCA, &IRPRNT, &ICPRNT, CMATNM, &NOUT, WORK);
}

void SCALAPACKE_pzmatadd(const Int M, const Int N, const double* ALPHA, const double* A, const Int IA, const Int JA, const Int* DESCA, const double* BETA, double* C, const Int IC, const Int JC, const Int* DESCC) {
    pzmatadd_(&M, &N, ALPHA, A, &IA, &JA, DESCA, BETA, C, &IC, &JC, DESCC);
}

void SCALAPACKE_pzrow2col(const Int ICTXT, const Int M, const Int N, const Int NB, const double* VS, const Int LDVS, double* VD, const Int LDVD, const Int RSRC, const Int CSRC, const Int RDEST, const Int CDEST, double* WORK) {
    pzrow2col_(&ICTXT, &M, &N, &NB, VS, &LDVS, VD, &LDVD, &RSRC, &CSRC, &RDEST, &CDEST, WORK);
}

void SCALAPACKE_sl_init(Int* ICTXT, const Int NPROW, const Int NPCOL) {
    sl_init_(ICTXT, &NPROW, &NPCOL);
}

void SCALAPACKE_slatcpy(const char* UPLO, const Int M, const Int N, const float* A, const Int LDA, float* B, const Int LDB) {
    slatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_slboot() {
    slboot_();
}

void SCALAPACKE_smatadd(const Int M, const Int N, const float ALPHA, const float* A, const Int LDA, const float BETA, float* C, const Int LDC) {
    smatadd_(&M, &N, &ALPHA, A, &LDA, &BETA, C, &LDC);
}

void SCALAPACKE_zlatcpy(const char* UPLO, const Int M, const Int N, const double* A, const Int LDA, double* B, const Int LDB) {
    zlatcpy_(UPLO, &M, &N, A, &LDA, B, &LDB);
}

void SCALAPACKE_zmatadd(const Int M, const Int N, const double* ALPHA, const double* A, const Int LDA, const double* BETA, double* C, const Int LDC) {
    zmatadd_(&M, &N, ALPHA, A, &LDA, BETA, C, &LDC);
}
