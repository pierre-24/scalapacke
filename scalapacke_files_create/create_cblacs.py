import pathlib
from typing import List
import re

from scalapacke_files_create import SCALAPACK_REPO_URL
from scalapacke_files_create.base import Declaration, jinja_env, DeclArgument, INT_TYPE

SELF_NAME = __name__

TO_DEFINE = [
    (INT_TYPE, 'int'),
]

TO_REPLACE = {
    'F_VOID_FUNC': 'void',
    'F_INT_FUNC': INT_TYPE,
    'F_DOUBLE_FUNC': 'double',
    'F_CHAR': 'char*',
    'F_CHAR_T': 'char*'
}

TO_EXCLUDE = [
    # exclude some files that defines functions that are not in the standard
    'dwalltime00_.c',
    'free_handle_.c',
    'dcputime00_.c',
    'krecvid_.c',
    'kbrid_.c',
    'kbsid_.c',
    'ksendid_.c'
]

# pattern
PATTERN_C_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<args>.*)\)')
PATTERN_C_ARG = re.compile(r'(?P<type>\w+) ?(?P<ptr>\*)? ?(?P<name>\w+)')
PATTERN_ARG_DOC = re.compile(r'\s{1,3}\*\s{1,3}(?P<name>\w*)\s+\((?P<intent>.*)\)(?P<extra>.*)?')


def _p(inp: str, r: int = 0) -> DeclArgument:
    chunks = inp.split(' ')
    return DeclArgument(chunks[1], chunks[0], is_input=r == 0, is_output=r == 1)


BLACS_DECLS = [
    # blacs*() functions do not come with a documentation, so manually handle them
    Declaration('blacs_abort_', 'void', [_p('{}* ConTxt'.format(INT_TYPE)), _p('{}* ErrNo'.format(INT_TYPE))]),
    Declaration('blacs_barrier_', 'void', [_p('{}* ConTxt'.format(INT_TYPE)), _p('char* scope')]),
    Declaration('blacs_exit_', 'void', [_p('{}* NotDone'.format(INT_TYPE))]),
    Declaration('blacs_freebuff_', 'void', [_p('{}* ConTxt'.format(INT_TYPE)), _p('{}* wait'.format(INT_TYPE))]),
    Declaration('blacs_get_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE), ),
        _p('{}* what'.format(INT_TYPE)),
        _p('{}* val'.format(INT_TYPE), 1)
    ]),
    Declaration('blacs_gridexit_', 'void', [_p('{}* ConTxt'.format(INT_TYPE))]),
    Declaration('blacs_gridinfo_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE)),
        _p('{}* nprow'.format(INT_TYPE), 1),
        _p('{}* npcol'.format(INT_TYPE), 1),
        _p('{}* myrow'.format(INT_TYPE), 1),
        _p('{}* mycol'.format(INT_TYPE), 1)
    ]),
    Declaration('blacs_gridinit_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE), 1),
        _p('char* order'),
        _p('{}* nprow'.format(INT_TYPE),),
        _p('{}* npcol'.format(INT_TYPE)),
    ]),
    Declaration('blacs_gridmap_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE), 1),
        _p('{}* usermap'.format(INT_TYPE), 1),
        _p('{}* ldup'.format(INT_TYPE)),
        _p('{}* nprow0'.format(INT_TYPE)),
        _p('{}* npcol0'.format(INT_TYPE)),
    ]),
    Declaration('blacs_pcoord_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE)),
        _p('{}* nodenum'.format(INT_TYPE)),
        _p('{}* prow'.format(INT_TYPE), 1),
        _p('{}* pcol'.format(INT_TYPE), 1)
    ]),
    Declaration('blacs_pinfo_', 'void', [
        _p('{}* mypnum'.format(INT_TYPE), 1),
        _p('{}* nprocs'.format(INT_TYPE), 1),
    ]),
    Declaration('blacs_pnum_', 'lapack_int', [
        _p('{}* ConTxt'.format(INT_TYPE)),
        _p('{}* prow'.format(INT_TYPE)),
        _p('{}* pcol'.format(INT_TYPE))
    ]),
    Declaration('blacs_set_', 'void', [
        _p('{}* ConTxt'.format(INT_TYPE)),
        _p('{}* what'.format(INT_TYPE)),
        _p('{}* val'.format(INT_TYPE), 1)
    ]),
    Declaration('blacs_setup_', 'void', [
        _p('{}* mypnum'.format(INT_TYPE), 1),
        _p('{}* nprocs'.format(INT_TYPE), 1),
    ]),
    Declaration('blacs2sys_handle_', 'MPI_Comm', [
        _p('{}* BlacsCtxt'.format(INT_TYPE))
    ]),
    Declaration('sys2blacs_handle_', INT_TYPE, [
        _p('MPI_Comm* SysCtxt')
    ]),
]


