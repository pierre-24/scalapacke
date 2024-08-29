# Install and contribute

## Install (for contributors)

If you only want to use scaLAPACKe in your project, you should rather check [this page](../dev/install.md).

You should preliminarily check that you have:

1. A working MPI library and compiler (generally referred to as `mpicc`),
2. The [Meson build system](https://github.com/mesonbuild/meson), with a backend (generally [ninja](https://github.com/ninja-build/ninja)). This is probably available in you package manager.
3. A linear algebra backend which provides scaLAPACK (netlib, MKL, AOCL, etc).

The first step is to fork the repository and clone your fork:

```bash
git clone https://github.com/YOUR_USERNAME/scalapacke.git
cd scalapacke
```

Few tools that are used to manage this project are written in or use Python.
It is therefore a good idea to install them:

```bash
# virtualenv
python -m venv venv
source venv/bin/activate
make install-dev  # or pip install -e .[dev]
```

Note that all other commands in this documentation assume that you have activated the *virtualenv* :)

## Contribute

Contributions, either with [issues](https://github.com/pierre-24/scalapacke/issues) or [pull requests](https://github.com/pierre-24/scalapacke/pulls) are welcomed.

Some tips:

+ Before contributing, check the [contributors' notes](notes.md).

+ A good place to start is the [list of issues](https://github.com/pierre-24/scalapacke/issues).
  In fact, it is easier if you start by filling an issue, and if you want to work on it, says so there, so that everyone knows that the issue is handled.

+ Don't forget to work on a separate branch.
  Since this project follow the [git flow](http://nvie.com/posts/a-successful-git-branching-model/), you should base your branch on `dev`, not work in it directly:

    ```bash
    git checkout -b new_branch origin/dev
    ```

+ Don't forget to regularly run the linting (for python) and tests (for the library):

    ```bash
    make lint
    meson test -C _build/
    ```

    Indeed, the code follows the [PEP-8 style recommendations](http://legacy.python.org/dev/peps/pep-0008/), checked by [`flake8`](https://flake8.pycqa.org/en/latest/), for the python part.
    Having an extensive test suite is also a good idea to prevent regressions.

+ If you want to see and edit the doc, you can run the `mkdocs` webserver:

    ```bash
    mkdocs serve
    ```

+ Pull requests should be unitary, and include unit test(s) and documentation if needed.
  The test suite and lint must succeed for the merge request to be accepted.

