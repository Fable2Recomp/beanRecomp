#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <map>

#ifndef NO_SDL3
#include <SDL3/SDL.h>
#endif

#include "ppc/ppc_types.h"
#include "ppc/ppc_context.h"
#include "ppc/ppc_recomp.h"
#include "ppc/ppc_func_mapping.h"
#include "ppc/ppc_memory.h"

// Global context for PPC execution
PPCContext g_PPCContext;

// Constant for the base address
const uint32_t BASE_ADDRESS = 0x80000000;  // Adjusted base address for Windows compatibility

// Function to initialize memory
void initializeMemory() {
    InitializeMemory(0, 1024 * 1024, 0);  // Clear the first 1MB of memory for Windows
}

// Function to print the function mapping table
void printFunctionMapping() {
    std::cout << "Function mapping table:" << std::endl;
    for (size_t i = 0; i < g_PPCFuncMappingCount; i++) {
        std::cout << "0x" << std::hex << g_PPCFuncMappings[i].address 
                  << " -> " << (void*)g_PPCFuncMappings[i].func << std::endl;

        // Only print the first 10 entries to avoid flooding the console
        if (i >= 9) {
            std::cout << "... and " << (g_PPCFuncMappingCount - 10) << " more functions" << std::endl;
            break;
        }
    }
}

// Entry point for the application
int main(int argc, char* argv[]) {
    // Initialize SDL if available
#ifndef NO_SDL3
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) < 0) {
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        return -1;  // Exit if SDL initialization fails
    }
#endif

    // Print welcome message
    std::cout << "BeanRecomp - Xbox 360 Static Recompiler" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // Initialize the PPC context
    g_PPCContext.reset();

    // Initialize memory
    initializeMemory();

    // Print the function mapping table
    printFunctionMapping();

    // Example of calling a recompiled function
    if (g_PPCFuncMappingCount > 0) {
        uint32_t address = g_PPCFuncMappings[0].address;
        void (*func)(PPCContext*) = g_PPCFuncMappings[0].func;

        std::cout << "\nCalling function at address 0x" << std::hex << address << std::endl;

        // Set up any necessary registers or memory before calling
        g_PPCContext.r3.u32 = 1;  // Example parameter
        g_PPCContext.r4.u32 = 2;  // Example parameter

        // Call the function
        func(&g_PPCContext);

        // Print the result
        std::cout << "Function returned, r3 = 0x" << std::hex << g_PPCContext.r3.u32 << std::endl;
    } else {
        std::cout << "No functions available to call." << std::endl;
    }

    // Clean up SDL if initialized
#ifndef NO_SDL3
    SDL_Quit();
#endif

    return 0;
}
