### Create external directory
```shell
mkdir external
```
### Create new submodule
```git
git submodule add git@github.com:nlohmann/json.git json
```
### Create cmake directory and create AddGitSubmodule.cmake file to define add_git_submodule CMake function. Fill the file with the function:
```CMake
# add_git_submodule function
# update root CMakeLists.txt with:
#   include(AddGitSubmodule)
#   add_git_submodule(external/json)
# with 'cmake -S ./ -B build/' command the submodule /json will be added/updated 
function(add_git_submodule dir)
    find_package(Git REQUIRED)
    
    if (NOT EXISTS ${dir}/CMakeLists.txt)
        execute_process(COMMAND ${GIT_EXECUTABLE}
            submodule update --init --recursive -- ${dir}
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
    endif()

    add_subdirectory(${dir})
    
endfunction(add_git_submodule dir)
```

## THE PART ABOVE IS REPLACED BY THE FOLLOWING
