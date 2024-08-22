"""
Create headers and wrappers for scaLAPACK
"""

import argparse
from scalapack_files_create.base import get_dir
from scalapack_files_create.create_cblacs import create_cblacs_header
from scalapack_files_create.create_cpblas import create_cpblas_header_and_wrapper


OUTPUTS = {
    'blacs': {
        'output_header': 'blacs.h'
    },
    'pblas': {
        'output_header': 'pblas.h',
        'output_wrapper': 'cblacs.c'
    }
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('repo', type=get_dir, help='Scalapack repository directory')
    parser.add_argument('-o', '--output', type=get_dir, help='Output directory', default='.')

    parser.add_argument('--blacs', action='store_true', help='Create BLACS header')
    parser.add_argument('--pblas', action='store_true', help='Create PBLAS header')
    parser.add_argument('--all', action='store_true', help='Create all files')

    args = parser.parse_args()

    if args.blacs or args.all:
        create_cblacs_header(args.repo, **dict((a, args.output / b) for a, b in OUTPUTS['blacs'].items()))

    if args.pblas or args.all:
        create_cpblas_header_and_wrapper(args.repo, **dict((a, args.output / b) for a, b in OUTPUTS['pblas'].items()))


if __name__ == '__main__':
    main()
