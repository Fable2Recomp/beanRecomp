#include "../include/ppc/ppc_memory.h"
#include "../include/ppc/ppc_context.h"
#include "../include/ppc/ppc_types.h"
#include <cstdio>
#include <cstring>
#include <stdexcept>

// Global memory instance
PPCMemory g_Memory;

PPCMemory::PPCMemory() : memory(nullptr) {
    memory = new uint8_t[TOTAL_MEMORY_SIZE]();
    std::fill(cache.begin(), cache.end(), CacheEntry{0, 0, false});
}

PPCMemory::~PPCMemory() {
    delete[] memory;
    for (auto& page : pages) {
        delete[] page.second.data;
    }
}

void PPCMemory::InitializeMemory() {
    // Clear main memory
    std::memset(memory, 0, TOTAL_MEMORY_SIZE);
    
    // Clear cache
    std::fill(cache.begin(), cache.end(), CacheEntry{0, 0, false});
    
    // Clear pages
    pages.clear();
    
    // Map initial memory region
    MapMemory(0, TOTAL_MEMORY_SIZE, MemoryAccess::Read | MemoryAccess::Write);
}

// Primary context-aware memory access functions
uint32_t PPCMemory::ReadMemory32(PPCContext* ctx, uint32_t address) {
    return ReadMemory32WithContext(ctx, address);
}

uint64_t PPCMemory::ReadMemory64(PPCContext* ctx, uint32_t address) {
    return ReadMemory64WithContext(ctx, address);
}

uint8_t PPCMemory::ReadMemory8(PPCContext* ctx, uint32_t address) {
    return ReadMemory8WithContext(ctx, address);
}

uint16_t PPCMemory::ReadMemory16(PPCContext* ctx, uint32_t address) {
    return ReadMemory16WithContext(ctx, address);
}

void PPCMemory::WriteMemory32(PPCContext* ctx, uint32_t address, uint32_t value) {
    WriteMemory32WithContext(ctx, address, value);
}

void PPCMemory::WriteMemory64(PPCContext* ctx, uint32_t address, uint64_t value) {
    WriteMemory64WithContext(ctx, address, value);
}

void PPCMemory::WriteMemory8(PPCContext* ctx, uint32_t address, uint8_t value) {
    WriteMemory8WithContext(ctx, address, value);
}

void PPCMemory::WriteMemory16(PPCContext* ctx, uint32_t address, uint16_t value) {
    WriteMemory16WithContext(ctx, address, value);
}

// Internal context-aware implementations
uint32_t PPCMemory::ReadMemory32WithContext(PPCContext* ctx, uint32_t address, uint32_t offset) {
    uint32_t effectiveAddr = address + offset;
    
    // Check memory access
    if (!CheckMemoryAccess(effectiveAddr, MemoryAccess::Read)) {
        // Handle invalid access
        return 0;
    }
    
    // Try cache first
    return ReadMemory32Cached(effectiveAddr);
}

void PPCMemory::WriteMemory32WithContext(PPCContext* ctx, uint32_t address, uint32_t value, uint32_t offset) {
    uint32_t effectiveAddr = address + offset;
    
    // Check memory access
    if (!CheckMemoryAccess(effectiveAddr, MemoryAccess::Write)) {
        // Handle invalid access
        return;
    }
    
    // Call write hooks
    for (auto& hook : writeHooks) {
        hook(effectiveAddr, value);
    }
    
    // Get the page
    MemoryPage* page = GetPage(effectiveAddr);
    if (!page || !page->writable) {
        return;
    }
    
    // Write the value
    uint32_t pageOffset = GetPageOffset(effectiveAddr);
    *reinterpret_cast<uint32_t*>(page->data + pageOffset) = value;
    
    // Invalidate cache
    InvalidateCache(effectiveAddr);
}

uint64_t PPCMemory::ReadMemory64WithContext(PPCContext* ctx, uint32_t address, uint32_t offset) {
    uint32_t effectiveAddr = address + offset;
    uint64_t value = 0;
    
    // Read two 32-bit values
    value = static_cast<uint64_t>(ReadMemory32WithContext(ctx, effectiveAddr)) << 32;
    value |= ReadMemory32WithContext(ctx, effectiveAddr + 4);
    
    return value;
}

void PPCMemory::WriteMemory64WithContext(PPCContext* ctx, uint32_t address, uint64_t value, uint32_t offset) {
    uint32_t effectiveAddr = address + offset;
    
    // Write two 32-bit values
    WriteMemory32WithContext(ctx, effectiveAddr, static_cast<uint32_t>(value >> 32));
    WriteMemory32WithContext(ctx, effectiveAddr + 4, static_cast<uint32_t>(value));
}

uint8_t PPCMemory::ReadMemory8WithContext(PPCContext* ctx, uint32_t address, uint32_t offset) {
    uint32_t effectiveAddr = address + offset;
    
    // Check memory access
    if (!CheckMemoryAccess(effectiveAddr, MemoryAccess::Read)) {
        return 0;
    }
    
    // Get the page
    MemoryPage* page = GetPage(effectiveAddr);
    if (!page) {
        return 0;
    }
    
    // Read the value
    uint32_t pageOffset = GetPageOffset(effectiveAddr);
    return page->data[pageOffset];
}

