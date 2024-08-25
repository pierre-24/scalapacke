# ScaLAPACKe C headers and wrappers

Lastest version: [v0.2.2](https://github.com/pierre-24/scalapacke/releases/tag/v0.2.2), corresponding to [scaLAPACK v2.2.0](https://github.com/Reference-ScaLAPACK/scalapack/releases/tag/v2.2.0).

Provide a set of headers and wrappers in order to easily use [scaLAPACK](https://www.netlib.org/scalapack/) (and its components, [PBLAS](https://netlib.org/scalapack/pblas_qref.html) and [BLACS](https://netlib.org/blacs/)) in C.
Unlike [LAPACKe](https://netlib.org/lapack/lapacke.html), **it is not a Fortran to C translation**, rather a set of lightweight wrappers.

## Installation

### As a standalone thing

Just download [the latest files](https://github.com/pierre-24/scalapacke/releases/download/v0.2.2/scalapacke_v0.2.2.tar.gz) and add the content of `src/` and `include/` where it fits your requirements.
Don't forget to:

+ add the files in your build system (Makefile, CMake, or others),
+ include a `scalapack` package ([netlib](https://www.netlib.org/scalapack/), [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html), [AOCL](https://www.amd.com/en/developer/aocl/dense.html), or others) in your build system,
+ redefine `Int` if you want use 64-bit integers ("ILP64", in the language of intel MKL).

### With Meson

If you use Meson, this projects provide a ready-to-go archive and corresponding [wrap files](https://mesonbuild.com/Wrap-dependency-system-manual.html).
Just grab the wrap file corresponding to the version you want to use ...

```bash
# in your super project root folder

# create a `subprojects` folder if it does not exists yet
mkdir -p subprojects

# download wrap file
wget https://github.com/pierre-24/scalapacke/releases/download/v0.2.2/scalapacke_v0.2.2.wrap -O subprojects/scalapacke.wrap
```

... and add something like this in your `meson.build`:

```Meson
scalapacke_dep = cc.find_library('scalapacke', required: false)
if not scalapacke_dep.found()
  scalapacke_proj = subproject('scalapacke', default_options: [])
  scalapacke_dep = scalapacke_proj.get_variable('scalapacke_dep')
endif
project_dep += scalapacke_dep
```

You can check out the options in [`meson_options.txt`](./meson_options.txt).

Don't forget to set `CC=mpicc` before any `meson` command, otherwise it will not recognize the use of MPI.

## Usage

*to be added later.*