"""
Create headers and wrappers for scaLAPACK
"""

import argparse
from scalapack_files_create.base import get_dir
from scalapack_files_create.create_cblacs import create_cblacs_header


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('repo', type=get_dir, help='Scalapack repository directory')
    parser.add_argument('-o', '--output', type=get_dir, help='Output directory', default='.')

    parser.add_argument('--blacs', action='store_true', help='Create BLACS header')
    parser.add_argument('--all', action='store_true', help='Create all files')

    args = parser.parse_args()

    if args.blacs or args.all:
        create_cblacs_header(args.repo, args.output / 'cblacs.h')


if __name__ == '__main__':
    main()
