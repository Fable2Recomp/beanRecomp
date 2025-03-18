cmake_minimum_required(VERSION 3.10)

# Find SDL3 (optional)
find_package(SDL3 QUIET)

# Set SDL3 availability flag
if(SDL3_FOUND)
    add_definitions(-DHAS_SDL3)
    message(STATUS "SDL3 found, building audio components")
else()
    message(STATUS "SDL3 not found, building without audio support")
endif()

# Add audio library
add_library(audio
    audio.cpp
    xact_parser.cpp
    audio_manager.cpp
)

# Include directories
target_include_directories(audio PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Add SDL3 includes and libraries if available
if(SDL3_FOUND)
    target_include_directories(audio PUBLIC ${SDL3_INCLUDE_DIRS})
    target_link_libraries(audio PUBLIC ${SDL3_LIBRARIES})
endif()

# Add audio test executable (only if SDL3 is available)
if(SDL3_FOUND)
    add_executable(audio_test
        audio_test.cpp
    )

    # Link audio test with audio library
    target_link_libraries(audio_test
        audio
    )

    # Add audio manager test executable
    add_executable(audio_manager_test
        audio_manager_test.cpp
    )

    # Link audio manager test with audio library
    target_link_libraries(audio_manager_test
        audio
    )

    # Add extract audio utility
    add_executable(extract_audio
        extract_audio.cpp
    )

    # Link extract audio with audio library
    target_link_libraries(extract_audio
        audio
    )

    # Set C++ standard for executables
    set_target_properties(audio_test PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
    )

    set_target_properties(audio_manager_test PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
    )

    set_target_properties(extract_audio PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
    )
endif()

# Set C++ standard for the library
set_target_properties(audio PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
) 