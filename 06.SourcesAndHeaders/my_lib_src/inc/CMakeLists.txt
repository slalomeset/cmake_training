set(LIBRARY_HEADERS
    "my_lib.h"
    )

target_include_directories(${LIBRARY_NAME} PUBLIC
"./"
"${CMAKE_BINARY_DIR}/configured_files/include")
