cmake_minimum_required(VERSION 3.10)
project(BeanRecomp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set global include directories
include_directories(
    src
    src/include
    src/thirdparty/simde
)

# Find SDL2 package
find_package(SDL2 CONFIG REQUIRED)

# Add subdirectory for PPC component
add_subdirectory(src/ppc)

# Define the main executable
add_executable(BeanRecomp src/main.cpp src/ppc/ppc_memory.cpp)
target_link_libraries(BeanRecomp PRIVATE ppc_recomp)

# Link SDL2
target_link_libraries(BeanRecomp PRIVATE SDL2::SDL2 SDL2::SDL2main)

# Set compiler flags and definitions
if(MSVC)
    target_compile_options(BeanRecomp PRIVATE 
        /W3
        /arch:AVX
        /MP
        /wd4244  # Conversion from larger to smaller type
        /wd4267  # Conversion from size_t to smaller type
    )
    target_compile_definitions(BeanRecomp PRIVATE
        _CRT_SECURE_NO_WARNINGS
        NOMINMAX
        WIN32_LEAN_AND_MEAN
    )
else()
    target_compile_options(BeanRecomp PRIVATE
        -Wall
        -Wextra
        -mavx
    )
endif()

# Install the executable
install(TARGETS BeanRecomp
    RUNTIME DESTINATION bin
) 