import datetime
import pathlib
import re
from typing import List

from scalapack_files_create import SCALAPACK_REPO_URL, SELF_REPO_URL
from scalapack_files_create.base import Declaration, get_current_commit, jinja_env, DeclArgument
from scalapack_files_create.fortran import Parser as FParser

SELF_NAME = __name__

DEFINES = [
    ('Int', 'int'),
]

PATTERN_ARG_DOC = re.compile(r'\s{0,3}\*\s{1,6}(?P<name>\w*)\s+\((?P<intent>.*?)\)(?P<extra>.*)?')

TO_EXCLUDE = [
    # no documentation
    'pilaver.f',
    'pslaedz.f',
    'pdlaedz.f',
    # do not follow the usual way of documenting
    'ztrmvt.f',
    'dtrmvt.f',
    'strmvt.f',
    'ctrmvt.f',
    'piparmq.f',
    # no documentation (and not defined by oneMKL)
    'pclawrite.f',
    'pdlawrite.f',
    'pslawrite.f',
    'pzlawrite.f',
    'pclaread.f',
    'pdlaread.f',
    'pslaread.f',
    'pzlaread.f',
    'ssdot.f',
    'dddot.f',
    'ccdotu.f',
    'ccdotc.f',
    'zzdotu.f',
    'zzdotc.f',
    'desc_convert.f',
    'dscnrm2.f',
    'dsnrm2.f',
    'dsasum.f',
    'dscasum.f',
    # not enough documentation
    'slarrf2.f',
    'dlarrf2.f',
    # not finished
    'pslatrs.f',
    'pdlatrs.f',
    'pclatrs.f',
    'pzlatrs.f',
    # external invocation
    # note that they are not defined in oneMKL either
    'pztreecomb.f',
    'pitreecomb.f',
    'pdtreecomb.f',
    'pctreecomb.f',
    'pstreecomb.f',
]

# when a list of argument is used in documentation
ARG_FOLLOW = {
    # p?lawil
    'pclawil.f': {'H43H34': ['H44', 'H33']},
    'pdlawil.f': {'H43H34': ['H44', 'H33']},
    'pslawil.f': {'H43H34': ['H44', 'H33']},
    'pzlawil.f': {'H43H34': ['H44', 'H33']},
    # p?laconsb
    'pclaconsb.f': {'H43H34': ['H44', 'H33']},
    'pdlaconsb.f': {'H43H34': ['H44', 'H33']},
    'pslaconsb.f': {'H43H34': ['H44', 'H33']},
    'pzlaconsb.f': {'H43H34': ['H44', 'H33']},
    # ?laref
    'claref.f': {'T3': ['V2', 'V3', 'T1', 'T2'], 'LIHIZ': ['LILOZ']},
    'dlaref.f': {'T3': ['V2', 'V3', 'T1', 'T2'], 'LIHIZ': ['LILOZ']},
    'slaref.f': {'T3': ['V2', 'V3', 'T1', 'T2'], 'LIHIZ': ['LILOZ']},
    'zlaref.f': {'T3': ['V2', 'V3', 'T1', 'T2'], 'LIHIZ': ['LILOZ']},
    # ?lamsh
    'dlamsh.f': {'LDS': ['LDH']},
    'slamsh.f': {'LDS': ['LDH']},
    # p?laqr0
    'pdlaqr0.f': {'ILO': ['ILOZ'], 'IHI': ['IHIZ']},
    'pslaqr0.f': {'ILO': ['ILOZ'], 'IHI': ['IHIZ']},
    # ?larre2a
    'dlarre2a.f': {'GERS': ['SDIAM']},
    'slarre2a.f': {'GERS': ['SDIAM']},
}

# arguments not present or not readable from documentation
MISSING_DOCS = {
    # p?laqr?
    'pdlaqr0.f': [DeclArgument('RECLEVEL', 'Int*', is_input=True)],  # most probably an input
    'pslaqr0.f': [DeclArgument('RECLEVEL', 'Int*', is_input=True)],
    'pdlaqr3.f': [DeclArgument('RECLEVEL', 'Int*', is_input=True)],  # most probably an input
    'pslaqr3.f': [DeclArgument('RECLEVEL', 'Int*', is_input=True)],
    # pjlaenv
    'pjlaenv.f': [DeclArgument('ICTXT', 'Int*', is_input=True)],
    # pmpcol
    'pmpcol.f': [DeclArgument('LASTCL', 'Int*', is_input=True)],
    # pmpim2
    'pmpim2.f': [
        DeclArgument('IL', 'Int*', is_input=True),
        DeclArgument('IU', 'Int*', is_input=True)
    ]
}


