set(LIBRARY_SOURCES
    "my_lib.c"
    )

add_library(${LIBRARY_NAME} STATIC 
    ${LIBRARY_SOURCES}
    )
