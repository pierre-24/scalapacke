#ifndef HEADER_SCALAPACKE_PBLAS_H
#define HEADER_SCALAPACKE_PBLAS_H

/* Header by scalapack_files_create.create_cpblas
 * Generated: 2024-08-23 22:12:17.849593
 * Version scalapack_files_create.create_cpblas: https://github.com/pierre-24/scalapack-c-headers/tree/cbcccac4
 * Version scalapack: https://github.com/Reference-ScaLAPACK/scalapack/tree/0128dc24
 */

#include <pblas.h>

/* Declarations
 */
void SCALAPACKE_pcagemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdagemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psagemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzagemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcahemv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzahemv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcamax(Int N, float* AMAX, Int INDX, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdamax(Int N, double* AMAX, Int INDX, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_psamax(Int N, float* AMAX, Int INDX, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pzamax(Int N, double* AMAX, Int INDX, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdasum(Int N, double ASUM, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_psasum(Int N, float ASUM, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdasymv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psasymv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzatrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcaxpy(Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdaxpy(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psaxpy(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzaxpy(Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pscasum(Int N, float ASUM, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pscnrm2(Int N, float NORM2, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pccopy(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdcopy(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_picopy(Int N, Int* X, Int IX, Int JX, Int* DESCX, Int INCX, Int* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pscopy(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzcopy(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pddot(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psdot(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcdotc(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzdotc(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcdotu(Int N, float* DOT, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzdotu(Int N, double* DOT, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzdscal(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pcgeadd(F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdgeadd(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_psgeadd(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzgeadd(F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pcgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_psgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzgemm(F_CHAR_T TRANSA, F_CHAR_T TRANSB, Int M, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pcgemv(F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdgemv(F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psgemv(F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzgemv(F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdger(Int M, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_psger(Int M, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcgerc(Int M, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pzgerc(Int M, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcgeru(Int M, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pzgeru(Int M, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pchemm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzhemm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pchemv(F_CHAR_T UPLO, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzhemv(F_CHAR_T UPLO, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcher2(F_CHAR_T UPLO, Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pzher2(F_CHAR_T UPLO, Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcher2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzher2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pcher(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pzher(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcherk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzherk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdnrm2(Int N, double NORM2, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_psnrm2(Int N, float NORM2, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pcscal(Int N, float* ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdscal(Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_psscal(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pzscal(Int N, double* ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pcsscal(Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pcswap(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdswap(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_psswap(Int N, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pzswap(Int N, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pcsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pssymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzsymm(F_CHAR_T SIDE, F_CHAR_T UPLO, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdsymv(F_CHAR_T UPLO, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double BETA, double* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pssymv(F_CHAR_T UPLO, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float BETA, float* Y, Int IY, Int JY, Int* DESCY, Int INCY);
void SCALAPACKE_pdsyr2(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* Y, Int IY, Int JY, Int* DESCY, Int INCY, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pssyr2(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* Y, Int IY, Int JY, Int* DESCY, Int INCY, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pssyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzsyr2k(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdsyr(F_CHAR_T UPLO, Int N, double ALPHA, double* X, Int IX, Int JX, Int* DESCX, Int INCX, double* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pssyr(F_CHAR_T UPLO, Int N, float ALPHA, float* X, Int IX, Int JX, Int* DESCX, Int INCX, float* A, Int IA, Int JA, Int* DESCA);
void SCALAPACKE_pcsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pssyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pzsyrk(F_CHAR_T UPLO, F_CHAR_T TRANS, Int N, Int K, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pctradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdtradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pstradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pztradd(F_CHAR_T UPLO, F_CHAR_T TRANS, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pdtran(Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pstran(Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pctranc(Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pztranc(Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pctranu(Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* BETA, float* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pztranu(Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* BETA, double* C, Int IC, Int JC, Int* DESCC);
void SCALAPACKE_pctrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pdtrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pstrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pztrmm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pctrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdtrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pstrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pztrmv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pctrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float* ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pdtrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pstrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, float ALPHA, float* A, Int IA, Int JA, Int* DESCA, float* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pztrsm(F_CHAR_T SIDE, F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int M, Int N, double* ALPHA, double* A, Int IA, Int JA, Int* DESCA, double* B, Int IB, Int JB, Int* DESCB);
void SCALAPACKE_pctrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdtrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pstrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, float* A, Int IA, Int JA, Int* DESCA, float* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pztrsv(F_CHAR_T UPLO, F_CHAR_T TRANS, F_CHAR_T DIAG, Int N, double* A, Int IA, Int JA, Int* DESCA, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdzasum(Int N, double ASUM, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
void SCALAPACKE_pdznrm2(Int N, double NORM2, double* X, Int IX, Int JX, Int* DESCX, Int INCX);
#endif // HEADER_SCALAPACKE_BLACS_H