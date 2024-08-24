import datetime
import pathlib
import re
from typing import List

from scalapack_files_create import SCALAPACK_REPO_URL, SELF_REPO_URL
from scalapack_files_create.base import Declaration, get_current_commit, jinja_env, Intent

SELF_NAME = __name__

FIND_INTENTS = re.compile(
    r'\* *(?P<name>\w*) *\(((local|global).*)?(?P<intent>((in)|(out))put|workspace)\)(?P<iscomplex>.+COMPLEX)?(?P<isarray>.+array)?',
    flags=re.MULTILINE
)

EXCLUDE = [
    # no documentation
    'pilaver.f',
    'pslaedz.f',
    'pdlaedz.f',
    # documentation do not follow established format
    'slaqr6.f',
    'dlaqr6.f',
    'pslaqr5.f',
    'pdlaqr5.f',
    # not finished
    'pslatrs.f',
    'pdlatrs.f',
    'pclatrs.f',
    'pzlatrs.f',
]


def find_decl(path: pathlib.Path) -> Declaration:
    """Find declaration in file
    """

    print(path)

    with path.open() as f:
        lines = f.readlines()
        f_args_beg = -1
        f_args_end = -1

        for i, line in enumerate(lines):
            if (
                '*  Arguments' in line
                or '*     Arguments' in line
                or '*  Parameters' in line
            ):
                f_args_beg = i
            elif '===================' in line and f_args_beg > 0:
                f_args_end = i
                break
            elif '*     .. Parameters ..' in line and f_args_beg > 0:
                f_args_end = i
                break

        if f_args_end < 0:
            raise Exception('could not find arguments list in {}?!?'.format(path))

        # analyse argument list to find intents
        intents = {}

        for match in FIND_INTENTS.finditer('\n'.join(lines[f_args_beg:f_args_end])):
            intent = match.group('intent').lower()
            is_array = match.group('iscomplex') is not None
            is_complex = match.group('isarray') is not None
            param_name = match.group('name').upper()

            intents[param_name] = Intent.OUTPUT if (
                    intent == 'output'
            ) else (
                Intent.INPUT_ARRAY if is_array else (Intent.INPUT_COMPLEX if is_complex else Intent.INPUT)
            )

        return Declaration.from_f_decl(lines[0:f_args_beg], intents)


def find_decls(root: pathlib.Path) -> List[Declaration]:
    """Find all declarations, which are found in all `*.f` files of the `SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*.f'):
        if path.name not in EXCLUDE:
            declarations_f.append(find_decl(path))

    return declarations_f


def create_scalapack_headers_and_wrapper(
        repo: pathlib.Path,
        output_header: pathlib.Path,
):
    # find declarations
    root = repo / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_f = find_decls(root)
    decls_f.sort(key=lambda x: x.name[2:] + x.name[1])

    template_header = jinja_env.get_template('scalapack.h.j2')

    # out
    with output_header.open('w') as f:
        f.write(template_header.render(
            declarations_f=decls_f,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))
