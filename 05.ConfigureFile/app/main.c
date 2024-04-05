#include "config.h"
#include "my_lib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("project name: %s\n\r", project_name);
    printf("project version: %s\n\r", project_version);
    /* code */
    print_hello_world();
    return 0;
}
