# Quickstart into production

!!! info

    This guide assumes you're already familiar with scaLAPACK and are looking to use the C wrappers provided by scaLAPACKe. 
    If you're new to scaLAPACK, please [check out the tutorial](./tutorial.md) instead.

Currently, scaLAPACKe offers both a [low-level](#the-low-level-interface) and a [middle-level](#the-middle-level-interface) interface to [scaLAPACK](https://netlib.org/scalapack/), [PBLAS](https://netlib.org/scalapack/pblas_qref.html), and [BLACS](https://netlib.org/blacs/). 
The main difference between the two is that the middle-level interface uses *pass-by-value* for arguments.

## List of routines available in scaLAPACKe

Providing a complete list of routines here would be redundant. 
By design, scaLAPACKe mirrors the reference implementations of the various components of scaLAPACK, meaning it shares the same set of routines.

For quick reference, you can find the relevant lists here:

- [BLACS Quick Reference](https://netlib.org/blacs/BLACS/QRef.html),
- [PBLAS Quick Reference](https://netlib.org/scalapack/pblas_qref.html),
- [scaLAPACK Quick Reference](https://netlib.org/scalapack/slug/node183.html).

If you notice that a routine is missing, feel free to [open an issue](https://github.com/pierre-24/scalapacke/issues). 😊

## Common Features and Caveats for Both Interfaces

- Variables of Fortran type `INTEGER` and `LOGICAL` are converted to `lapack_int` in scaLAPACKe. 
  This conversion supports the use of 64-bit integers through the [ILP64 programming model](https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models).

- Variables of Fortran type `COMPLEX` and `COMPLEX*16` are converted to `float*` and `double*`, respectively.

- Arrays are passed as pointers, not as pointers to pointers. 
  They should be stored in Fortran style, i.e., [column-major order](https://en.wikipedia.org/wiki/Row-_and_column-major_order): for an `MxN` matrix (where `M` is the number of rows and `N` is the number of columns), `A(i,j)` is accessed as `A[i + j * LDA]`, where `LDA` is the *leading dimension* of `A` (typically the number of rows, `M`).

- Similarly, strings are passed as pointers, not as pointers to pointers. 
  Generally, only the first character of the string is significant.

- When an argument (or return value) refers to a row or column number, **1-based indexing** is used (i.e., `1 <= i <= N` rather than `0 <= i < N`).

!!! warning 

    Currently, scaLAPACKe does not provide a mechanism to switch from row-major to column-major storage, unlike [LAPACKe](https://netlib.org/lapack/lapacke.html#_array_arguments).
    Implementing this would incur significant overhead due to the need to redistribute data across all processes. 
    Therefore, it is recommended to use column-major arrays when working with scaLAPACKe functions.

    Remember that memory locality is crucial for performance, so you should adapt your code when looping over array values:

    ```c
    // A is an MxN array
    for (int j = 0; j < N; j++) { // loop over columns
        for (int i = 0; i < M; i++) // loop over rows
            // use `A[i + j * LDA]` for `A(i, j)`.  
    }
    ```

## The low-level interface

The low-level interface requires three of the [header files](https://github.com/pierre-24/scalapacke/tree/dev/include) provided by scaLAPACKe: `blacs.h`, `pblas.h`, and `scalapack.h`.

This interface follows the customary naming convention for Fortran-C interfaces: the Fortran routine name is converted to lowercase, with an underscore (`_`) appended at the end. 
For example, the Fortran subroutine `PDGEMM` becomes `pdgemm_`.

All arguments from the original Fortran subroutine are retained and must be passed as pointers, rather than by value.

??? Example

    The following code:

    1. Generates two matrices, $A$ and $I$, whith $I_{ij} = \delta_{ij}$.
       $A$ is filled with random numbers.
    2. It computes $C = A\times I$ and then $A = C \times I - A$.
       At the end of this operation, $A_{ij} = 0$.
    3. It prints $\max\{A_{ij}\}$ (which should be zero) and exits.
    
    ````c
    --8<-- "tests/lowlevel_pdgemm.c"
    ````
  
    Notice that both `loc_i` and `loc_j` starts at one.

## The middle-level interface

The middle-level interface requires all the header and C files provided by scaLAPACKe.

The naming convention for this interface is as follows: take the Fortran routine name, convert it to lowercase, and prepend it with `SCALAPACKE_`. 
For example, the Fortran routine `PDGEMM` becomes `SCALAPACKE_pdgemm`.

The `INFO` parameter found in the Fortran subroutine is omitted in scaLAPACKe. 
Instead, the `lapack_int` return value of the function is set to the value that `INFO` would have returned.
All other arguments from the original Fortran subroutine are retained in the C interface.

Arguments are passed by value rather than by pointer when both of the following conditions are met:

1. The argument is input-only.
2. The argument is a scalar type (such as `INTEGER`, `REAL`, `DOUBLE`, or `LOGICAL`).

??? Example

    This is the same program as above, but written using the middle-level interface:
    
    ````c
    --8<-- "tests/midlevel_pdgemm.c"
    ````