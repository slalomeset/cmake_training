# 0.) create Source and CMakeFile
# 1.) mkdir build dir
# 2.) cd build
# 3.) cmake .. 
# 4.) cmake --build .
# 5.) ./Executable

cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# create library called 'my_lib' based on my_lib.c file
# add_library(my_lib STATIC src/my_lib.h src/my_lib.c)
add_library(my_lib STATIC src)

# create executable base on maine.c file
add_executable(Executable app/main.c)
# add_executable(Executable app)

# link Executable with my_lib
target_link_libraries(Executable PUBLIC my_lib)

# now I can buil only my lib :
# 01.] cd build
# 02.] cmake --build . --target my_lib