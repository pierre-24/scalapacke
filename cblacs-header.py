import argparse
import pathlib
import re
import datetime
import subprocess

from jinja2 import Environment, FileSystemLoader

from typing import List, Tuple, Self


SCALAPACK_REPO_URL = 'https://github.com/Reference-ScaLAPACK/scalapack/'
SELF_NAME = pathlib.Path(__file__).name
SELF_REPO_URL = 'https://github.com/pierre-24/cblacs-header/'

# pattern
PATTERN_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<params>.*)\)')
PATTERN_PARAM = re.compile(r'(?P<type>\w+) (?P<ptr>\*)?(?P<name>\w+)')

# things to define in header
DEFINES = [
    ('Int', 'int'),
    ('F_VOID_FUNC', 'void'),
    ('F_INT_FUNC', 'Int'),
    ('F_DOUBLE_FUNC', 'double')
]


class Declaration:
    def __init__(self, name: str, return_type: str, params: List[Tuple[str, str]]):
        self.name = name
        self.return_type = return_type
        self.params = params

    @classmethod
    def from_str(cls, inp: str) -> Self:
        match_func = PATTERN_FUNC.match(inp)
        if not match_func:
            raise Exception('unable to parse function from `{}`'.format(inp))

        params = match_func['params']
        params_list = []
        if params != 'void':
            for param in params.split(','):
                match_param = PATTERN_PARAM.match(param.strip())
                params_list.append((
                    match_param.group('type') + ('*' if match_param.group('ptr') else ''),
                    match_param.group('name')
                ))

        return cls(match_func.group('name'), match_func.group('rtype'), params_list)

    def __str__(self):
        return '{} {}({})'.format(
            self.return_type,
            self.name,
            ', '.join('{} {}'.format(*p) for p in self.params)
        )

    def __repr__(self):
        return '<{}({}, {}, {})>'.format(
            self.__class__.__name__,
            repr(self.name),
            repr(self.return_type),
            repr(self.params)
        )


def find_decl(path: pathlib.Path, c_call: bool = True) -> Declaration:
    """Find declaration in file"""

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

        if c_call:
            return Declaration.from_str(' '.join(line.strip() for line in lines[c_call_beg:c_call_end]))
        else:
            return Declaration.from_str(' '.join(line.strip() for line in lines[c_call_end + 1:f_call_end]))


def find_decls(root: pathlib.Path, c_call: bool = True) -> List[Declaration]:
    """Find all declarations, which are found in all `*_.c` files of the `BLACS/SRC` folder.
    """

    declarations = []

    for path in root.glob('*_.c'):
        declarations.append(find_decl(path, c_call=c_call))

    return declarations


def get_current_commit(repo: pathlib.Path, limit: int = 8) -> str:
    """Get the current commit"""

    c = subprocess.run(['git', 'rev-parse', 'HEAD'], capture_output=True, cwd=repo)
    return c.stdout.decode('utf-8')[:limit]


def get_dir(inp: str) -> pathlib.Path:
    """Get a directory"""
    path = pathlib.Path(inp)
    if not path.is_dir():
        raise argparse.ArgumentTypeError('{} is not a directory'.format(inp))

    return path


def get_existing_file(inp: str) -> pathlib.Path:
    """Get an existing file"""
    path = pathlib.Path(inp)
    if not path.exists():
        raise argparse.ArgumentTypeError('{} does not exists'.format(inp))

    return path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('repo', type=get_dir, help='Scalapack repository directory')
    parser.add_argument('-t', '--template', type=get_existing_file, help='template', default='cblacs.h.j2')
    parser.add_argument('-o', '--output', type=argparse.FileType('w'), help='output header', default='cblacs.h')
    parser.add_argument('-f', '--fortran', action='store_true', help='use fortran calls')

    args = parser.parse_args()

    # find declarations
    root = args.repo / 'BLACS' / 'SRC'
    if not root.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls = find_decls(root, c_call=not args.fortran)

    # out
    jinja_env = Environment(loader=FileSystemLoader(args.template.parent))
    template = jinja_env.get_template(args.template.name)

    args.output.write(template.render(
        declarations=decls,
        defines=DEFINES,
        self_name=SELF_NAME,
        self_repo_url=SELF_REPO_URL,
        self_commit=get_current_commit(pathlib.Path('.')),
        scalapack_repo_url=SCALAPACK_REPO_URL,
        scalapack_commit=get_current_commit(args.repo),
        current_time=datetime.datetime.now()
    ))


if __name__ == '__main__':
    main()
