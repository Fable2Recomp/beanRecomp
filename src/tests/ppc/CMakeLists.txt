# Find GTest package
find_package(GTest REQUIRED)

# Add test executable
add_executable(ppc_tests
    ppc_register_test.cpp
    ppc_context_test.cpp
    ppc_memory_test.cpp
)

# Link against GTest and our PowerPC library
target_link_libraries(ppc_tests
    PRIVATE
    GTest::GTest
    GTest::Main
    ppc_recomp
)

# Include directories
target_include_directories(ppc_tests
    PRIVATE
    ${CMAKE_SOURCE_DIR}/src/include
    ${CMAKE_SOURCE_DIR}/src/ppc
)

# Enable testing
enable_testing()
add_test(NAME ppc_tests COMMAND ppc_tests)

# Set C++ standard
set_target_properties(ppc_tests PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# Add compiler warnings
if(MSVC)
    target_compile_options(ppc_tests PRIVATE /W4)
else()
    target_compile_options(ppc_tests PRIVATE -Wall -Wextra -Wpedantic)
endif() 