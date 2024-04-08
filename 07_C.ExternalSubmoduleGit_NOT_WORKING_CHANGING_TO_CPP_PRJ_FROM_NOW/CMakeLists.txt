# this is the root CMakeLists
cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# [cmake variables]:    important native CMake variables
set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(EXECUTABLE_NAME "Executable")
set(LIBRARY_NAME    "Library")

set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

include(AddGitSubmodule)

add_git_submodule(external/json)

# [cmake options or compilation flag]
# cmd to execute: cmake -S ./ -B build -DCOMPILE_EXECUTABLE=ON
# option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)
option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

add_subdirectory(src)
add_subdirectory(configured)
add_subdirectory(app)
