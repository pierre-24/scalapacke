# A gentle introduction to (sca)LAPACK(e)

!!! Info

    Information on scaLAPACK is sparse online, with most resources limited to a few blog posts or StackOverflow questions. The most comprehensive source of information is the [scaLAPACK User's Guide](https://netlib.org/scalapack/slug/index.html).

    Unfortunately, a complete list of scaLAPACK functions is hard to come by. While many functions are mentioned [in this section](https://netlib.org/scalapack/slug/node50.html) of the User's Guide, the most detailed documentation for understanding the usage of each argument is often found in the [source code of the reference implementation](https://github.com/Reference-ScaLAPACK/scalapack), which isn't the most user-friendly approach.

    This document aims to guide you through the somewhat obscure world of scaLAPACK, providing helpful insights along the way.

## The linear algebra ecosystem of LAPACK and friends

Before diving into some code, it is important to understand from where this scaLAPACK thing comes from and why it is so important.

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

### A Set of conventions

BLAS and LAPACK subroutines are distinctive for two main reasons:

1. **Incredibly Short Names:** Typically written in uppercase (a legacy from Fortran), these names often resemble spells you might find in a classic RPG.
2. **Structured Naming Conventions:** Despite their brevity, these names follow a specific set of rules that imbue them with meaningful information about the subroutine's function.


### A few C interfaces

BLAS and (sca)LAPACK are originally written in Fortran for the most part. 


## Sources

+ <https://info.gwdg.de/wiki/doku.php?id=wiki:hpc:scalapack>
+ <https://gitlab.phys.ethz.ch/hpcse_fs15/lecture>
+ <https://andyspiros.wordpress.com/2011/07/08/an-example-of-blacs-with-c/>