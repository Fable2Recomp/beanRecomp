cmake_minimum_required(VERSION 3.10)
project(BeanRecomp VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable debug symbols
set(CMAKE_BUILD_TYPE Debug)

# Add subdirectories
add_subdirectory(app)
add_subdirectory(api)
add_subdirectory(apu)
add_subdirectory(cpu)
add_subdirectory(gpu)
add_subdirectory(hid)
add_subdirectory(kernel)
add_subdirectory(os)
add_subdirectory(ui)
add_subdirectory(ppc)

# Create main executable
add_executable(BeanRecomp main.cpp)

# Link all libraries to the main executable
target_link_libraries(BeanRecomp PRIVATE
    app
    api
    apu
    cpu
    gpu
    hid
    kernel
    os
    ui
    ppc
)

# Platform-specific libraries
if(WIN32)
    target_link_libraries(BeanRecomp PRIVATE shell32)
endif()

# Set include directories for the main executable
target_include_directories(BeanRecomp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/app
    ${CMAKE_CURRENT_SOURCE_DIR}/api
    ${CMAKE_CURRENT_SOURCE_DIR}/apu
    ${CMAKE_CURRENT_SOURCE_DIR}/cpu
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu
    ${CMAKE_CURRENT_SOURCE_DIR}/hid
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel
    ${CMAKE_CURRENT_SOURCE_DIR}/os
    ${CMAKE_CURRENT_SOURCE_DIR}/ui
    ${CMAKE_CURRENT_SOURCE_DIR}/ppc
)

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