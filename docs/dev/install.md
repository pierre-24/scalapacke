# Installing scaLAPACKe

To install scaLAPACKe, you'll need two key components: an MPI library implementation and a scaLAPACK implementation.

Popular MPI options include:

- [OpenMPI](https://www.open-mpi.org/)
- [MPICH](https://www.mpich.org/)
- [Other implementations](https://en.wikipedia.org/wiki/Message_Passing_Interface#Official_implementations) (most are derivatives of the above)

For scaLAPACK, consider the following:

- [Netlib scaLAPACK](https://www.netlib.org/scalapack/) (the reference implementation)
- [oneMKL](https://www.intel.com/content/www/us/en/developer/tools/oneapi/onemkl.html)
- [AOCL](https://www.amd.com/en/developer/aocl/dense.html)
- [Other implementations](https://en.wikipedia.org/wiki/LAPACK#Implementations) (usually based on netlib's version)

Check your package manager or module system, as some of these libraries might already be available on your system.

## Using the files in your project

To use scaLAPACKe in your project, follow these steps:

1. Download [the latest release](https://github.com/pierre-24/scalapacke/releases/download/v0.2.2/scalapacke_v0.2.2.tar.gz).
2. Extract the contents of the `src/` and `include/` directories to a suitable location within your project.

Make sure to:

- Add the extracted files to your build system (e.g., Makefile, CMake).
- Use `mpicc` (or an equivalent MPI compiler wrapper) to compile your project.
- Link against the scaLAPACK library of your choice.
- If using 64-bit integers (ILP64), redefine `lapack_int` with `-Dlapack_int='long long int'` in your compiler options. 
  Learn more about ILP64 [here](https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models).

## With Meson, in your project (recommended)

If you use Meson in your project, this projects provide a ready-to-go archive and a corresponding [wrap files](https://mesonbuild.com/Wrap-dependency-system-manual.html).
Just grab the wrap file corresponding to the version you want to use ...

```bash
# in your super project root folder

# create a `subprojects` folder if it does not exists yet
mkdir -p subprojects

# download wrap file
wget https://github.com/pierre-24/scalapacke/releases/download/v0.2.3/scalapacke_v0.2.3.wrap -O subprojects/scalapacke.wrap
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

You can configure the project by adjusting the options found in the [`meson_options.txt`](https://github.com/pierre-24/scalapacke/blob/dev/meson_options.txt) file. Here's a quick overview:

- **`la_backend`**: Select the linear algebra backend, either by specifying a `pkg-config` file or setting it to `custom`.
- **`mkl_mpi`**: Choose the MPI implementation to use (relevant only for MKL).
- **`la_libraries`**: Manually specify a list of libraries (relevant only if `la_backend=custom`).
- **`ilp64`**: Enable 64-bit integers.

To successfully build the project, you must either provide a value for `la_backend` or set `la_backend=custom` and define `la_libraries`.

### Detailed options' description

The simplest way to configure scaLAPACKe is by setting `la_backend` to a valid [`pkg-config`](https://en.wikipedia.org/wiki/Pkg-config) file, if supported by your OS. To find available options, run:

```bash
pkg-config --list-all | grep scalapack
```

For example, on Ubuntu 24.04, something like `default_options: ['la_backend=scalapack-openmpi']` should be used.
Note that this generally force the choice of an MPI implementation as well.

This generally also selects an MPI implementation.

If you're using oneMKL, Intel provides several `pkg-config` files, as detailed [here](https://www.intel.com/content/www/us/en/developer/articles/technical/intel-math-kernel-library-intel-mkl-and-pkg-config-tool.html). 
However, these files don't include scaLAPACK, so our `meson.build` script requires an additional `mkl_mpi` option, which can be set to `openmpi` or `intelmpi` (equivalent to `mpich`). 
An example configuration might be: `default_options: ['la_backend=mkl-static-lp64-seq', 'mkl_mpi=openmpi']`.

For custom or non-standard libraries (like AOCL) without a `pkg-config` file, set `la_backend=custom` and specify the libraries using `la_libraries=lib1,lib2,...`. 
Meson will attempt to locate them. 
Ensure that your `LIBRARY_PATH` is correctly set by exporting it if necessary: 

```bash
export LIBRARY_PATH=$LIBRARY_PATH:/path/to/your/library/
```

If you want to use 64-bits integers (**if and only if** your scaLAPACK implementation supports it), add `ilp64=true`.

### Tested builds

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
meson setup _build  # /!\ see below

# compile
meson compile -C _build

# (optional) tests
meson configure _build -Dtests=true -Dtests_nprocs=2
meson test -C _build

# install
meson configure _build --prefix=$HOME/.local
meson install -C _build
```

Note that any of the option discussed in the previous section should be added to the `meson setup` line, prefixed by `-D`, *e.g.*, `-Dla_backend=scalapack-openmpi`, `-Dilp64=true`, etc.