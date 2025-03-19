cmake_minimum_required(VERSION 3.10)
project(PPC_Recompilation)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find all PPC recompilation source files
file(GLOB PPC_SOURCES 
    "*.cpp"
    "ppc_recomp.*.cpp"
)

# Create a static library for the PPC recompilation
add_library(ppc STATIC
    ppc.cpp
)

# Include directories
target_include_directories(ppc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set compiler flags and definitions
if(MSVC)
    target_compile_options(ppc PRIVATE 
        /W3
        /arch:AVX
        /MP
        /wd4244  # Conversion from larger to smaller type
        /wd4267  # Conversion from size_t to smaller type
        /wd4996  # Deprecated functions
        /wd4146  # Unary minus on unsigned type
        /wd4305  # Truncation from double to float
        /wd4311  # Pointer truncation
        /wd4312  # Conversion to larger size
    )
    target_compile_definitions(ppc PRIVATE
        _CRT_SECURE_NO_WARNINGS
        NOMINMAX
        WIN32_LEAN_AND_MEAN
        _HAS_EXCEPTIONS=0
        HAVE_MEMORY_H
        HAVE_STDINT_H
        HAVE_BUILTIN_ROTATELEFT
        HAVE_BUILTIN_ROTATELEFT32
        HAVE_BUILTIN_ROTATELEFT64
        PPC_PLATFORM_WINDOWS
        PPC_COMPILER_MSVC
    )
else()
    target_compile_options(ppc PRIVATE
        -Wall
        -Wextra
        -mavx
    )
    target_compile_definitions(ppc PRIVATE
        HAVE_MEMORY_H
        HAVE_STDINT_H
        HAVE_BUILTIN_ROTATELEFT
        PPC_PLATFORM_LINUX
        PPC_COMPILER_GCC
    )
endif()

# Export the library
set_target_properties(ppc PROPERTIES
    POSITION_INDEPENDENT_CODE ON
    OUTPUT_NAME "ppc"
)

# Install the library
install(TARGETS ppc
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

# Add dependencies
target_link_libraries(ppc PRIVATE os) 