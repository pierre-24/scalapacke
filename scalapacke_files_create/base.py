import argparse
import pathlib
import re
import subprocess

from jinja2 import Environment, FileSystemLoader

from typing import List


PREFIX = 'SCALAPACKE_'
INT_TYPE = 'lapack_int'
COMPLEX_TYPE = 'lapack_complex_float'
COMPLEX16_TYPE = 'lapack_complex_double'

# pattern
PATTERN_C_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<params>.*)\)')
PATTERN_C_PARAM = re.compile(r'(?P<type>\w+) ?(?P<ptr>\*)? ?(?P<name>\w+)')

# jinja templates env
jinja_env = Environment(loader=FileSystemLoader(pathlib.Path(__file__).parent / 'templates'))


class DeclArgument:
    def __init__(
        self,
        name: str,
        ctype: str,
        is_input: bool = False,
        is_output: bool = False,
        is_array: bool = False,
        is_complex: bool = False
    ):
        self.name = name
        self.ctype = ctype
        self.is_input = is_input
        self.is_output = is_output
        self.is_array = is_array
        self.is_complex = is_complex

    def to_c_arg(self) -> str:
        return '{}{} {}'.format('const ' if not self.is_output else '', self.ctype, self.name)

    def aliasable(self):
        return not self.is_output and not self.is_array and self.ctype in [
            '{}*'.format(INT_TYPE), 'float*', 'double*', '{}*'.format(COMPLEX_TYPE), '{}*'.format(COMPLEX16_TYPE)
        ]

    def aliase(self):
        ctype = self.ctype

        if not self.is_output and not self.is_array:
            if ctype == '{}*'.format(INT_TYPE):
                ctype = INT_TYPE
            elif ctype == '{}*'.format(COMPLEX_TYPE):
                ctype = COMPLEX_TYPE
            elif ctype == '{}*'.format(COMPLEX16_TYPE):
                ctype = COMPLEX16_TYPE
            elif ctype == 'float*':
                ctype = 'float'
            elif ctype == 'double*':
                ctype = 'double'

        return DeclArgument(self.name, ctype, self.is_input, self.is_output, self.is_array, self.is_complex)

    def to_complex(self):
        if self.is_complex:
            if self.ctype == 'float*':
                self.ctype = '{}*'.format(COMPLEX_TYPE)
            elif self.ctype == 'double*':
                self.ctype = '{}*'.format(COMPLEX16_TYPE)


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
        arguments = self.arguments
        return_type = self.return_type

        if len(self.arguments) > 0 and self.arguments[-1].name == 'INFO':
            if return_type != 'void':
                raise Exception('info, but already a return type: {} :('.format(self.name))

            arguments = self.arguments[:-1]
            return_type = INT_TYPE

        return '{} {}{}({});'.format(
            return_type,
            PREFIX,
            self.name[:-1],
            ', '.join(a.aliase().to_c_arg() for a in arguments)
        )

    def to_aliased_wrapper(self) -> str:
        name = self.name
        has_info = False
        arguments = self.arguments
        return_type = self.return_type

        if len(self.arguments) > 0 and self.arguments[-1].name == 'INFO':
            arguments = self.arguments[:-1]
            has_info = True
            return_type = INT_TYPE

        # decl
        r = '{} {}{}({}) {{\n'.format(
            return_type,
            PREFIX,
            name[:-1],
            ', '.join(a.aliase().to_c_arg() for a in arguments),
        )

        if has_info:
            r += '    {} INFO = 0;\n'.format(INT_TYPE)

        r += '    {}{}({}{});\n'.format(
            'return ' if self.return_type != 'void' else '',
            name,
            ', '.join('{}{}'.format('&' if x.aliasable() else '', x.name) for x in arguments),
            ', &INFO' if has_info else ''
        )

        if has_info:
            r += '    return INFO;\n'

        r += '}'

        return r

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
