#pragma once

#include <cstdint>
#include <unordered_map>
#include <vector>
#include <functional>
#include <array>
#include "ppc_types.h"
#include "ppc_context.h"

// Forward declarations
struct PPCContext;

enum class MemoryAccess {
    Read = 1,
    Write = 2,
    Execute = 4
};

struct MemoryPage {
    uint8_t* data;
    bool writable;
    bool executable;
};

class PPCMemory {
public:
    static constexpr size_t PAGE_SIZE = 4096;
    static constexpr size_t CACHE_SIZE = 1024;
    static constexpr size_t TOTAL_MEMORY_SIZE = 256 * 1024 * 1024; // 256MB

    PPCMemory();
    ~PPCMemory();

    // Memory access functions with context
    uint32_t ReadMemory32(PPCContext* ctx, uint32_t address);
    uint64_t ReadMemory64(PPCContext* ctx, uint32_t address);
    uint8_t ReadMemory8(PPCContext* ctx, uint32_t address);
    uint16_t ReadMemory16(PPCContext* ctx, uint32_t address);
    void WriteMemory32(PPCContext* ctx, uint32_t address, uint32_t value);
    void WriteMemory64(PPCContext* ctx, uint32_t address, uint64_t value);
    void WriteMemory8(PPCContext* ctx, uint32_t address, uint8_t value);
    void WriteMemory16(PPCContext* ctx, uint32_t address, uint16_t value);

    // Overloads for when the second argument is a PPCContext
    uint32_t ReadMemory32(PPCContext* ctx, PPCContext& base) { return ReadMemory32(ctx, base.r3.u32); }
    uint64_t ReadMemory64(PPCContext* ctx, PPCContext& base) { return ReadMemory64(ctx, base.r3.u32); }
    uint8_t ReadMemory8(PPCContext* ctx, PPCContext& base) { return ReadMemory8(ctx, base.r3.u32); }
    uint16_t ReadMemory16(PPCContext* ctx, PPCContext& base) { return ReadMemory16(ctx, base.r3.u32); }
    void WriteMemory32(PPCContext* ctx, PPCContext& base, uint32_t value) { WriteMemory32(ctx, base.r3.u32, value); }
    void WriteMemory64(PPCContext* ctx, PPCContext& base, uint64_t value) { WriteMemory64(ctx, base.r3.u32, value); }
    void WriteMemory8(PPCContext* ctx, PPCContext& base, uint8_t value) { WriteMemory8(ctx, base.r3.u32, value); }
    void WriteMemory16(PPCContext* ctx, PPCContext& base, uint16_t value) { WriteMemory16(ctx, base.r3.u32, value); }

    // Legacy memory access functions (deprecated)
    uint32_t ReadMemory32(uint32_t address, uint32_t offset = 0) { return ReadMemory32WithContext(nullptr, address, offset); }
    uint64_t ReadMemory64(uint32_t address, uint32_t offset = 0) { return ReadMemory64WithContext(nullptr, address, offset); }
    uint8_t ReadMemory8(uint32_t address, uint32_t offset = 0) { return ReadMemory8WithContext(nullptr, address, offset); }
    uint16_t ReadMemory16(uint32_t address, uint32_t offset = 0) { return ReadMemory16WithContext(nullptr, address, offset); }
    void WriteMemory32(uint32_t address, uint32_t value, uint32_t offset = 0) { WriteMemory32WithContext(nullptr, address, value, offset); }
    void WriteMemory64(uint32_t address, uint64_t value, uint32_t offset = 0) { WriteMemory64WithContext(nullptr, address, value, offset); }
    void WriteMemory8(uint32_t address, uint8_t value, uint32_t offset = 0) { WriteMemory8WithContext(nullptr, address, value, offset); }
    void WriteMemory16(uint32_t address, uint16_t value, uint32_t offset = 0) { WriteMemory16WithContext(nullptr, address, value, offset); }

    // Memory management
    void InitializeMemory();
    bool MapMemory(uint32_t address, size_t size, MemoryAccess access);
    void UnmapMemory(uint32_t address, size_t size);

    // Memory hooks
    using MemoryHook = std::function<void(uint32_t, uint32_t)>;
    void AddReadHook(MemoryHook hook);
    void AddWriteHook(MemoryHook hook);

private:
    struct CacheEntry {
        uint32_t address;
        uint32_t value;
        bool valid;
    };

    uint8_t* memory;
    std::unordered_map<uint32_t, MemoryPage> pages;
    std::array<CacheEntry, CACHE_SIZE> cache;
    std::vector<MemoryHook> readHooks;
    std::vector<MemoryHook> writeHooks;

    uint32_t ReadMemory32Cached(uint32_t address);
    void InvalidateCache(uint32_t address);
    MemoryPage* GetPage(uint32_t address, bool allocate = false);
    uint32_t GetPageIndex(uint32_t address) const { return address / PAGE_SIZE; }
    uint32_t GetPageOffset(uint32_t address) const { return address % PAGE_SIZE; }

    // Internal context-aware implementations
    uint32_t ReadMemory32WithContext(PPCContext* ctx, uint32_t address, uint32_t offset = 0);
    uint64_t ReadMemory64WithContext(PPCContext* ctx, uint32_t address, uint32_t offset = 0);
    uint8_t ReadMemory8WithContext(PPCContext* ctx, uint32_t address, uint32_t offset = 0);
    uint16_t ReadMemory16WithContext(PPCContext* ctx, uint32_t address, uint32_t offset = 0);
    void WriteMemory32WithContext(PPCContext* ctx, uint32_t address, uint32_t value, uint32_t offset = 0);
    void WriteMemory64WithContext(PPCContext* ctx, uint32_t address, uint64_t value, uint32_t offset = 0);
    void WriteMemory8WithContext(PPCContext* ctx, uint32_t address, uint8_t value, uint32_t offset = 0);
    void WriteMemory16WithContext(PPCContext* ctx, uint32_t address, uint16_t value, uint32_t offset = 0);
};

// Global memory instance
extern PPCMemory g_Memory; 