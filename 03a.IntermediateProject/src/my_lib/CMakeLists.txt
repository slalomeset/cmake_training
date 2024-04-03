# create library called 'my_lib' based on my_lib.c file
add_library(my_lib STATIC my_lib.h my_lib.c)

# provide path of the include directory
target_include_directories( my_lib PUBLIC "./")