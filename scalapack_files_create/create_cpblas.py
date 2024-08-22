import datetime
import pathlib
from typing import List

from scalapack_files_create import SCALAPACK_REPO_URL, SELF_REPO_URL
from scalapack_files_create.base import Declaration, get_current_commit, jinja_env

SELF_NAME = __name__

DEFINES = [
    ('Int', 'int'),
    ('F_CHAR_T', 'char*')
]


def find_decl(path: pathlib.Path) -> Declaration:
    """Find declarations in file and return a tuple `(decl_c, decl_f)`
    """

    with path.open() as f:
        lines = f.readlines()
        f_call_beg = -1
        f_call_end = -1

        for i, line in enumerate(lines):
            if '#ifdef __STDC__' in line:
                f_call_beg = i + 1
            elif '#else' in line and f_call_beg > 0:
                f_call_end = i
                break

        if f_call_beg < 0:
            raise Exception('Could not find declaration in {}?!?'.format(path))

        return Declaration.from_c_decl(' '.join(line.strip() for line in lines[f_call_beg:f_call_end]))


def find_decls(root: pathlib.Path) -> List[Declaration]:
    """Find all declarations, which are found in all `*_.c` files of the `BLACS/SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*_.c'):
        declarations_f.append(find_decl(path))

    return declarations_f


def create_cpblas_header_and_wrapper(repo: pathlib.Path, output_header: pathlib.Path, output_wrapper: pathlib.Path):
    # find declarations
    root = repo / 'PBLAS' / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_f = find_decls(root)
    decls_f.sort(key=lambda x: x.name[2:] + x.name[1])

    template = jinja_env.get_template('pblas.h.j2')

    # out
    with output_header.open('w') as f:
        f.write(template.render(
            declarations_f=decls_f,
            defines=DEFINES,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))
