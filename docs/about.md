# About this project

**TL;DR:** This project, developed by [Pierre Beaujean](https://pierrebeaujean.net/), provide some C headers (that are missing in the [reference scaLAPACK implementation](https://www.netlib.org/scalapack/)) and wrappers (in the spirit of [LAPACKe](https://netlib.org/lapack/lapacke.html)).

## What?

### Motivations

There are multiple issues if one want to use scaLAPACK in C as is:

+ the lack of a proper set of C headers (apart from the ones provided via [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html)), 
+ the lack of a middle- or high-level interface, which exists for [BLAS](https://github.com/OpenMathLib/OpenBLAS) and [LAPACK](https://netlib.org/lapack/lapacke.html),
+ the lack of a proper documentation (the source code remains the only way to have the detailed instructions for each argument).

This project aims at solving the first two problems.
The last one is, in my opinion, endemic to netlib's projects which rely a bit too much on (aging) users' guides and the systematic way they write the functions.

For the moment, a low- and middle-level interface to  [PBLAS](https://netlib.org/scalapack/pblas_qref.html), [BLACS](https://netlib.org/blacs/), and (almost all) scaLAPACK functions are provided. 
Note that this project is still on its infancy, so the API is not stable yet and subject to change.

For more details on how to use scaLAPACKe in practice and its various caveats, see [this document](dev/quickstart.md).
However, to make it easier for newcomers, a gentle introduction to (sca)LAPACK(e) is also provided [here](dev/tutorial.md).

### Alternatives

To the best of my knowledge, there do not exist, *per se*, alternatives to this project which allows to use **sca**LAPACK directly in C, except for the aformentioned set of headers provided by oneMKL (`mkl_{blacs,pblas,scalapack}.h`).
If so, this project would probably not exist.

However, **[SLATE](https://github.com/icl-utk-edu/slate/)**, written in C++, aims at replacing scaLAPACK and should be considered.
There even is an (undocumented?) [C API](https://bitbucket.org/icl/slate-tutorial/src/master/c_api/) (which seems also [auto-generated](https://github.com/icl-utk-edu/slate/blob/master/src/c_api/wrappers.cc), nothing wrong with that).
With the rise of GPUs, other projects with different philosophies also exists.

Finally, there exists different libraries which interface to or expose (not sca)LAPACK functions, including, but not limited to, C (think, *e.g.*, about [the SciPy stack](https://scipy.org/) in Python).
See [wikipedia](https://en.wikipedia.org/wiki/LAPACK).

## How?

By using a python script to generate the files automatically, then manually adjust them if needed.

If you are interested in that, maybe you want to help? If so, I'm happy to [welcome your contributions](contrib/CONTRIBUTING.md)!


## Who?

My name is [Pierre Beaujean](https://pierrebeaujean.net), and I'm a Ph.D. in quantum chemistry from the [University of Namur](https://unamur.be) (Belgium).
I'm the main (and only) developer of this project, used in our lab.
I'd like to use scaLAPACK(e) to overcome the computation and memory limitations of a single computer node.

Note that I don't know any of the people at netlib, MKL, or others.
I'm not even a specialist in scaLAPACK, I just end up writing this project in order to comfortably use it in C.
I'm just a guy trying to help the world ;)