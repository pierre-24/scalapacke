import argparse
import enum
import pathlib
import re
import subprocess

from jinja2 import Environment, FileSystemLoader

from typing import List, Tuple, Self, Dict, Optional

# pattern
PATTERN_FUNC = re.compile(r'(?P<rtype>\w+) (?P<name>\w+)\((?P<params>.*)\)')
PATTERN_PARAM = re.compile(r'(?P<type>\w+) ?(?P<ptr>\*)? ?(?P<name>\w+)')

# jinja templates env
jinja_env = Environment(loader=FileSystemLoader(pathlib.Path(__file__).parent / 'templates'))


class Intent(enum.Enum):
    INPUT = enum.auto()
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
                params_list.append((
                    match_param.group('type') + ('*' if match_param.group('ptr') else ''),
                    match_param.group('name'),
                    Intent.OUTPUT if match_param.group('name') not in intents else intents[match_param.group('name')]
                ))

        return cls(match_func.group('name'), match_func.group('rtype'), params_list)

    def to_extern_decl(self) -> str:
        return 'extern {} {}({});'.format(
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
