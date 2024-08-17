import datetime
import pathlib
from typing import Tuple, List

from scalapack_files_create import SCALAPACK_REPO_URL, SELF_REPO_URL
from scalapack_files_create.base import Declaration, DEFINES, SELF_NAME, get_current_commit, jinja_env


def find_decl(path: pathlib.Path) -> Tuple[Declaration, Declaration]:
    """Find declarations in file and return a tuple `(decl_c, decl_f)`
    """

    with path.open() as f:
        lines = f.readlines()
        c_call_beg = -1
        c_call_end = -1
        f_call_end = -1

        for i, line in enumerate(lines):
            if '#if (INTFACE == C_CALL)' in line:
                c_call_beg = i + 1
            elif '#else' in line and c_call_beg > 0:
                c_call_end = i
            elif '#endif' in line and c_call_end > 0:
                f_call_end = i
                break

        if c_call_beg < 0:
            raise Exception('Could not find declaration in {}?!?'.format(path))

        return (
            Declaration.from_c_decl(' '.join(line.strip() for line in lines[c_call_beg:c_call_end])),
            Declaration.from_c_decl(' '.join(line.strip() for line in lines[c_call_end + 1:f_call_end]))
        )


def find_decls(root: pathlib.Path) -> Tuple[List[Declaration], List[Declaration]]:
    """Find all declarations, which are found in all `*_.c` files of the `BLACS/SRC` folder.
    """

    declarations_c = []
    declarations_f = []

    for path in root.glob('*_.c'):
        decl_c, decl_f = find_decl(path)
        declarations_c.append(decl_c)
        declarations_f.append(decl_f)

    return declarations_c, declarations_f


def create_cblacs_header(repo: pathlib.Path, output: pathlib.Path):
    # find declarations
    root = repo / 'BLACS' / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_c, decls_f = find_decls(root)
    template = jinja_env.get_template('cblacs.h.j2')

    # out
    with output.open('w') as f:
        f.write(template.render(
            declarations_c=decls_c,
            declarations_f=decls_f,
            defines=DEFINES,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))
