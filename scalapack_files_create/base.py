import argparse
import enum
import pathlib
import re
import subprocess

from jinja2 import Environment, FileSystemLoader

from typing import List, Tuple, Self, Dict, Optional


PREFIX = 'SCALAPACKE_'

# pattern
PATTERN_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<params>.*)\)')
PATTERN_PARAM = re.compile(r'(?P<type>\w+) ?(?P<ptr>\*)? ?(?P<name>\w+)')

# jinja templates env
jinja_env = Environment(loader=FileSystemLoader(pathlib.Path(__file__).parent / 'templates'))


class Intent(enum.Enum):
    INPUT = enum.auto()
    INPUT_ARRAY = enum.auto()
    INPUT_COMPLEX = enum.auto()
    OUTPUT = enum.auto()


class Declaration:
    def __init__(self, name: str, return_type: str, params: List[Tuple[str, str, Intent]]):
        self.name = name
        self.return_type = return_type
        self.params = params

    @classmethod
    def from_c_decl(cls, inp: str, intents: Optional[Dict[str, Intent]] = None) -> Self:
        if intents is None:
            intents = dict()

        match_func = PATTERN_FUNC.match(inp)
        if not match_func:
            raise Exception('unable to parse function from `{}`'.format(inp))

        params = match_func['params']
        params_list = []
        if params != 'void':
            for param in params.split(','):
                match_param = PATTERN_PARAM.match(param.strip())
                param_name = match_param.group('name')
                params_list.append((
                    match_param.group('type') + ('*' if match_param.group('ptr') else ''),
                    param_name,
                    intents[param_name.upper()]
                ))

        return cls(match_func.group('name'), match_func.group('rtype'), params_list)

    def to_extern_decl(self) -> str:
        return 'extern {} {}({});'.format(
            self.return_type,
            self.name,
            ', '.join('{}{} {}'.format('const ' if p[2] != Intent.OUTPUT else '', p[0], p[1]) for p in self.params)
        )

    @staticmethod
    def _aliase(typ: str, name: str, intent: Intent) -> Tuple[str, str, Intent]:
        """Aliase inputs if authorized"""

        if intent == Intent.INPUT:
            if typ == 'Int*':
                typ = 'Int'
            elif typ == 'float*':
                typ = 'float'
            elif typ == 'double*':
                typ = 'double'

        return typ, name, intent

    def to_aliased_decl(self) -> str:
        return_type = self.return_type
        if return_type == 'F_VOID_FUNC':
            return_type = 'void'

        aliased_params = [self._aliase(*x) for x in self.params]

        return '{} {}{}({});'.format(
            return_type,
            PREFIX,
            self.name[:-1],
            ', '.join('{}{} {}'.format(
                'const ' if x[2] != Intent.OUTPUT else '', x[0], x[1]) for x in aliased_params)
        )

    def to_aliased_wrapper(self) -> str:
        name = self.name
        aliased_params = [self._aliase(*x) for x in self.params]
        return_type = self.return_type
        if return_type == 'F_VOID_FUNC':
            return_type = 'void'

        return '{} {}{}({}) {{\n    {}{}({});\n}}'.format(
            return_type,
            PREFIX,
            name[:-1],
            ', '.join('{}{} {}'.format(
                'const ' if x[2] != Intent.OUTPUT else '', x[0], x[1]) for x in aliased_params),
            'return ' if return_type != 'void' else '',
            name,
            ', '.join('{}{}'.format('&' if x[0] != y[0] else '', x[1]) for x, y in zip(self.params, aliased_params))
        )

    def __repr__(self):
        return '<{}({}, {}, {})>'.format(
            self.__class__.__name__,
            repr(self.name),
            repr(self.return_type),
            repr(self.params)
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
