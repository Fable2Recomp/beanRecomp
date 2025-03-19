# CPU library
add_library(cpu STATIC
    cpu.cpp
)

target_include_directories(cpu PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_link_libraries(cpu PRIVATE
    os
    ppc
) 