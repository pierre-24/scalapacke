"""
A quick and dirty fortran parser in order to correctly extract a function definition
(with a C type for each parameter).
"""

import enum

from typing import List, Iterable, Callable, Optional, Tuple


class TokenType(enum.Enum):
    LPAR = '('
    RPAR = ')'
    COLON = ','
    STAR = '*'
    NEWL = 'NWL'
    WORD = 'WRD'
    EOS = '\0'


SPACES = [' ', '\t']
NLS = ['\n', '\r']
TYPES = ['INTEGER', 'REAL', 'DOUBLE', 'COMPLEX', 'CHARACTER', 'LOGICAL']

TR = dict((a.value, a) for a in [TokenType.LPAR, TokenType.RPAR, TokenType.COLON, TokenType.STAR])


class Token:
    def __init__(self, typ: TokenType, value: str):
        self.type = typ
        self.value = value

    def __repr__(self):
        return '<T({},{})>'.format(self.type, repr(self.value))


class Lexer:
    def __init__(self, lines: List[str]):
        self.lines = lines
        self.line = -1
        self.current_line = ''
        self.position = 0

        self._next_line()

    def _get_next_stop(self, must_be: Callable) -> int:
        end = self.position + 1
        while end < len(self.current_line) and must_be(self.current_line[end]):
            end += 1

        return end

    def _next_line(self):
        if self.line < len(self.lines):
            self.line += 1
            self.position = 0

            if self.line < len(self.lines) - 1:
                self.current_line = self.lines[self.line]

    def tokenize(self) -> Iterable[Token]:
        while self.line < len(self.lines):
            if self.position == 0:
                if len(self.current_line) < 6:
                    self._next_line()
                    continue
                elif self.current_line[0] in ['*', 'C']:
                    self._next_line()
                    continue
                elif self.current_line[5] not in ['$', '+'] and self.line > 0:
                    yield Token(TokenType.NEWL, '\n')

                self.position = 6
            else:
                current_char = self.current_line[self.position]
                start = self.position

                if current_char in SPACES:
                    self.position = self._get_next_stop(must_be=lambda x: x in SPACES)
                elif current_char in NLS:
                    self._next_line()
                elif current_char in TR:
                    yield Token(TR[current_char], current_char)
                    self.position += 1
                else:
                    self.position = self._get_next_stop(
                        must_be=lambda x: x not in SPACES and x not in NLS and x not in TR)
                    yield Token(TokenType.WORD, self.current_line[start:self.position])

        yield Token(TokenType.EOS, '\n')


class Parser:
    def __init__(self, lines: List[str]):
        self.lexer = Lexer(lines)
        self.current_token: Optional[Token] = None
        self.tokenizer = self.lexer.tokenize()

        self.next()

    def next(self):
        try:
            self.current_token = next(self.tokenizer)
        except StopIteration:
            self.current_token = Token(TokenType.EOS, '\0')

    def eat(self, typ: TokenType):
        self.expect(typ)
        self.next()

    def expect(self, typ: TokenType):
        if self.current_token.type != typ:
            raise Exception('expected {}, got {}'.format(typ, self.current_token))

    def skip(self):
        """Skip newlines"""
        while self.current_token.type == TokenType.NEWL:
            self.next()

    def skip_if(self, predicate: Callable):
        """Skip newlines"""
        while self.current_token.type != TokenType.EOS and predicate(self.current_token):
            self.next()

    @staticmethod
    def to_ctype(inp: List[str]) -> str:
        if inp[0] == 'REAL':
            assert len(inp) == 1
            return 'float'
        elif inp[0] == 'DOUBLE':
            assert len(inp) == 2
            return 'double'
        elif inp[0] in ['INTEGER', 'LOGICAL']:
            assert len(inp) == 1
            return 'Int'
        elif inp[0] == 'CHARACTER':
            return 'char*'
        elif inp[0] == 'COMPLEX':
            if len(inp) == 1:
                return 'float*'
            else:
                return 'double*'
        else:
            raise Exception('unknown fortran type {}'.format(inp))

    def decl(self) -> Tuple[str, str, List[Tuple[str, str]]]:
        name = ''
        rtype = 'void'
        args_def_list = []

        self.skip()
        self.expect(TokenType.WORD)

        # skip recursive marker
        if self.current_token.value == 'RECURSIVE':
            self.next()

        # get return type (or None, if subrountine)
        fortran_rtype = []
        if self.current_token.value != 'SUBROUTINE':
            while self.current_token.value != 'FUNCTION':
                fortran_rtype.append(self.current_token.value)
                self.next()

            rtype = self.to_ctype(fortran_rtype)

        self.eat(TokenType.WORD)

        name = self.current_token.value
        self.eat(TokenType.WORD)

        # get params' names
        self.eat(TokenType.LPAR)

        param_names = []
        while self.current_token.type not in [TokenType.RPAR, TokenType.EOS]:
            param_names.append(self.current_token.value)
            self.eat(TokenType.WORD)
            if self.current_token.type == TokenType.COLON:
                self.next()

        self.eat(TokenType.RPAR)

        # now, the type for each arg
        param_types = {}
        while self.current_token.type != TokenType.EOS:
            self.eat(TokenType.NEWL)

            if self.current_token.value not in TYPES:
                # jump to next line
                self.skip_if(lambda x: x.type != TokenType.NEWL)
            else:
                # get type
                type_ = [self.current_token.value]

                self.eat(TokenType.WORD)
                if self.current_token.type == TokenType.STAR:
                    type_.append('*')
                    self.next()
                    if self.current_token.type == TokenType.WORD:
                        type_.append(self.current_token.value)
                        self.next()
                    elif self.current_token.type == TokenType.LPAR:
                        self.skip_if(lambda x: x.type != TokenType.RPAR)
                        self.eat(TokenType.RPAR)

                elif self.current_token.value == 'PRECISION':
                    type_.append(self.current_token.value)
                    self.next()

                ctype = self.to_ctype(type_)

                while self.current_token.type not in [TokenType.NEWL, TokenType.EOS]:
                    param_name = self.current_token.value
                    self.eat(TokenType.WORD)

                    # seriously, how many star and parenthesis can you put to define an array in fortran?!?
                    if self.current_token.type in [TokenType.LPAR, TokenType.STAR]:
                        self.skip_if(lambda x: x.type != TokenType.RPAR)
                        self.eat(TokenType.RPAR)

                    # return a pointer anyway, the intent is guessed from the documentation later on
                    param_types[param_name] = ctype + ('*' if ctype[-1] != '*' else '')

                    if self.current_token.type == TokenType.COLON:
                        self.next()

        # assign a type to each parameter
        for p in param_names:
            if p not in param_types:
                raise Exception('{} do not have a type?!?'.format(p))

            args_def_list.append((param_types[p], p))

        return name, rtype, args_def_list
