# About this project

**TL;DR:** This project, developed by [Pierre Beaujean](https://pierrebeaujean.net/), provides C headers (missing in the [reference scaLAPACK implementation](https://www.netlib.org/scalapack/)) and C wrappers (similar in spirit to [LAPACKe](https://netlib.org/lapack/lapacke.html)).

## Overview

### Motivation

Using scaLAPACK directly in C presents several challenges:

- **Lack of C Headers:** The reference scaLAPACK implementation does not include a comprehensive set of C headers, apart from those available through [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html).
- **Absence of a Higher-Level Interface:** Unlike [BLAS](https://github.com/OpenMathLib/OpenBLAS) and [LAPACK](https://netlib.org/lapack/lapacke.html), scaLAPACK lacks a middle- or high-level C interface.
- **Limited Documentation:** Detailed usage information is often only accessible by diving into the source code, as official documentation is sparse.

This project addresses the first two issues by providing:

- A set of C headers for scaLAPACK.
- A low- and middle-level interface to [PBLAS](https://netlib.org/scalapack/pblas_qref.html), [BLACS](https://netlib.org/blacs/), and nearly all scaLAPACK functions.

The third issue (documentation) remains an ongoing challenge, reflecting a broader trend in netlib's projects that rely heavily on aging user guides and systematic function design.

**Note:** This project is in its early stages, and the API is not yet stable and may undergo changes.

For more information on how to use scaLAPACKe in practice, including common caveats, refer to the [Quickstart Guide](dev/quickstart.md). A more beginner-friendly introduction to (sca)LAPACK(e) is also available [here](dev/tutorial.md).

### Alternatives

Currently, there are no direct alternatives to this project that allow for using **sca**LAPACK in C, other than the aforementioned headers provided by oneMKL (`mkl_{blacs,pblas,scalapack}.h`). If such an alternative existed, this project likely wouldn't.

However, **[SLATE](https://github.com/icl-utk-edu/slate/)**, written in C++, aims to replace scaLAPACK and is worth considering. There is also an (undocumented?) [C API](https://bitbucket.org/icl/slate-tutorial/src/master/c_api/), which appears to be [auto-generated](https://github.com/icl-utk-edu/slate/blob/master/src/c_api/wrappers.cc). Additionally, with the rise of GPUs, other projects with different approaches have emerged.

Other libraries interface with or expose LAPACK functions (though not scaLAPACK), including those in languages like Python (e.g., [SciPy](https://scipy.org/)). See [Wikipedia](https://en.wikipedia.org/wiki/LAPACK) for more details.

## Implementation

The files are generated using a Python script, with manual adjustments made as needed.

Interested in contributing? Check out our [contribution guidelines](contrib/CONTRIBUTING.md)!

## About me

I'm [Pierre Beaujean](https://pierrebeaujean.net), a Ph.D. in quantum chemistry from the [University of Namur](https://unamur.be) (Belgium), and the main (and only) developer of this project. My goal is to leverage scaLAPACK(e) to overcome the computational and memory limitations of a single computer node.

I have no affiliation with netlib, MKL, or similar projects, and I'm not an expert in scaLAPACK. 
I'm just someone who needed this functionality in C and decided to share my solution with the world.


## About this documentation

English isn't my first language, and to be honest, even in my native tongue, grammar isn't my strong suit. 
So, I enlisted the help of artificial intelligence to rephrase parts of this documentation. 
It's better for everyone this way... Trust me! 👼

