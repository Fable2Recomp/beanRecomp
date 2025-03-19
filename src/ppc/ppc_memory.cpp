#include "../include/ppc/ppc_memory.h"
#include "../include/ppc/ppc_context.h"
#include "../include/ppc/ppc_types.h"
#include <cstdio>
#include <cstring>
#include <stdexcept>

// Global memory instance (defined in main.cpp)
extern PPCMemory* g_Memory;

PPCMemory::PPCMemory() : m_memory(MEMORY_SIZE) {
    reset();
}

PPCMemory::~PPCMemory() = default;

void PPCMemory::reset() {
    std::fill(m_memory.begin(), m_memory.end(), 0);
    m_mappings.clear();
}

bool PPCMemory::is_valid_address(uint32_t addr, size_t size) const {
    return addr + size <= MEMORY_SIZE;
}

bool PPCMemory::map(uint32_t addr, uint32_t size, uint32_t perms) {
    if (!is_valid_address(addr, size)) {
        return false;
    }
    
    // Check for overlapping mappings
    for (const auto& mapping : m_mappings) {
        if (addr < mapping.addr + mapping.size && addr + size > mapping.addr) {
            return false;
        }
    }
    
    m_mappings.push_back({addr, size, perms});
    return true;
}

bool PPCMemory::unmap(uint32_t addr) {
    for (auto it = m_mappings.begin(); it != m_mappings.end(); ++it) {
        if (it->addr == addr) {
            m_mappings.erase(it);
            return true;
        }
    }
    return false;
}

uint8_t PPCMemory::read_u8(uint32_t addr) const {
    if (!is_valid_address(addr, sizeof(uint8_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    return m_memory[addr];
}

int8_t PPCMemory::read_s8(uint32_t addr) const {
    return static_cast<int8_t>(read_u8(addr));
}

uint16_t PPCMemory::read_u16(uint32_t addr) const {
    if (!is_valid_address(addr, sizeof(uint16_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    return (m_memory[addr] << 8) | m_memory[addr + 1];
}

int16_t PPCMemory::read_s16(uint32_t addr) const {
    return static_cast<int16_t>(read_u16(addr));
}

uint32_t PPCMemory::read_u32(uint32_t addr) const {
    if (!is_valid_address(addr, sizeof(uint32_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    return (m_memory[addr] << 24) | (m_memory[addr + 1] << 16) |
           (m_memory[addr + 2] << 8) | m_memory[addr + 3];
}

int32_t PPCMemory::read_s32(uint32_t addr) const {
    return static_cast<int32_t>(read_u32(addr));
}

uint64_t PPCMemory::read_u64(uint32_t addr) const {
    if (!is_valid_address(addr, sizeof(uint64_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    return (static_cast<uint64_t>(read_u32(addr)) << 32) | read_u32(addr + 4);
}

int64_t PPCMemory::read_s64(uint32_t addr) const {
    return static_cast<int64_t>(read_u64(addr));
}

float PPCMemory::read_f32(uint32_t addr) const {
    uint32_t bits = read_u32(addr);
    return *reinterpret_cast<const float*>(&bits);
}

double PPCMemory::read_f64(uint32_t addr) const {
    uint64_t bits = read_u64(addr);
    return *reinterpret_cast<const double*>(&bits);
}

void PPCMemory::write_u8(uint32_t addr, uint8_t value) {
    if (!is_valid_address(addr, sizeof(uint8_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    m_memory[addr] = value;
}

void PPCMemory::write_s8(uint32_t addr, int8_t value) {
    write_u8(addr, static_cast<uint8_t>(value));
}

void PPCMemory::write_u16(uint32_t addr, uint16_t value) {
    if (!is_valid_address(addr, sizeof(uint16_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    m_memory[addr] = value >> 8;
    m_memory[addr + 1] = value & 0xFF;
}

void PPCMemory::write_s16(uint32_t addr, int16_t value) {
    write_u16(addr, static_cast<uint16_t>(value));
}

void PPCMemory::write_u32(uint32_t addr, uint32_t value) {
    if (!is_valid_address(addr, sizeof(uint32_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    m_memory[addr] = value >> 24;
    m_memory[addr + 1] = (value >> 16) & 0xFF;
    m_memory[addr + 2] = (value >> 8) & 0xFF;
    m_memory[addr + 3] = value & 0xFF;
}

void PPCMemory::write_s32(uint32_t addr, int32_t value) {
    write_u32(addr, static_cast<uint32_t>(value));
}

void PPCMemory::write_u64(uint32_t addr, uint64_t value) {
    if (!is_valid_address(addr, sizeof(uint64_t))) {
        throw std::runtime_error("Invalid memory access");
    }
    write_u32(addr, value >> 32);
    write_u32(addr + 4, value & 0xFFFFFFFF);
}

void PPCMemory::write_s64(uint32_t addr, int64_t value) {
    write_u64(addr, static_cast<uint64_t>(value));
}

void PPCMemory::write_f32(uint32_t addr, float value) {
    uint32_t bits = *reinterpret_cast<const uint32_t*>(&value);
    write_u32(addr, bits);
}

void PPCMemory::write_f64(uint32_t addr, double value) {
    uint64_t bits = *reinterpret_cast<const uint64_t*>(&value);
    write_u64(addr, bits);
}

// Initialize memory system
void InitializeMemory() {
    if (!g_Memory) {
        g_Memory = new PPCMemory();
    }
}

// Cleanup memory system
void CleanupMemory() {
    if (g_Memory) {
        delete g_Memory;
        g_Memory = nullptr;
    }
} 