def find_f_decl(lines: List[str]) -> Declaration:

    name, rtype, args_def_list = FParser(lines).decl()

    args_list = []
    for arg_ctype, arg_name in args_def_list:
        args_list.append(DeclArgument(arg_name, arg_ctype))

    return Declaration(name.lower() + '_', rtype, args_list)


def find_decl(path: pathlib.Path) -> Declaration:
    """Find declaration in file
    """

    with path.open() as f:
        lines = f.readlines()
        f_args_beg = 0
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
            # some ad-hoc end of arguments
            elif '*     .. Parameters ..' in line:
                f_args_end = i
                break
            elif '*     .. Local Scalars ..' in line:
                f_args_end = i
                break
            elif '*     .. Executable Statements ..' in line:
                f_args_end = i
                break

        if f_args_end < 0:
            raise Exception('could not find arguments list in {}?!?'.format(path))

        # find declaration
        decl = find_f_decl(lines[0:f_args_end])

        # find whether argument is input/output/array/complex, etc
        args = dict((a.name, a) for a in decl.arguments)
        found_arg_doc = []

        try:
            for a in MISSING_DOCS[path.name]:
                args[a.name].is_input = a.is_input
                args[a.name].is_output = a.is_output
                args[a.name].is_array = a.is_array
                found_arg_doc.append(a.name)
        except KeyError:
            pass

        for line in lines[f_args_beg:f_args_end]:
            match_arg_doc = PATTERN_ARG_DOC.match(line)
            if match_arg_doc is not None:
                arg_name = match_arg_doc['name'].upper()

                try:
                    arg = args[arg_name]
                    found_arg_doc.append(arg_name)

                    if 'input' in match_arg_doc['intent'].lower():
                        arg.is_input = True
                    if 'output' in match_arg_doc['intent'].lower():
                        arg.is_output = True
                    if 'workspace' in match_arg_doc['intent'].lower():
                        # `WORK`
                        arg.is_output = True
                    if match_arg_doc['extra'] is not None:
                        if 'array' in match_arg_doc['extra'].lower():
                            arg.is_array = True
                        if 'complex' in match_arg_doc['extra'].lower():
                            arg.is_array = True

                    try:
                        for a in ARG_FOLLOW[path.name][arg_name]:
                            args[a].is_input = arg.is_input
                            args[a].is_output = arg.is_output
                            args[a].is_array = arg.is_array
                            args[a].is_output = arg.is_output
                            found_arg_doc.append(a)

                    except KeyError:
                        pass

                except KeyError:
                    pass

        if set(found_arg_doc) != set(args.keys()):
            print(path, 'could not find documentation for all args')
            print(found_arg_doc)
            print(list(args.keys()))

        return decl


def find_decls(root: pathlib.Path) -> List[Declaration]:
    """Find all declarations, which are found in all `*.f` files of the `SRC` folder.
    """

    declarations_f = []

    for path in root.glob('*.f'):
        if path.name not in TO_EXCLUDE:
            declarations_f.append(find_decl(path))

    return declarations_f


def create_scalapack_headers_and_wrapper(
        repo: pathlib.Path,
        output_header: pathlib.Path,
):
    # find declarations
    root = repo / 'SRC'
    root_tools = repo / 'TOOLS'
    if not root.is_dir() or not root_tools.is_dir():
        raise Exception('{} is not a directory, did you clone {}?'.format(root, SCALAPACK_REPO_URL))

    decls_f = find_decls(root) + find_decls(root_tools)
    decls_f.sort(key=lambda x: x.name[2:] + x.name[1])

    template_header = jinja_env.get_template('scalapack.h.j2')

    # out
    with output_header.open('w') as f:
        f.write(template_header.render(
            declarations_f=decls_f,
            defines=DEFINES,
            self_name=SELF_NAME,
            self_repo_url=SELF_REPO_URL,
            self_commit=get_current_commit(pathlib.Path('.')),
            scalapack_repo_url=SCALAPACK_REPO_URL,
            scalapack_commit=get_current_commit(repo),
            current_time=datetime.datetime.now()
        ))
