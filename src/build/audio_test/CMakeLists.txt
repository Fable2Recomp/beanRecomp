cmake_minimum_required(VERSION 3.10)
project(AudioTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SDL3
find_package(SDL3 REQUIRED)

# Add the audio library
add_library(audio
    ../../audio/audio.cpp
    ../../audio/xact_parser.cpp
    ../../audio/audio_manager.cpp
)

# Set include directories for the audio library
target_include_directories(audio PRIVATE
    ../..
    ../../thirdparty/simde
    ${SDL3_INCLUDE_DIRS}
)

# Link the audio library with SDL3
target_link_libraries(audio PRIVATE ${SDL3_LIBRARIES})

# Add the audio test executable
add_executable(audio_test_direct audio_test_direct.cpp)

# Set include directories for the audio test executable
target_include_directories(audio_test_direct PRIVATE
    ../..
    ../../thirdparty/simde
    ${SDL3_INCLUDE_DIRS}
)

# Link the audio test executable with the audio library and SDL3
target_link_libraries(audio_test_direct PRIVATE audio ${SDL3_LIBRARIES})

# Set C++17 for the audio test executable
set_property(TARGET audio_test_direct PROPERTY CXX_STANDARD 17)
set_property(TARGET audio_test_direct PROPERTY CXX_STANDARD_REQUIRED ON) 