cmake_minimum_required(VERSION 3.10)
project(BeanRecomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directories to build folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Find GTest package (optional)
find_package(GTest QUIET)

# Add source files
set(SOURCES
    src/ppc/ppc.cpp
    src/ppc/symbols.cpp
    src/ppc/decompressor.cpp
    src/ppc/disassembler.cpp
    src/ppc/recompiler.cpp
    src/os/logger.cpp
    src/os/crash_handler.cpp
    src/os/config.cpp
)

# Add header files
set(HEADERS
    src/ppc/ppc.h
    src/ppc/symbols.h
    src/ppc/decompressor.h
    src/ppc/disassembler.h
    src/ppc/recompiler.h
    src/os/logger.h
    src/os/crash_handler.h
    src/os/config.h
)

# Create library
add_library(BeanRecomp STATIC ${SOURCES} ${HEADERS})

# Include directories
target_include_directories(BeanRecomp PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Add compiler warnings
if(MSVC)
    target_compile_options(BeanRecomp PRIVATE /W4)
else()
    target_compile_options(BeanRecomp PRIVATE -Wall -Wextra)
endif()

# Create executable
add_executable(beanrecomp_exe src/main.cpp)
target_link_libraries(beanrecomp_exe PRIVATE BeanRecomp)

# Set the output name for the executable
set_target_properties(beanrecomp_exe PROPERTIES 
    OUTPUT_NAME "beanrecomp"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
    RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}
)

# Include directories for the executable
target_include_directories(beanrecomp_exe
    PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

# Add tests if GTest is found
if(GTEST_FOUND)
    add_subdirectory(tests)
endif() 