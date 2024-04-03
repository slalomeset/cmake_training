# 0.) create Source and CMakeFile
# 1.) cmake -S ./ -B build/ 
# 2.) cmake --build . --target all | my_lib | Executable
# 3.) ./Executable

cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# create library called 'my_lib' based on my_lib.c file
add_library(my_lib STATIC src/my_lib.c)

# CMalke shall know all directories containing the header files 
target_include_directories(my_lib PUBLIC src)

# create executable base on maine.c file
add_executable(Executable app/main.c)

# link Executable with my_lib
target_link_libraries(Executable PUBLIC my_lib)
