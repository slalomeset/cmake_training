# 0.) create Source and CMakeFile
# 1.) mkdir build dir
# 2.) cd build
# 3.) cmake .. 
# 4.) cmake --build .
# 5.) ./Executable

cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_executable(Executable main.c)