#pragma once
#include <cstdint>

// Structure for mapping PPC addresses to recompiled functions
struct PPCFuncMapping {
    uint32_t address;
    void (*func)();
};

// External declarations for the mapping table
extern PPCFuncMapping g_PPCFuncMappings[];
extern const size_t g_PPCFuncMappingCount; 