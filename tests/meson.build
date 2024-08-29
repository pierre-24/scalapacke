# dependencies
tests_dep = [scalapacke_dep]
tests_dep += cc.find_library('m', required: true)

# list of tests
tests_to_run = [
    'hello_blacs',
	'lowlevel_pdgemm',
	'midlevel_pdgemm',
	'pdgemm_residual',
	'pdsyev',
]

mpiexec = find_program('mpiexec', required : true)
nprocs = get_option('tests_nprocs')

foreach f: tests_to_run
	src_file = files(f +  '.c')

	# make executable
	test_exe = executable(
		'test_' + f,
		sources: src_file,
		dependencies: tests_dep,
		install: false,
		build_by_default: false,
		c_args : build_args,
	)

	# and run it through mpiexec
	test(
		'test_' + f,
		mpiexec,
		args : ['-n', nprocs.to_string(), test_exe],
        suite: 'lib',
        is_parallel : false
	)
endforeach