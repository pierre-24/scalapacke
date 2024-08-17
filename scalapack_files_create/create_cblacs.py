"""
Create the `cblacs.h` header file
"""

import argparse
from scalapack_files_create.base import create_cblacs_header, get_dir


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('repo', type=get_dir, help='Scalapack repository directory')
    parser.add_argument('-o', '--output', type=argparse.FileType('w'), help='output header', default='cblacs.h')

    args = parser.parse_args()

    create_cblacs_header(args.repo, args.output)


if __name__ == '__main__':
    main()
