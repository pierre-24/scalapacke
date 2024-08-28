# A gentle introduction to (sca)LAPACK(e)

!!! Info

    Information on scaLAPACK is sparse online, with most resources limited to a few blog posts or StackOverflow questions. The most comprehensive source of information is the [scaLAPACK User's Guide](https://netlib.org/scalapack/slug/index.html).

    The most detailed documentation for understanding the usage of each argument is often found in the [source code of the reference implementation](https://github.com/Reference-ScaLAPACK/scalapack), which isn't the most user-friendly approach.

    This document aims to guide you through the somewhat obscure world of scaLAPACK, providing helpful insights along the way.

## The linear algebra ecosystem of LAPACK and friends

Before diving into some code, it is important to understand from where this scaLAPACK thing comes from, why it is so important, and how to use it in the first place.

### A "historical" perspective

Basic linear algebra operations, such as matrix and vector manipulations, form the backbone of many scientific applications. 
However, when it comes to more complex tasks like finding eigenvalues, solving systems of equations, or matrix decompositions, the challenge increases significantly. 
Fortunately, these complex calculations often rely on a set of common low-level operations, known as *kernels*, such as matrix multiplication.

**[BLAS](https://en.wikipedia.org/wiki/Basic_Linear_Algebra_Subprograms)** (Basic Linear Algebra Subprograms) is a foundational library that provides these kernels for performing operations on and between vectors and matrices. 
BLAS is categorized into three "levels," which reflect its historical development:

1. **Level 1:** Vector operations (e.g., dot product, norm, addition).
2. **Level 2:** Matrix-vector operations (including matrix-vector multiplication).
3. **Level 3:** Matrix-matrix operations.

Indeed, the distinction between these levels is mainly historical: Level 1 was developed first, followed by Level 2, and so on.
It has no importance in practice.

**[LAPACK](https://en.wikipedia.org/wiki/LAPACK)** (Linear Algebra PACKage) builds on top of BLAS to perform the more complex operations mentioned earlier, like solving linear systems and eigenvalue problems.

The historical, or "reference," implementations of BLAS and LAPACK are hosted in the [netlib repository](https://www.netlib.org/), often referred to as *netlib BLAS & LAPACK* or simply *the* BLAS and LAPACK.

Due to their widespread use, the APIs (i.e., the definitions of routines and their behavior) of both BLAS and LAPACK have become *de facto* standards. 
While various implementations exist, they all adhere to the same API and behavior, allowing them to be (in theory) interchanged seamlessly. 
Different implementations focus on optimizing performance or leveraging modern accelerators like GPUs. 
BLAS, being the performance-critical component of LAPACK, has more implementations, including [OpenBLAS](https://www.openblas.net/), [ATLAS](https://math-atlas.sourceforge.net/), [BLIS](https://github.com/flame/blis), and [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html). 
Notably, oneMKL also includes an implementation of (sca)LAPACK.

As computing and supercomputing infrastructure evolved, the development of [distributed memory](https://en.wikipedia.org/wiki/Distributed_memory) systems became crucial. 
In these systems, each processor (or subset of processors) has access to local, typically private, memory. 
Since computations can only be performed on local data, communication between processors is necessary, leading to the development of the [Message Passing Interface](https://en.wikipedia.org/wiki/Message_Passing_Interface) (MPI). 
MPI is another standard that defines a common API for communication via messages. 
There are various MPI implementations, including [OpenMPI](https://www.open-mpi.org/) and [MPICH](https://www.mpich.org/).

Finally, **[scaLAPACK](https://en.wikipedia.org/wiki/ScaLAPACK)** is an implementation of a subset of LAPACK routines tailored for distributed memory systems. 
It is built on top of [**PBLAS**](https://en.wikipedia.org/wiki/PBLAS), which provides distributed-memory versions of BLAS routines. 
Both scaLAPACK and PBLAS are based on MPI but use an abstraction layer called **BLACS**. 
Although BLACS was designed to support other message-passing libraries like [PVM](https://en.wikipedia.org/wiki/Parallel_Virtual_Machine), MPI is the only choice today.

The resulting hierarchy of these building blocks is illustrated in the following diagram:

![](../assets/diag_scalapack.png)

There do not exist a lot of implementation of scaLAPACK, which are generally the [*reference* implementation from netlib](https://www.netlib.org/scalapack/), but slightly tuned for performances.
One can mention [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html) and [AOCL](https://www.amd.com/en/developer/aocl/dense.html) (which also ships a BLAS and LAPACK implementation).

### Naming conventions in BLAS/LAPACK

BLAS and LAPACK subroutines are distinctive for two key reasons:

1. **Incredibly Short Names:** Typically written in uppercase (a legacy from Fortran), these names often resemble spells from a classic RPG. 
   In reality, they perform complex operations that can seem magical to non-programmers.

2. **Structured Naming Conventions:** Despite their brevity, these names follow a specific set of rules that provide meaningful information about the subroutine's function.

In BLAS and LAPACK, the naming convention is `<type><mattype><op>`, where:

- **`<type>`** refers to the data type the routine operates on:
    - `s`: Single precision real (`float`)
    - `d`: Double precision real (`double`)
    - `c`: Single precision complex (`float[2]`)
    - `z`: Double precision complex (`double[2]`)

- **`<mattype>`** specifies the type and storage format of the matrix (relevant only for matrix-related routines). For example:
    - `ge`: General matrix
    - `sy`: Symmetric matrix
    - `he`: Hermitian matrix
    - `tr`: Triangular matrix
    - Other formats like [band](https://netlib.org/lapack/lug/node124.html) (`gb`, `sb`, etc.) and [packed](https://netlib.org/lapack/lug/node123.html) storage (`sp`, `tp`, etc.) are also used for optimized routines.

     Note: Not all matrix types are available for every operation.

- **`<op>`** indicates the operation the routine performs. For example:
    - `mv`: Matrix-vector multiplication
    - `mm`: Matrix-matrix multiplication
    - `ev`: Eigenvalue computation
    - `svd`: Singular value decomposition

    Typically, BLAS handles basic matrix and vector operations, while LAPACK offers routines for more complex tasks like solving linear systems, eigenvalue problems, and singular value decomposition.

For reference, see [this document](https://netlib.org/lapack/lug/node145.html) for a list of BLAS routines. 
A list of LAPACK functions is also availble [here](https://www.maths.tcd.ie/~domijank/lapack.pdf).
Finally, an extensive list can be found [here](https://icl.utk.edu/~mgates3/docs/lapack.html), also providing information about the implementation in other libraries as well.

Several unspoken rules apply to the arguments in BLAS and LAPACK routines.

In general,

- `A`, `B`, `C`, etc., typically refer to matrices, while `W`, `X`, etc., refer to vectors.
- `ALPHA`, `BETA`, etc., represent scalar values.
- `M`, `N`, and `K` are used to denote the dimensions of vectors or matrices.
- `LDA`, `LDB`, etc., refer to the leading dimensions (the length of the first dimension) of matrices `A`, `B`, etc., which generally correspond to the number of rows.
- Common arguments like `TRANS`, `UPLO`, `DIAG`, and `SIDE` are used consistently across routines to indicate matrix properties (e.g., whether to transpose, how the matrix is stored, etc.).

In LAPACK,

- In order to avoid allocating memory for the output, it is not uncommon that the memory space of an input array which shares the dimension of the output is actually also the output.
- `WORK` is an auxiliary workspace array (single or double precision) that the user must allocate, with its size specified by `LWORK`. Similarly, `IWORK` and `LIWORK` refer to an integer workspace and its size.
  The required size of `LWORK` and `LIWORK` varies by routine and input; larger values generally lead to better performance. Setting `LWORK` to `-1` will return the optimal workspace size in `WORK[0]`, without performing the routine’s main computation.
- An `INFO < 0` return value indicates an error with the `i`-th parameter, while `INFO > 0` signals a failure in the algorithm.

These conventions make it easier to understand and use the routines.

### What about scaLAPACK?

The primary routines in PBLAS and scaLAPACK are prefixed with "P", followed by the name of their non-distributed counterpart. 
While these distributed routines require additional arguments to describe the layout of vectors and matrices (as explained below), they largely retain the logic and structure of their non-distributed versions.

For example, the [`(P)DGESV` routine](https://netlib.org/lapack/explore-html-3.6.1/d7/d3b/group__double_g_esolve_ga5ee879032a8365897c3ba91e3dc8d512.html) solve the system of linear equation $A\,X = B$ where $A$ is a `N`-by-`N` matrix and $B$ and $X$ are `N`-by-`NRHS` matrices:

![](../assets/lapack_vs_scalapack.svg)

In the diagram, the common parts are highlighted in green, showing an almost 1:1 correspondence between the non-distributed and distributed versions.

!!! warning

    Two important caveats to keep in mind:

    1. **Subset of LAPACK:** Since scaLAPACK is only a subset of LAPACK, some routines may be unavailable.
       Additionally, in terms of matrix storage, only dense, narrow band, and tridiagonal band matrices are supported.

    2. **Global vs. Local Arguments:** to use scaLAPACK, one needs to make a distinction between global and local arguments (see below), a difference that is not reflected in the naming of the arguments.
       This is the case in the example above with `NHRS`, which in its distributed version is the number of column of the **sub**matrix `B` (see the [source code](https://netlib.org/scalapack/explore-html/df/df8/pdgesv_8f_source.html)).

The list of available routine is given:

+ [here](https://netlib.org/scalapack/pblas_qref.html) for PBLAS, and
+ [here](https://netlib.org/scalapack/slug/node183.html) for scaLAPACK.

### C interfaces?

BLAS and (sca)LAPACK were originally written primarily in Fortran. To use them in C, several interfaces are available:

+ **[CBLAS](https://www.intel.com/content/www/us/en/docs/onemkl/developer-guide-windows/2023-0/call-blas-funcs-return-complex-values-in-c-code.html):** A C interface provided by most BLAS implementations, which has become a *de facto* standard.
+ **[LAPACKe](https://netlib.org/lapack/lapacke.html):** A C interface offered by the few implementations of LAPACK.
+ **scaLAPACKe:** This project, which aims to provide a similar C interface for scaLAPACK, along with its underlying layers, PBLAS and BLACS.

These interfaces share a common set of conventions:

1. The function name incorporates that of the original Fortran routine (generally lowercase).
2. The order of arguments remains unchanged, though some may be added or removed in a predictable manner, making it easy to translate a Fortran call to a C call without needing extensive documentation.
3. Arguments that are input-only and scalar are passed by value rather than by pointer, unlike in Fortran. This is predictable, and compilers typically alert you if you mistakenly pass a pointer instead of a value.
4. Unless specified, the array should store data using [column-major storage](https://en.wikipedia.org/wiki/Row-_and_column-major_order).

!!! info

    scaLAPACKe follows those rules.
    See [this document for the exact suite of transformations](quickstart.md), but in short, `PDGESV` becomes `SCALAPACKE_pdgesv` and lacks the `INFO` parameter, which becomes its return value.


## Now, the scaLAPACK(e) specifics

In the previous sections, we have seen that there exists a logic in both BLAS and LAPACK that extends to scaLAPACK(e).

## Sources

+ <https://info.gwdg.de/wiki/doku.php?id=wiki:hpc:scalapack>
+ <https://gitlab.phys.ethz.ch/hpcse_fs15/lecture>
+ <https://andyspiros.wordpress.com/2011/07/08/an-example-of-blacs-with-c/>