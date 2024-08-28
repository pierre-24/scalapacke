# Contributors' Notes

Here are some important notes to help you contribute to the project efficiently :)

## Project Architecture

The project is organized into three main parts:

1. **Headers and C Wrappers**: Located in the `include/` and `src/` directories, respectively.
   These files are partially tested, with tests found in the `tests/` directory.

2. **Repository Management Scripts**:
   Located in the `scripts/` directory, these scripts help manage various aspects of the repository.

3. **Python Scripts for Code Generation**:
   Located in the `scalapacke_files_create/` directory, these scripts assist in generating the headers and wrapper files.

The primary build tool used is the [Meson build system](https://github.com/mesonbuild/meson), which facilitates both [building the library and running tests](../dev/install.md#with-meson-in-your-project-recommended).

### C Files

Currently, the C files are auto-generated (see below) with no human intervention. 
As a result, they might not be very human-friendly.

### Repository Management Scripts

- **`scripts/package_it.yml`**: Used by the [GitHub Action](https://github.com/pierre-24/scalapacke/blob/dev/.github/workflows/publish.yml) responsible for creating a Meson wrap file for each release. 
  You can run it manually to verify everything is functioning correctly.

- **`scripts/release_it.sh`**: A script that uses [`bump2version`](https://pypi.org/project/bump2version/) to increment the version number across the project and trigger the creation of a new release. 
  It is probably not advisable to run this script unless you have the appropriate permissions on the repository.

### Python Scripts

- **`scaLAPACKe_create`**: A script that generates the headers and wrappers, based on the scaLAPACK reference repository.

!!! warning
    
    The generated files should not be blindly copied into `src/` and `include/`. 
    Although the script is designed to produce results similar to those already in the repository, there might be manual optimizations or bug fixes in place. 
    Proceed with caution!


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