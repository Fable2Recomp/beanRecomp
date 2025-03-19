# GPU library
add_library(gpu STATIC
    gpu.cpp
)

target_include_directories(gpu PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(gpu PRIVATE
    os
) 