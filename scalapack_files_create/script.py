"""
Create headers and wrappers for scaLAPACK
"""

import argparse
from scalapack_files_create.base import get_dir
from scalapack_files_create.create_cblacs import create_cblacs_headers_and_wrapper
from scalapack_files_create.create_cpblas import create_cpblas_headers_and_wrapper
from scalapack_files_create.create_scalapack import create_scalapack_headers_and_wrapper


OUTPUTS = {
    'blacs': {
        'output_header': 'blacs.h',
        'output_ml_header': 'scalapacke_blacs.h',
        'output_ml_wrapper': 'scalapacke_blacs.c'
    },
    'pblas': {
        'output_header': 'pblas.h',
        'output_ml_header': 'scalapacke_pblas.h',
        'output_ml_wrapper': 'scalapacke_pblas.c'
    },
    'scalapack': {
        'output_header': 'scalapack.h',
    }
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('repo', type=get_dir, help='Scalapack repository directory')
    parser.add_argument('-o', '--output', type=get_dir, help='Output directory', default='.')

    parser.add_argument('--blacs', action='store_true', help='Create BLACS header & wrapper')
    parser.add_argument('--pblas', action='store_true', help='Create PBLAS header & wrapper')
    parser.add_argument('--scalapack', action='store_true', help='Create SCALAPACK header & wrapper')
    parser.add_argument('--all', action='store_true', help='Create all files')

    args = parser.parse_args()

    if args.blacs or args.all:
        create_cblacs_headers_and_wrapper(
            args.repo, **dict((a, args.output / b) for a, b in OUTPUTS['blacs'].items())
        )

    if args.pblas or args.all:
        create_cpblas_headers_and_wrapper(
            args.repo, **dict((a, args.output / b) for a, b in OUTPUTS['pblas'].items())
        )

    if args.pblas or args.all:
        create_scalapack_headers_and_wrapper(
            args.repo, **dict((a, args.output / b) for a, b in OUTPUTS['scalapack'].items())
        )


if __name__ == '__main__':
    main()
