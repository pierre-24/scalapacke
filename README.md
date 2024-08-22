# ScaLAPACK C headers and wrappers

Provide a set of headers and wrappers in order to easily use [scaLAPACK](https://www.netlib.org/scalapack/) (and its components, [PBLAS](https://netlib.org/scalapack/pblas_qref.html) and [BLACS](https://netlib.org/blacs/)) in C.
The goal is to, as much as possible, automatically create these files from [the sources of the reference ScaLAPACK implementation](https://github.com/Reference-ScaLAPACK/scalapack/).
This should thus reflect the reference APIs.

## Usage

*to be updated.*

## Development

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
make install  # or pip install .
```

Usage:

```bash
scaLAPACK_create --all ../scalapack
```
