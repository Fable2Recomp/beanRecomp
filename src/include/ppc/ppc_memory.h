#pragma once
#ifndef PPC_MEMORY_H_INCLUDED
#define PPC_MEMORY_H_INCLUDED

#include <cstdint>
#include <vector>
#include <memory>
#include <stdexcept>

class PPCMemory {
public:
    static constexpr uint32_t MEMORY_SIZE = 256 * 1024 * 1024; // 256MB
    static constexpr uint32_t PAGE_SIZE = 4 * 1024; // 4KB
    static constexpr uint32_t PAGE_MASK = PAGE_SIZE - 1;
    
    enum Permissions {
        PERM_NONE = 0,
        PERM_READ = 1,
        PERM_WRITE = 2,
        PERM_EXEC = 4
    };
    
    PPCMemory();
    ~PPCMemory();
    
    void reset();
    bool is_valid_address(uint32_t addr, size_t size) const;
    bool map(uint32_t addr, uint32_t size, uint32_t perms);
    bool unmap(uint32_t addr);
    
    // Read functions
    uint8_t read_u8(uint32_t addr) const;
    int8_t read_s8(uint32_t addr) const;
    uint16_t read_u16(uint32_t addr) const;
    int16_t read_s16(uint32_t addr) const;
    uint32_t read_u32(uint32_t addr) const;
    int32_t read_s32(uint32_t addr) const;
    uint64_t read_u64(uint32_t addr) const;
    int64_t read_s64(uint32_t addr) const;
    float read_f32(uint32_t addr) const;
    double read_f64(uint32_t addr) const;
    
    // Write functions
    void write_u8(uint32_t addr, uint8_t value);
    void write_s8(uint32_t addr, int8_t value);
    void write_u16(uint32_t addr, uint16_t value);
    void write_s16(uint32_t addr, int16_t value);
    void write_u32(uint32_t addr, uint32_t value);
    void write_s32(uint32_t addr, int32_t value);
    void write_u64(uint32_t addr, uint64_t value);
    void write_s64(uint32_t addr, int64_t value);
    void write_f32(uint32_t addr, float value);
    void write_f64(uint32_t addr, double value);
    
private:
    struct MemoryMapping {
        uint32_t addr;
        uint32_t size;
        uint32_t perms;
    };
    
    std::vector<uint8_t> m_memory;
    std::vector<MemoryMapping> m_mappings;
};

// Global memory instance
extern PPCMemory* g_Memory;

#endif // PPC_MEMORY_H_INCLUDED 