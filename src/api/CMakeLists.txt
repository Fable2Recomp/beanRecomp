# API library
add_library(api STATIC
    api.cpp
)

target_include_directories(api PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(api PRIVATE
    os
    cpu
    ppc
) 