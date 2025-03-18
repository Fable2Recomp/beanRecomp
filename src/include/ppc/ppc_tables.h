#pragma once
#include "ppc_types.h"

namespace ppc {

struct SwitchTable {
    u32 base;
    u32 r;
    u32 default_addr;
    const u32* labels;
    size_t label_count;
};

// Switch tables will be defined in the cpp file
extern const SwitchTable g_SwitchTables[];
extern const size_t g_SwitchTableCount;

} // namespace ppc 