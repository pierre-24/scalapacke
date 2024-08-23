project('scalapacke', 'c',
  version : '0.1.0',
  default_options : ['warning_level=3'],
)

cc = meson.get_compiler('c')

# configure dependencies
project_dep = []

build_args = [
  '-DPROJECT_NAME="lib' + meson.project_name() + '"',
  '-DPROJECT_VERSION="' + meson.project_version() + '"',
]

project_dep += dependency('mpi', language: 'c')

# linear algebra backend
la_backend = get_option('la_backend')
if la_backend == 'netlib'
    scalapack_dep = dependency('scalapack', required: false)  # Fedora style
    scalapack_dep2 = dependency('scalapack-openmpi', required: false)  # ubuntu style
    if scalapack_dep.found()
        project_dep += scalapack_dep
    elif scalapack_dep2.found()
        project_dep += scalapack_dep2
    else
        netlib_libraries = [
            'blas',
            'lapack',
            'scalapack'
        ]

        foreach name: netlib_libraries
            project_dep += cc.find_library(name, required: true)
        endforeach
    endif

    build_args += '-DUSE_LA_NETLIB'
elif la_backend == 'mkl'
    mkl_libraries = [
        'm',
        'mkl_scalapack_lp64',
        'mkl_intel_lp64',
        'mkl_core',
        'mkl_sequential',
        'mkl_blacs_intelmpi_lp64',
    ]

    foreach name: mkl_libraries
        project_dep += cc.find_library(name, required: true)
    endforeach

    build_args += '-DUSE_LA_MKL'
elif la_backend == 'custom'
    foreach lib: get_option('la_libraries')
        project_dep += cc.find_library(lib, required : true)
    endforeach
    build_args += '-DUSE_LA_CUSTOM'
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
subdir('tests')