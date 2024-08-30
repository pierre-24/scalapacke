#ifndef SCALAPACK_CONFIG_H
#define SCALAPACK_CONFIG_H

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

#endif //SCALAPACK_CONFIG_H
