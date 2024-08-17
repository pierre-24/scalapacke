# `cblacs-header.py`

Create the missing "cblacs.h" header for BLACS.

If you just want the header, download one of the two version below:

| Convention                                                                                 | Header                                                                                                 | Example of usage                                     |
|--------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|------------------------------------------------------|
| C calls (functions are of the form `Cxxx()`, and inputs are passed by value)               | [`cblacs_ccall.h`](https://github.com/pierre-24/cblacs-header/releases/download/latest/cblacs_ccall.h) | [`test_cblacs_ccall.h`](./tests/test_cblacs_ccall.c) |
| Fortran calls (functions are of the form `xxx_()`, and all argument are passed as pointer) | [`cblacs_fcall.h`](https://github.com/pierre-24/cblacs-header/releases/download/latest/cblacs_fcall.h) | [`test_cblacs_fcall.h`](./tests/test_cblacs_fcall.c) |

## Install & use

Requirements:

+ Python, and
+ Git.

Installation:

```bash
# clone scalapack
git clone https://github.com/Reference-ScaLAPACK/scalapack.git

# clone this repository
git clone https://github.com/pierre-24/cblacs-header.git
cd cblacs-header

# virtualenv
python -m venv venv
source venv/bin/activate
make install  # or pip install -r requirements.txt
```

Usage:

```bash
python cblacs-header.py ../scalapack
```

After that, a `cblacs.h` header should appear in the directory.