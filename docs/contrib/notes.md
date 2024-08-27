# Contributors' notes

A few notes about the project and how to contribute efficiently :)

## Architecture

This project is divided in three parts:

1. The actual set of headers and C wrapper files, located in `include/` and `src/`, respectively.
   They are (partially) backed by a few tests, located in `tests/`.
2. A set of scripts to manage the repository, located in `scripts/`.
3. A set of Python script, which helps to generate the headers and wrappers, located in `scalapacke_files_create`.

The main build tool is [Meson build system](https://github.com/mesonbuild/meson), which allows [to build the library and run tests](../dev/install.md#with-meson-in-your-project-recommended).

### About the C files

For the moment, the files are auto-generated (see below), with no human intervention so far.
They are not very human-friendly, thought.

### About the scripts

+ `scripts/package_it.yml` is used by [the GitHub action](https://github.com/pierre-24/scalapacke/blob/dev/.github/workflows/publish.yml) in charge of creating a Meson wrap file for each release.
   You can manually run it to check if everything is ok.
+ `scripts/release_it.sh` is a script using [`bump2version`](https://pypi.org/project/bump2version/) in order to upgrade the version number everywhere and trigger the creation of a new release.
  It is probably **not** a good idea to run it if you don't have the proper right on the repo.

### About the python scripts

`scaLAPACKe_create` is a script that create headers and wrappers, feeding from the scaLAPACK reference repository.

!!! warning

    Note that the resulting files should not be blindly copy-pasted in `src/` and `include/`.
    While this command should provide similar results, they are not necessary equivalent if some manual optimization/bugfix is required. 
    Be careful!

The workflow is something like:

```bash
# create a temporary directory
mkdir tmp
cd tmp

# clone scalapack in it
git clone https://github.com/Reference-ScaLAPACK/scalapack.git

# create files
scaLAPACKe_create --all ./scalapack
```


## About tests

Between package managers, the module system or ... Other things, it is sometimes difficult to have a proper environment. 
Thus, any help on writing proper tests is welcomed :)