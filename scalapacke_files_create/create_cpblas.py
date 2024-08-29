import pathlib
import re
from typing import List

from scalapacke_files_create import SCALAPACK_REPO_URL
from scalapacke_files_create.base import Declaration, jinja_env
from scalapacke_files_create.create_cblacs import find_c_decl

SELF_NAME = __name__

DEFINES = [
    ('lapack_int', 'int'),
]

PATTERN_ARG_DOC = re.compile(r'\s{0,3}\*\s{1,3}(?P<name>\w*)\s+\((?P<intent>.*)\)(?P<extra>.*)?')


def find_decl(path: pathlib.Path) -> Declaration:
    """Find declarations in file and return a tuple `(decl_c, decl_f)`
    """

    with path.open() as f:
        lines = f.readlines()
        f_call_beg = -1
        f_call_end = -1
        f_args_beg = -1
        f_args_end = -1

        for i, line in enumerate(lines):
            if '#ifdef __STDC__' in line:
                f_call_beg = i + 1
            elif '#else' in line and f_call_beg > 0:
                f_call_end = i
            elif '*  Arguments' in line and f_call_end > 0:
                f_args_beg = i
            elif '----------' in line and f_args_beg > 0:
                f_args_end = i
                break

        if f_call_beg < 0:
            raise Exception('Could not find declaration in {}?!?'.format(path))

        if f_args_end < 0:
            raise Exception('could not find arguments list in {}?!?'.format(path))

        # find declaration
        decl = find_c_decl(' '.join(line.strip() for line in lines[f_call_beg:f_call_end]))

        # find whether argument is input/output/array/complex, etc
        args = dict((a.name.upper(), a) for a in decl.arguments)
        found_arg_doc = []

        for line in lines[f_args_beg:f_args_end]:
            match_arg_doc = PATTERN_ARG_DOC.match(line)
            if match_arg_doc is not None:
                arg_name = match_arg_doc['name'].upper()

                # fix error in PBLAS/SRC/*trsm_.c and PBLAS/SRC/*trmm_.c: `TRANSA` (doc) → `TRANS` (param)
                if path.name[2:] in ['trsm_.c', 'trmm_.c'] and arg_name == 'TRANSA':
                    arg_name = 'TRANS'

                try:
                    arg = args[arg_name]
                    found_arg_doc.append(arg_name)

                    if 'input' in match_arg_doc['intent'].lower():
                        arg.is_input = True
                    if 'output' in match_arg_doc['intent'].lower():
                        arg.is_output = True
                    if match_arg_doc['extra'] is not None:
                        if 'array' in match_arg_doc['extra'].lower():
                            arg.is_array = True
                        if 'complex' in match_arg_doc['extra'].lower():
                            arg.is_array = True

                except KeyError:
                    pass

        if set(found_arg_doc) != set(args.keys()):
            raise Exception('could not find documentation for all args')

        return decl


def find_decls(root: pathlib.Path) -> List[Declaration]:
    """Find all declarations, which are found in all `*_.c` files of the `BLACS/SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*_.c'):
        declarations_f.append(find_decl(path))

    return declarations_f


def create_cpblas_headers_and_wrapper(
        repo: pathlib.Path,
        output_header: pathlib.Path,
        output_ml_header: pathlib.Path,
        output_ml_wrapper: pathlib.Path
):
    # find declarations
    root = repo / 'PBLAS' / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_f = find_decls(root)
    decls_f.sort(key=lambda x: x.name[2:] + x.name[1])

    template_header = jinja_env.get_template('pblas.h.j2')
    template_ml_header = jinja_env.get_template('scalapacke_pblas.h.j2')
    template_ml_wrapper = jinja_env.get_template('scalapacke_pblas.c.j2')

    # out
    with output_header.open('w') as f:
        f.write(template_header.render(
            declarations_f=decls_f,
            defines=DEFINES,
        ))

    with output_ml_header.open('w') as f:
        f.write(template_ml_header.render(
            declarations_f=decls_f,
        ))

    with output_ml_wrapper.open('w') as f:
        f.write(template_ml_wrapper.render(
            declarations_f=decls_f,
        ))
