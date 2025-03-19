# OS library
add_library(os
    logger.cpp
    config.cpp
    crash_handler.cpp
)

target_include_directories(os PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(os PRIVATE
    stdc++fs
) 