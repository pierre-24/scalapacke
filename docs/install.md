# Installation

Any installation of scaLAPACKe requires at least two things: an implementation of the MPI library, and one of scaLAPACK.

Concerning MPI, popular options are:

+ [OpenMPI](https://www.open-mpi.org/),
+ [MPICH](https://www.mpich.org/),
+ or [others](https://en.wikipedia.org/wiki/Message_Passing_Interface#Official_implementations) (but they generally derive from the previous ones).

Concerning scaLAPACK:

+ [netlib scaLAPACK](https://www.netlib.org/scalapack/) (*i.e.*, the reference implementation), 
+ [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html), 
+ [AOCL](https://www.amd.com/en/developer/aocl/dense.html), 
+ or [others](https://en.wikipedia.org/wiki/LAPACK#Implementations) (but they generally all rely on netlib's implementation).

In any case, check your package manager (or your module system), some of these options might already be available.

## Using the files as is, in your project

Just download [the latest files](https://github.com/pierre-24/scalapacke/releases/download/v0.2.2/scalapacke_v0.2.2.tar.gz) and put the content of `src/` and `include/` wherever it fits you and your building system.
Don't forget to:

+ add the files in your build system (Makefile, CMake, or others),
+ use `mpicc` (or equivalent),
+ include the `scalapack` library of your choice in your building system,
+ redefine `Int` with `-DInt='long long int'` if you want to use 64-bit integers (*i.e.*, [ILP64](https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models)).

## With Meson, in your project (recommended)

If you use Meson in your project, this projects provide a ready-to-go archive and a corresponding [wrap files](https://mesonbuild.com/Wrap-dependency-system-manual.html).
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
  scalapacke_proj = subproject('scalapacke', default_options: ['la_backend=scalapack'])
  scalapacke_dep = scalapacke_proj.get_variable('scalapacke_dep')
endif
project_dep += scalapacke_dep
```

**Note:** Don't forget to set `CC=mpicc` (or others) before any `meson` command, otherwise it will not use MPI.

### Configuring the build

You can check out the options of the project in the [`meson_options.txt`](../meson_options.txt).

The most easy way to use scaLAPACKe is to set `la_backend` to a [`pkg-config`](https://en.wikipedia.org/wiki/Pkg-config) file, if your OS supports it (if not, see below).
Check for valid options with:

```bash
pkg-config --list-all | grep scalapack
```

For example, on Ubuntu 24.04, something like `default_options: ['la_backend=scalapack-openmpi']` should be used.
Note that this generally force the choice of an MPI implementation as well.

If you want to use oneMKL, intel developers are nice enough to provide some `pkg-config` files, see [there](https://www.intel.com/content/www/us/en/developer/articles/technical/intel-math-kernel-library-intel-mkl-and-pkg-config-tool.html).
However, those files do not contain scaLAPACK, so our `meson.build` tries to be clever about it, and needs an extra option, `mkl_mpi` which can be either `openmpi` or `intelmpi` (equivalent to MPICH).
For example, a choice could be `default_options: ['la_backend=mkl-static-lp64-seq', 'mkl_mpi=openmpi']`.

If you want to use custom or exotic libraries, you can set `la_backend=custom` and provide a list of libraries with `la_libraries=lib1,lib2,...`.
Meson will try its best to find them.
Note that Meson looks for libraries in `LIBRARY_PATH` (actually [following `gcc`](https://stackoverflow.com/questions/4250624/ld-library-path-vs-library-path) by doing so), so don't forget to `export LIBRARY_PATH=$LIBRARY_PATH:/path/to/your/library/`.

If you want to use 64-bits integers (**if and only if** your scaLAPACK implementation supports it), add `ilp64=true`.

### Tested options

In our [test suite](https://github.com/pierre-24/scalapacke/blob/dev/.github/workflows/test_lib.yml), we cover the following test cases:

| Linear algebra library                                       | MPI flavor           | Can use ILP64?                                                                                     |
|--------------------------------------------------------------|----------------------|----------------------------------------------------------------------------------------------------|
| Netlib scaLAPACK                                             | OpenMPI              | No (ILP64 version not available as a Ubuntu package)                                               |
| MKL scaLAPACK                                                | OpenMPI or Intel MPI | Yes (`la_backend=mkl-static-ilp64-seq`) and no (`la_backend=mkl-static-lp64-seq`)                  |
| AOCL (with `la_backend=custom` and `la_libraires=scalapack`) | OpenMPI              | No (and probably yes, using `$AOCLROOT/set_aocl_interface_symlink.sh ilp64`, but unstable, see #3) |

Feel free to suggest modifications to this table with your discoveries :)

## With meson, in your system

If you want to install the library in your system, then:

```bash
# clone this repository
git clone https://github.com/pierre-24/scalapacke.git
cd scalapacke

# setup (don't forget to set the different options)
export CC=mpicc
meson setup _build -Dla_backend=<SEE_ABOVE>

# compile
meson compile -C _build

# (optional) tests
meson configure _build -Dtests=true -Dtests_nprocs=2
meson test -C _build

# install
meson configure _build --prefix=$HOME/.local
meson install -C _build
```