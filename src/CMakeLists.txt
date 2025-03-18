cmake_minimum_required(VERSION 3.10)
project(BeanRecomp VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable debug symbols
set(CMAKE_BUILD_TYPE Debug)

# Add audio subdirectory
add_subdirectory(audio)

# Source files
file(GLOB_RECURSE SOURCES
    "kernel/*.cpp"
    "os/*.cpp"
    "ui/*.cpp"
    "cpu/*.cpp"
    "hid/*.cpp"
)

# Headers
include_directories(
    .
    kernel
    os
    ui
    cpu
    hid
    audio
)

# Create library target
add_library(BeanRecompLib STATIC ${SOURCES})

# Platform-specific libraries
if(WIN32)
    target_link_libraries(BeanRecompLib PRIVATE shell32)
endif()

# Link with audio library
target_link_libraries(BeanRecompLib PRIVATE audio)

# Create test executable
add_executable(test_components test_components.cpp)
target_link_libraries(test_components PRIVATE BeanRecompLib)

# Create main executable
add_executable(BeanRecomp main.cpp)
target_link_libraries(BeanRecomp PRIVATE BeanRecompLib)

# Find SDL3 (optional)
find_package(SDL3 QUIET)

# Only build audio test if SDL3 is available
if(SDL3_FOUND)
    # Add audio test executable
    add_executable(audio_test_direct
        audio_test_direct.cpp
    )

    # Link the audio library to the executable
    target_link_libraries(audio_test_direct
        audio
    )

    # Set C++ standard for the executable
    set_property(TARGET audio_test_direct PROPERTY CXX_STANDARD 17)

    # Copy data directory to build directory
    add_custom_command(TARGET audio_test_direct POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/data ${CMAKE_CURRENT_BINARY_DIR}/data
        COMMENT "Copying data directory to build directory"
    )
endif()

# Add audio library
add_library(audio
    audio/audio.cpp
    audio/xact_parser.cpp
    audio/audio_manager.cpp
)

# Set include directories for the audio library
target_include_directories(audio PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${SDL3_INCLUDE_DIRS}
)

# Link SDL3 to the audio library
target_link_libraries(audio PUBLIC
    ${SDL3_LIBRARIES}
) 