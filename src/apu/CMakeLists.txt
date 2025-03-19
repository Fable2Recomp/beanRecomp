# APU library
add_library(apu STATIC
    apu.cpp
)

target_include_directories(apu PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(apu PRIVATE
    os
) 