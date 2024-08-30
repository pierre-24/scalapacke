project('scalapacke', 'c',
  version : '0.2.4',
  default_options : ['warning_level=3'],
)

cc = meson.get_compiler('c')

# configure dependencies
project_dep = []

build_args = [
  '-DPROJECT_NAME="lib' + meson.project_name() + '"',
  '-DPROJECT_VERSION="' + meson.project_version() + '"',
]

# linear algebra backend
la_backend = get_option('la_backend')
if la_backend == 'custom'
    foreach lib: get_option('la_libraries')
        project_dep += cc.find_library(lib, required : true)
    endforeach
else
    project_dep += dependency(la_backend, required: false)
endif

# if MKL, add the missing libraries
if la_backend.contains('mkl')

    mkl_mpi = get_option('mkl_mpi')
    if mkl_mpi == 'mpich'
        mkl_mpi = 'intelmpi'
    endif

    if la_backend.contains('ilp64')
        mkl_libraries = [
            'mkl_scalapack_ilp64',
            'mkl_blacs_' + mkl_mpi + '_ilp64',
        ]
    else
        mkl_libraries = [
            'mkl_scalapack_lp64',
            'mkl_blacs_' + mkl_mpi + '_lp64',
        ]
    endif

    foreach name: mkl_libraries
        project_dep += cc.find_library(name, required: true)
    endforeach
endif

# use 64 bit integers if any
if get_option('ilp64')
    build_args += '-DLAPACK_ILP64'
    message('using 64-bit integers, check compatibility with `la_backend`/`la_libraries`')
endif

# fetch sources and includes
srcs = []
subdir('src')
includes = include_directories('include')

# library
scalapacke_lib = library(
  meson.project_name(),
  srcs,
  install : true,
  c_args : build_args,
  include_directories : includes,
  dependencies: project_dep,
)

scalapacke_dep = declare_dependency(
    link_with: scalapacke_lib,
    include_directories: includes,
    dependencies: project_dep,
)

# tests
if get_option('tests')
    subdir('tests')
endif