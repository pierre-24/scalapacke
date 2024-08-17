install:
	python -m pip install .

install-dev: install
	pip install -e .[dev]

all: install

lint:
	flake8 scalapack_files_create --max-line=120