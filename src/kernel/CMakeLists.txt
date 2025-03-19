# Kernel library
add_library(kernel
    kernel.cpp
)

target_include_directories(kernel PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(kernel PRIVATE
    os
) 