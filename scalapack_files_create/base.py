import argparse
import pathlib
import re
import subprocess

from jinja2 import Environment, FileSystemLoader

from typing import List


PREFIX = 'SCALAPACKE_'

# pattern
PATTERN_C_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<params>.*)\)')
PATTERN_C_PARAM = re.compile(r'(?P<type>\w+) ?(?P<ptr>\*)? ?(?P<name>\w+)')

# jinja templates env
jinja_env = Environment(loader=FileSystemLoader(pathlib.Path(__file__).parent / 'templates'))


class DeclArgument:
    def __init__(self, name: str, ctype: str, is_input: bool = False, is_output: bool = False, is_array: bool = False):
        self.name = name
        self.ctype = ctype
        self.is_input = is_input
        self.is_output = is_output
        self.is_array = is_array

    def to_c_arg(self) -> str:
        return '{}{} {}'.format('const ' if not self.is_output else '', self.ctype, self.name)

    def aliasable(self):
        return not self.is_output and not self.is_array and self.ctype in ['Int*', 'float*', 'double*']

    def aliase(self):
        ctype = self.ctype

        if not self.is_output and not self.is_array:
            if ctype == 'Int*':
                ctype = 'Int'
            elif ctype == 'float*':
                ctype = 'float'
            elif ctype == 'double*':
                ctype = 'double'

        return DeclArgument(self.name, ctype, self.is_input, self.is_output, self.is_array)


class Declaration:
    def __init__(self, name: str, return_type: str, arguments: List[DeclArgument]):
        self.name = name
        self.return_type = return_type
        self.arguments = arguments

    def to_extern_c_decl(self) -> str:
        return 'extern {} {}({});'.format(
            self.return_type,
            self.name,
            ', '.join(a.to_c_arg() for a in self.arguments)
        )

    def to_aliased_decl(self) -> str:

        return '{} {}{}({});'.format(
            self.return_type,
            PREFIX,
            self.name[:-1],
            ', '.join(a.aliase().to_c_arg() for a in self.arguments)
        )

    def to_aliased_wrapper(self) -> str:
        name = self.name

        return '{} {}{}({}) {{\n    {}{}({});\n}}'.format(
            self.return_type,
            PREFIX,
            name[:-1],
            ', '.join(a.aliase().to_c_arg() for a in self.arguments),
            'return ' if self.return_type != 'void' else '',
            name,
            ', '.join('{}{}'.format('&' if x.aliasable() else '', x.name) for x in self.arguments)
        )

    def __repr__(self):
        return '<{}({}, {}, {})>'.format(
            self.__class__.__name__,
            repr(self.name),
            repr(self.return_type),
            repr(self.arguments)
        )


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
