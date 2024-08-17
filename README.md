# ScaLAPACK C headers and wrappers

Provide a set of headers and wrappers in order to easily use [scaLAPACK](https://www.netlib.org/scalapack/) (and its components, [PBLAS](https://netlib.org/scalapack/pblas_qref.html) and [BLACS](https://netlib.org/blacs/)) in C.
The goal is to, as much as possible, automatically create these files from [the sources of the reference ScaLAPACK implementation](https://github.com/Reference-ScaLAPACK/scalapack/).
This should thus reflect the reference APIs.

## Quickstart

If you just want the header, download it from here: 

+ [`cblacs.h`](https://github.com/pierre-24/scalapack-c-headers/releases/download/latest/cblacs.h).
+ `cpblas.h` (not yet available)
+ `cscalapack.h` (not yet available)


You can use one of the two APIs:

| API                                                                                         | Example                                                |
|---------------------------------------------------------------------------------------------|--------------------------------------------------------|
| Fortran API: functions are of the form `xxx_()`, and all arguments are passed via pointers. | [`test_cblacs_fcalls.h`](./tests/test_cblacs_fcalls.c) |
| C API: functions are of the form `Cxxx()`, and inputs are passed by value.                  | [`test_cblacs_ccalls.h`](./tests/test_cblacs_ccalls.c) |

Note: in [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html), there are corresponding headers (`mkl_{blacs,pblas,scalapack}.h`) which use the "Fortran API" (*i.e.*, everything as a pointer) but without `_` at the end of the function name. 

## Install & use

Requirements:

+ Python, and
+ Git.

Installation:

```bash
# clone scalapack
git clone https://github.com/Reference-ScaLAPACK/scalapack.git

# clone this repository
git clone https://github.com/pierre-24/scalapack-c-headers.git
cd scalapack-c-headers

# virtualenv
python -m venv venv
source venv/bin/activate
make install  # or pip install -r requirements.txt
```

Usage:

```bash
python scalapack-c-headers.py ../scalapack
```

After that, a `cblacs.h` header should appear in the directory.
