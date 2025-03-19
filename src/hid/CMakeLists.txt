# HID library
add_library(hid STATIC
    hid.cpp
)

target_include_directories(hid PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
) 