import datetime
import pathlib
from typing import Tuple, List
import re

from scalapack_files_create import SCALAPACK_REPO_URL, SELF_REPO_URL
from scalapack_files_create.base import Declaration, get_current_commit, jinja_env, Intent

SELF_NAME = __name__

DEFINES = [
    ('Int', 'int'),
    ('F_VOID_FUNC', 'void'),
    ('F_INT_FUNC', 'Int'),
    ('F_DOUBLE_FUNC', 'double'),
    ('F_CHAR', 'char*')
]

EXCLUDE = [
    # exclude some files that defines function not in the standard
    'dwalltime00_.c',
    'free_handle_.c',
    'dcputime00_.c',
    'krecvid_.c',
    'kbrid_.c',
    'kbsid_.c',
    'ksendid_.c'
]


def _p(inp: str, r: int = 0) -> Tuple[str, str, Intent]:
    chunks = inp.split(' ')
    return chunks[0], chunks[1], Intent.INPUT if r == 0 else Intent.OUTPUT


BLACS_DECLS = [
    # blacs*() functions do not come with a documentation, so manually handle them
    Declaration('blacs_abort_', 'F_VOID_FUNC', [_p('Int* ConTxt'), _p('Int* ErrNo')]),
    Declaration('blacs_barrier_', 'F_VOID_FUNC', [_p('Int* ConTxt'), _p('F_CHAR scope')]),
    Declaration('blacs_exit_', 'F_VOID_FUNC', [_p('Int* NotDone')]),
    Declaration('blacs_freebuff_', 'F_VOID_FUNC', [_p('Int* ConTxt'), _p('Int* wait')]),
    Declaration('blacs_get_', 'F_VOID_FUNC', [
        _p('Int* ConTxt', 1),
        _p('Int* what', 1),
        _p('Int* val', 1)
    ]),
    Declaration('blacs_gridexit_', 'F_VOID_FUNC', [_p('Int* ConTxt')]),
    Declaration('blacs_gridinfo_', 'F_VOID_FUNC', [
        _p('Int* ConTxt'),
        _p('Int* nprow', 1),
        _p('Int* npcol', 1),
        _p('Int* myrow', 1),
        _p('Int* mycol', 1)
    ]),
    Declaration('blacs_gridinit_', 'F_VOID_FUNC', [
        _p('Int* ConTxt', 1),
        _p('F_CHAR order'),
        _p('Int* nprow',),
        _p('Int* npcol'),
    ]),
    Declaration('blacs_gridmap_', 'F_VOID_FUNC', [
        _p('Int* ConTxt', 1),
        _p('Int* usermap', 1),
        _p('Int* ldup'),
        _p('Int* nprow0'),
        _p('Int* npcol0'),
    ]),
    Declaration('blacs_pcoord_', 'F_VOID_FUNC', [
        _p('Int* ConTxt'),
        _p('Int* nodenum'),
        _p('Int* prow', 1),
        _p('Int* pcol', 1)
    ]),
    Declaration('blacs_pinfo_', 'F_VOID_FUNC', [
        _p('Int* mypnum', 1),
        _p('Int* nprocs', 1),
    ]),
    Declaration('blacs_pnum_', 'F_VOID_FUNC', [
        _p('Int* ConTxt'),
        _p('Int* prow'),
        _p('Int* pcol')
    ]),
    Declaration('blacs_set_', 'F_VOID_FUNC', [
        _p('Int* ConTxt'),
        _p('Int* what'),
        _p('Int* val', 1)
    ]),
    Declaration('blacs_setup_', 'F_VOID_FUNC', [
        _p('Int* mypnum', 1),
        _p('Int* nprocs', 1),
    ]),
    Declaration('blacs2sys_handle_', 'MPI_Comm', [
        _p('Int* BlacsCtxt')
    ]),
    Declaration('sys2blacs_handle_', 'Int', [
        _p('MPI_Comm* SysCtxt')
    ]),
]


FIND_INTENTS = re.compile(
    r'\* *(?P<name>\w*) *\((?P<intent>\w*put)\)(?P<isarray>.+array)?', flags=re.MULTILINE)


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

        # analyse argument list to find intents
        intents = {}

        for match in FIND_INTENTS.finditer('\n'.join(lines[f_args_beg:f_args_end])):
            intent = match.group('intent').lower()
            is_array = match.group('isarray') is not None
            intents[match.group('name').upper()] = Intent.OUTPUT if intent == 'output' else (
                Intent.INPUT_ARRAY if is_array else Intent.INPUT
            )

        return Declaration.from_c_decl(' '.join(line.strip() for line in lines[c_call_end + 1:f_call_end]), intents)


def find_decls(root: pathlib.Path) -> List[Declaration]:
    """Find all declarations, which are found in all `*_.c` files
    (except the one in `EXCLUDE` or containing `blacs`) of the `BLACS/SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*_.c'):
        if path.name not in EXCLUDE and 'blacs' not in path.name:
            declarations_f.append(find_decl(path))

    return declarations_f


def key_c_decls(d: Declaration):
    return d.name[2:]


def create_cblacs_header(
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
            defines=DEFINES,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))

    with output_ml_header.open('w') as f:
        f.write(template_ml_header.render(
            declarations_f=decls_f + BLACS_DECLS,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))

    with output_ml_wrapper.open('w') as f:
        f.write(template_ml_wrapper.render(
            declarations_f=decls_f + BLACS_DECLS,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))
