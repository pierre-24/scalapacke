# ScaLAPACKe

This project provides a set of headers and wrappers designed to facilitate the use of [ScaLAPACK](https://www.netlib.org/scalapack/) and its components, [PBLAS](https://netlib.org/scalapack/pblas_qref.html) and [BLACS](https://netlib.org/blacs/), in C.

Like [LAPACKe](https://netlib.org/lapack/lapacke.html), they are lightweight wrappers that streamline the integration of ScaLAPACK functionalities into C applications, [in a predictable way](dev/quickstart.md).

Below is an example of using the wrapper to perform eigenvalue and eigenvector computations with `PDSYEV`:


```c
--8<-- "tests/pdsyev.c"
```