# Python scripts to manage scaLAPACKe

## Installation

Requirements:

+ Python, and
+ Git.

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

## Usage

Create headers and wrappers C files

```bash
mkdir tmp
cd tmp
scaLAPACKe_create --all ../scalapack
```