void PPCMemory::WriteMemory8WithContext(PPCContext* ctx, uint32_t address, uint8_t value, uint32_t offset) {
    MemoryPage* page = GetPage(address + offset);
    if (page && page->writable) {
        uint32_t pageOffset = GetPageOffset(address + offset);
        page->data[pageOffset] = value;
        InvalidateCache(address + offset);
        
        // Call write hooks
        for (const auto& hook : writeHooks) {
            hook(address + offset, 1);
        }
    }
}

uint16_t PPCMemory::ReadMemory16WithContext(PPCContext* ctx, uint32_t address, uint32_t offset) {
    address += offset;
    
    // Check if address is valid
    if (address >= TOTAL_MEMORY_SIZE) {
        printf("Memory access violation: ReadMemory16 at 0x%08X\n", address);
        return 0;
    }
    
    // Call read hooks if any
    for (auto& hook : readHooks) {
        hook(address, 2);
    }
    
    // Read from memory
    uint16_t* ptr = reinterpret_cast<uint16_t*>(&memory[address]);
    return *ptr;
}

void PPCMemory::WriteMemory16WithContext(PPCContext* ctx, uint32_t address, uint16_t value, uint32_t offset) {
    address += offset;
    
    // Check if address is valid
    if (address >= TOTAL_MEMORY_SIZE) {
        printf("Memory access violation: WriteMemory16 at 0x%08X\n", address);
        return;
    }
    
    // Call write hooks if any
    for (auto& hook : writeHooks) {
        hook(address, 2);
    }
    
    // Write to memory
    uint16_t* ptr = reinterpret_cast<uint16_t*>(&memory[address]);
    *ptr = value;
    
    // Invalidate cache
    InvalidateCache(address);
}

bool PPCMemory::CheckMemoryAccess(uint32_t address, MemoryAccess access) {
    uint32_t pageIndex = GetPageIndex(address);
    auto it = pages.find(pageIndex);
    if (it == pages.end()) {
        return false;
    }
    
    int accessFlags = static_cast<int>(access);
    return (accessFlags & static_cast<int>(MemoryAccess::Read)) == 0 || it->second.writable;
}

bool PPCMemory::MapMemory(uint32_t address, size_t size, MemoryAccess access) {
    uint32_t startPage = GetPageIndex(address);
    uint32_t endPage = GetPageIndex(address + size - 1);
    
    bool writable = (static_cast<int>(access) & static_cast<int>(MemoryAccess::Write)) != 0;
    bool executable = (static_cast<int>(access) & static_cast<int>(MemoryAccess::Execute)) != 0;
    
    for (uint32_t pageIndex = startPage; pageIndex <= endPage; pageIndex++) {
        // Skip if page already exists
        if (pages.find(pageIndex) != pages.end()) {
            continue;
        }
        
        // Create new page
        MemoryPage page;
        page.data = new uint8_t[PAGE_SIZE]();
        page.writable = writable;
        page.executable = executable;
        
        pages[pageIndex] = page;
    }
    
    return true;
}

void PPCMemory::UnmapMemory(uint32_t address, size_t size) {
    uint32_t startPage = GetPageIndex(address);
    uint32_t endPage = GetPageIndex(address + size - 1);
    
    for (uint32_t pageIndex = startPage; pageIndex <= endPage; pageIndex++) {
        auto it = pages.find(pageIndex);
        if (it != pages.end()) {
            delete[] it->second.data;
            pages.erase(it);
        }
    }
}

uint32_t PPCMemory::ReadMemory32Cached(uint32_t address) {
    size_t cacheIndex = (address / 4) % CACHE_SIZE;
    auto& entry = cache[cacheIndex];
    
    if (entry.valid && entry.address == address) {
        return entry.value;
    }
    
    // Cache miss - read from memory
    MemoryPage* page = GetPage(address);
    if (!page) {
        return 0;
    }
    
    uint32_t pageOffset = GetPageOffset(address);
    uint32_t value = *reinterpret_cast<uint32_t*>(page->data + pageOffset);
    
    // Update cache
    entry = {address, value, true};
    
    return value;
}

void PPCMemory::InvalidateCache(uint32_t address) {
    size_t cacheIndex = (address / 4) % CACHE_SIZE;
    cache[cacheIndex].valid = false;
}

MemoryPage* PPCMemory::GetPage(uint32_t address, bool allocate) {
    uint32_t pageIndex = GetPageIndex(address);
    auto it = pages.find(pageIndex);
    
    if (it != pages.end()) {
        return &it->second;
    }
    
    if (allocate) {
        MapMemory(address & ~(PAGE_SIZE - 1), PAGE_SIZE);
        return &pages[pageIndex];
    }
    
    return nullptr;
}

void PPCMemory::AddReadHook(MemoryHook hook) {
    readHooks.push_back(std::move(hook));
}

void PPCMemory::AddWriteHook(MemoryHook hook) {
    writeHooks.push_back(std::move(hook));
}

uint32_t MemoryAllocatorHook(PPCContext* ctx) {
    // TODO: Implement memory allocation
    return 0;
} 