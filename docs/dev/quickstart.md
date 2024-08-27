# Quickstart into production

!!! Info

    This document assume that you know how to use scaLAPACK and just wants to use the C wrappers.
    If not, [check out the tutorial](./tutorial.md).

For the moment, only a [low-](#the-low-level-interface) and a [middle](#the-middle-level-interface)-level interface are available.
The latter major difference between the two is that the latter use *pass-by-value* arguments.

## Common features and caveats of both interfaces

+ Variable with the Fortran type `INTEGER` and `LOGICAL` are converted to `lapack_int` in scaLAPACKe. 
  This mechanism helps to handle 64-bit integers (using the so-called [ILP64 programming model](https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models)).

+ Variable with the Fortran type `COMPLEX` and `COMPLEX*16` are converted to `float*` and `double*`, respectively.

+ Arrays are passed as pointers, not as a pointer to pointers.
  They should be stored in the Fortran style, *i.e.*, [column major](https://en.wikipedia.org/wiki/Row-_and_column-major_order): for a `MxN` matrix (where `M` is its number of rows, and `N` its number of columns) `A(i,j) = i + j * LDA`, where `LDA` is the *leading dimension* of `A`, *i.e.*, the dimension between one column and the next (in most of the case, this corresponds to the number of rows, thus `M`).

+ Following the previous point, strings are passed as pointer, not as pointer to pointers. 
  Note that in general, only the first character of the string matters.

+ When an argument (or return value) refers to a row or column number, **1-based indexing** (*i.e.* `1 <= i <= N` rather than `0 <= i < N`) is to be assumed.

!!! warning

    For the moment, no mechanism is provided to switch from row- to column-major storage, while it is the case in [LAPACKe](https://netlib.org/lapack/lapacke.html#_array_arguments).
    It would, however, results in a large overhead, as data should be redistributed over all processes, so it is advised to use column-major arrays when dealing with scaLAPACK(e) functions.

    Don't forget that memory localilty is important for performances, and thus you should adapt your code if loop over the values of an array:

    ```c
    // A is a MxN array
    for(int j=0; j < N; j++) { // loop over columns
        for(int i=0; i < M; i++) // loop over rows
            // use `A[i + j*LDA]` for `A(i,j)`.  
    }
    ```

## The low-level interface

This interface only requires 3 of the [header files](https://github.com/pierre-24/scalapacke/tree/dev/include) provided by scaLAPACKe: `blacs.h`, `pblas.h`, and `scalapack.h`.

The naming scheme for this interface is customary for the interfaces between Fortran and C: take the Fortran routine name, make it lower case, and add a `_` at the end.
For example, `PDGEMM` becomes `pdgemm_`.

All the arguments that are found in the Fortran subroutine are retained and should be passed as pointers rather than by value.

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

## The middle-level interface

This interface requires all headers and c files provided by scaLAPACKe.

The naming scheme for this interface is the following: take the Fortran routine name, make it lower case, then add the prefix `SCALAPACKE_`.
For example, `PDGEMM` becomes `SCALAPACKE_pdgemm`.

When available in the Fortran subroutine, the scaLAPACKe intrerface sets its `lapack_int` return value to the value of the `INFO` parameter, which is to be omitted.
All other arguments are retained.

Arguments are to be passed by values rather than by pointer when: a) they are input-only, and b) they are scalar (so: `INTEGER`, `REAL`, `DOUBLE`, `LOGICAL`).

??? Example

    This is the same program as above, but written using the middle-level interface:
    
    ````c
    --8<-- "tests/midlevel_pdgemm.c"
    ````