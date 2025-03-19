#include "../include/ppc/ppc_context.h"
#include <iostream>
#include <iomanip>

// Global instance
PPCContext g_PPCContext;

void PPCContext::save_state(uint8_t* buffer, size_t& size) {
    if (!buffer) {
        size = sizeof(PPCContext);
        return;
    }

    if (size < sizeof(PPCContext)) {
        throw std::runtime_error("Buffer too small for context state");
    }

    std::memcpy(buffer, this, sizeof(PPCContext));
    size = sizeof(PPCContext);
}

void PPCContext::restore_state(const uint8_t* buffer, size_t size) {
    if (!buffer) {
        throw std::runtime_error("Invalid buffer for state restoration");
    }

    if (size < sizeof(PPCContext)) {
        throw std::runtime_error("Buffer too small for context state");
    }

    std::memcpy(this, buffer, sizeof(PPCContext));
}

void PPCContext::dump_state() const {
    std::cout << "PowerPC Context State:\n";
    std::cout << "=====================\n\n";

    // Dump GPRs
    std::cout << "General Purpose Registers:\n";
    for (size_t i = 0; i < gpr.size(); ++i) {
        std::cout << "r" << std::setw(2) << std::setfill('0') << i 
                  << ": 0x" << std::hex << std::setw(16) << std::setfill('0') 
                  << gpr[i].u64 << std::dec << "\n";
    }
    std::cout << "\n";

    // Dump FPRs
    std::cout << "Floating Point Registers:\n";
    for (size_t i = 0; i < fpr.size(); ++i) {
        std::cout << "f" << std::setw(2) << std::setfill('0') << i 
                  << ": " << fpr[i].f64 << "\n";
    }
    std::cout << "\n";

    // Dump Vector Registers
    std::cout << "Vector Registers:\n";
    for (size_t i = 0; i < vr.size(); ++i) {
        std::cout << "v" << std::setw(2) << std::setfill('0') << i 
                  << ": 0x" << std::hex << std::setw(16) << std::setfill('0') 
                  << vr[i].u64 << std::dec << "\n";
    }
    std::cout << "\n";

    // Dump Special Registers
    std::cout << "Special Registers:\n";
    std::cout << "LR:  0x" << std::hex << std::setw(16) << std::setfill('0') << lr.u64 << "\n";
    std::cout << "CTR: 0x" << std::hex << std::setw(16) << std::setfill('0') << ctr.u64 << "\n";
    std::cout << "CR:  0x" << std::hex << std::setw(8) << std::setfill('0') << cr.value << "\n";
    std::cout << "XER: 0x" << std::hex << std::setw(8) << std::setfill('0') << xer.value << "\n";
    std::cout << std::dec << "\n";

    // Dump Memory Base
    std::cout << "Memory Base: " << (memory_base ? "Set" : "Not Set") << "\n";
    if (memory_base) {
        std::cout << "Memory Base Address: 0x" << std::hex 
                  << reinterpret_cast<uintptr_t>(memory_base) << std::dec << "\n";
    }
} 