def find_c_decl(inp: str) -> Declaration:
    """Find a function declaration written in C
    """

    match_func = PATTERN_C_FUNC.match(inp)
    if not match_func:
        raise Exception('unable to parse function from `{}`'.format(inp))

    return_ctype = match_func['rtype']
    if return_ctype in TO_REPLACE:
        return_ctype = TO_REPLACE[return_ctype]

    args = match_func['args']
    args_list = []
    if args != 'void':
        for param in args.split(','):
            match_arg = PATTERN_C_ARG.match(param.strip())
            arg_name = match_arg.group('name')

            arg_ctype = match_arg.group('type')
            if arg_ctype == 'Int':
                arg_ctype = INT_TYPE
            arg_ctype += ('*' if match_arg.group('ptr') else '')
            if arg_ctype in TO_REPLACE:
                arg_ctype = TO_REPLACE[arg_ctype]

            args_list.append(DeclArgument(arg_name, arg_ctype))

    return Declaration(match_func['name'], return_ctype, args_list)


def find_decl(path: pathlib.Path) -> Declaration:
    """Find declaration (fortran format) in file and return it
    """

    with path.open() as f:
        lines = f.readlines()
        c_call_beg = -1
        c_call_end = -1
        f_call_end = -1
        f_args_beg = -1
        f_args_end = -1

        for i, line in enumerate(lines):
            if '#if (INTFACE == C_CALL)' in line:
                c_call_beg = i + 1
            elif '#else' in line and c_call_beg > 0:
                c_call_end = i
            elif '#endif' in line and c_call_end > 0 and f_call_end < 0:
                f_call_end = i
            elif 'Arguments' in line and c_call_end > 0:
                f_args_beg = i
            elif '----------' in line and f_args_beg > 0:
                f_args_end = i
                break
            elif '{' in line[:3]:
                break

        if c_call_beg < 0:
            raise Exception('Could not find declaration in {}?!?'.format(path))

        if f_args_end < 0:
            raise Exception('could not find arguments list in {}?!?'.format(path))

        # find declaration
        decl = find_c_decl(' '.join(line.strip() for line in lines[c_call_end + 1:f_call_end]))

        # find whether argument is input/output/array/complex, etc
        args = dict((a.name.upper(), a) for a in decl.arguments)
        found_arg_doc = []

        for line in lines[f_args_beg:f_args_end]:
            match_arg_doc = PATTERN_ARG_DOC.match(line)
            if match_arg_doc is not None:
                arg_name = match_arg_doc['name'].upper()
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
    """Find all declarations, which are found in all `*_.c` files
    (except the one in `EXCLUDE` or containing `blacs`) of the `BLACS/SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*_.c'):
        if path.name not in TO_EXCLUDE and 'blacs' not in path.name:
            declarations_f.append(find_decl(path))

    return declarations_f


def key_c_decls(d: Declaration):
    return d.name[2:]


def create_cblacs_headers_and_wrapper(
        repo: pathlib.Path,
        output_header: pathlib.Path,
        output_ml_header: pathlib.Path,
        output_ml_wrapper: pathlib.Path
):
    # find declarations
    root = repo / 'BLACS' / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_f = find_decls(root)
    decls_f.sort(key=lambda x: ('a' if 'blacs' in x.name else '') + x.name[1:] + x.name[0])

    template_header = jinja_env.get_template('blacs.h.j2')
    template_ml_header = jinja_env.get_template('scalapacke_blacs.h.j2')
    template_ml_wrapper = jinja_env.get_template('scalapacke_blacs.c.j2')

    # out
    with output_header.open('w') as f:
        f.write(template_header.render(
            declarations_f=decls_f + BLACS_DECLS,
            defines=TO_DEFINE,
        ))

    with output_ml_header.open('w') as f:
        f.write(template_ml_header.render(
            declarations_f=decls_f + BLACS_DECLS,
        ))

    with output_ml_wrapper.open('w') as f:
        f.write(template_ml_wrapper.render(
            declarations_f=decls_f + BLACS_DECLS,
        ))
