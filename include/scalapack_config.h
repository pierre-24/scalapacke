#ifndef SCALAPACK_CONFIG_H
#define SCALAPACK_CONFIG_H

/* Adapted from <scalapacke.h>
  ----------------------------------------------------------------------------
  Copyright (c) 2010-2014, Intel Corp.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of Intel Corporation nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
  THE POSSIBILITY OF SUCH DAMAGE.
  ----------------------------------------------------------------------------
 */

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <inttypes.h>

/* defines
 */
#ifndef lapack_int
#if defined(LAPACK_ILP64)
#define lapack_int int64_t
#else
#define lapack_int int32_t
#endif
#endif // lapack_int

#ifndef LAPACK_IFMT
#if defined(LAPACK_ILP64)
#define LAPACK_IFMT       PRId64
#else
#define LAPACK_IFMT       PRId32
#endif
#endif // LAPACK_IFMT


#if defined(LAPACK_COMPLEX_STRUCTURE)

typedef struct { float real, imag; } _lapack_complex_float;
typedef struct { double real, imag; } _lapack_complex_double;
#define lapack_complex_float  _lapack_complex_float
#define lapack_complex_double _lapack_complex_double
#define lapack_complex_float_real(z)  ((z).real)
#define lapack_complex_float_imag(z)  ((z).imag)
#define lapack_complex_double_real(z)  ((z).real)
#define lapack_complex_double_imag(z)  ((z).imag)

static inline lapack_complex_float lapack_make_complex_float(float re, float im) {
    lapack_complex_float z;
    z.real = re;
    z.imag = im;
    return z;
}

static inline lapack_complex_double lapack_make_complex_double(double re, double im) {
    lapack_complex_double z;
    z.real = re;
    z.imag = im;
    return z;
}

#else

#include <complex.h>
#define lapack_complex_float    float _Complex
#define lapack_complex_double   double _Complex
#define lapack_complex_float_real(z)       (creal(z))
#define lapack_complex_float_imag(z)       (cimag(z))
#define lapack_complex_double_real(z)       (creal(z))
#define lapack_complex_double_imag(z)       (cimag(z))

static inline lapack_complex_float lapack_make_complex_float(float re, float im) {
    lapack_complex_float z = re + im * I;
    return z;
}

static inline lapack_complex_double lapack_make_complex_double(double re, double im) {
    lapack_complex_double z = re + im * I;
    return z;
}

#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //SCALAPACK_CONFIG_H
