###################################################################################
#                                                                                 #
# NAME: meson.build                                                               #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michaelbrockus@icloud.com>                                     #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 #
#                                                                                 #
###################################################################################

exe_src = files('main.c')

exe_main = executable(meson.project_name(), 
    sources: [exe_src],
    include_directories: exe_dir,
    install: true)

if meson.backend() == 'ninja'
    run_target('run', command: exe_main)
endif

benchmark('Benchmark exe', exe_main)
test('Test exe', exe_main)
