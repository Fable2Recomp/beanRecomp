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

# Manually set SDL2 paths
set(SDL2_INCLUDE_DIR "C:/vcpkg/vcpkg-master/installed/x64-windows/include/SDL2" CACHE PATH "SDL2 include directory")
set(SDL2_LIBRARY "C:/vcpkg/vcpkg-master/installed/x64-windows/lib/SDL2.lib" CACHE FILEPATH "SDL2 library")

# Check if SDL2 files exist
if(EXISTS "${SDL2_INCLUDE_DIR}/SDL.h" AND EXISTS "${SDL2_LIBRARY}")
    message(STATUS "SDL2 found, building with SDL support")
    include_directories(${SDL2_INCLUDE_DIR})
    add_definitions(-DHAS_SDL2)
    set(SDL2_FOUND TRUE)
else()
    message(STATUS "SDL2 not found, building without SDL support")
    add_definitions(-DNO_SDL2)
    set(SDL2_FOUND FALSE)
endif()

# Add subdirectory for PPC component
add_subdirectory(src/ppc)

# Define the main executable
add_executable(BeanRecomp src/main.cpp src/ppc/ppc_memory.cpp)
target_link_libraries(BeanRecomp PRIVATE ppc_recomp)

# Add SDL if available
if(SDL2_FOUND)
    target_link_libraries(BeanRecomp PRIVATE ${SDL2_LIBRARY})
endif()

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