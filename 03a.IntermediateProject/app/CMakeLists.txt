add_executable(Executable main.c)

# link Executable with my_lib given in src/ directory
target_link_libraries(Executable PUBLIC my_lib)
