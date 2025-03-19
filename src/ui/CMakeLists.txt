# UI library
add_library(ui STATIC
    ui.cpp
)

target_include_directories(ui PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
) 