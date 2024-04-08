#include <nlohmann/json.hpp>
#include "config.h"
#include "my_lib.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    printf("project name: %s\n\r", project_name);
    printf("project version: %s\n\r", project_version);

    printf("JSON Lib Version Major: %d\n\r", NLOHMANN_JOSN_VERSION_MAJOR);
    printf("JSON Lib Version Minor: %d\n\r", NLOHMANN_JOSN_VERSION_MINOR);
    printf("JSON Lib Version Patch: %d\n\r", NLOHMANN_JOSN_VERSION_PATCH);
    /* code */
    print_hello_world();
    return 0;
}
