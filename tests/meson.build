# dependencies
tests_dep = [scalapacke_dep]
tests_dep += cc.find_library('m', required: true)

# list of tests
tests_to_run = [
    'hello_blacs',
]

mpiexec = find_program('mpiexec', required : true)

foreach f: tests_to_run
	src_file = files(f +  '.c')

	test_exe = executable(
		'test_' + f,
		sources: src_file,
		dependencies: tests_dep,
		install: false,
		build_by_default: false,
		c_args : build_args,
	)

	test(
		'test_' + f,
		mpiexec,
		args : ['-n', '2', test_exe],
        suite: 'lib',
        is_parallel : false
	)
endforeach