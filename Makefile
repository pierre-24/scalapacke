install:
	python -m pip install -r requirements.txt

all: install

lint:
	flake8 cblacs-header.py --max-line=120