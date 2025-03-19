#include <gtest/gtest.h>
#include "../../include/ppc/ppc_memory.h"
#include "../../include/ppc/ppc_context.h"

class PPCMemoryTest : public ::testing::Test {
protected:
    PPCMemory memory;
    PPCContext ctx;
    
    void SetUp() override {
        memory.reset();
        ctx.reset();
    }
};

// Test basic memory operations
TEST_F(PPCMemoryTest, BasicOperations) {
    // Test 8-bit operations
    memory.write_u8(0x1000, 0xFF);
    EXPECT_EQ(memory.read_u8(0x1000), 0xFF);
    
    memory.write_s8(0x1001, -1);
    EXPECT_EQ(memory.read_s8(0x1001), -1);
    
    // Test 16-bit operations
    memory.write_u16(0x1002, 0xFFFF);
    EXPECT_EQ(memory.read_u16(0x1002), 0xFFFF);
    
    memory.write_s16(0x1004, -1);
    EXPECT_EQ(memory.read_s16(0x1004), -1);
    
    // Test 32-bit operations
    memory.write_u32(0x1006, 0xFFFFFFFF);
    EXPECT_EQ(memory.read_u32(0x1006), 0xFFFFFFFF);
    
    memory.write_s32(0x100A, -1);
    EXPECT_EQ(memory.read_s32(0x100A), -1);
    
    // Test 64-bit operations
    memory.write_u64(0x100E, 0xFFFFFFFFFFFFFFFFULL);
    EXPECT_EQ(memory.read_u64(0x100E), 0xFFFFFFFFFFFFFFFFULL);
    
    memory.write_s64(0x1016, -1LL);
    EXPECT_EQ(memory.read_s64(0x1016), -1LL);
}

// Test floating point operations
TEST_F(PPCMemoryTest, FloatingPointOperations) {
    // Test single precision
    memory.write_f32(0x2000, 3.14159f);
    EXPECT_NEAR(memory.read_f32(0x2000), 3.14159f, 1e-6f);
    
    // Test double precision
    memory.write_f64(0x2004, 3.14159265359);
    EXPECT_NEAR(memory.read_f64(0x2004), 3.14159265359, 1e-12);
}

// Test memory alignment
TEST_F(PPCMemoryTest, MemoryAlignment) {
    // Test unaligned access
    memory.write_u32(0x1001, 0x12345678);
    EXPECT_EQ(memory.read_u32(0x1001), 0x12345678);
    
    // Test aligned access
    memory.write_u32(0x1004, 0x87654321);
    EXPECT_EQ(memory.read_u32(0x1004), 0x87654321);
}

// Test memory bounds
TEST_F(PPCMemoryTest, MemoryBounds) {
    // Test valid addresses
    EXPECT_TRUE(memory.is_valid_address(0x1000, 1));
    EXPECT_TRUE(memory.is_valid_address(0x1000, 2));
    EXPECT_TRUE(memory.is_valid_address(0x1000, 4));
    EXPECT_TRUE(memory.is_valid_address(0x1000, 8));
    
    // Test invalid addresses
    EXPECT_FALSE(memory.is_valid_address(0xFFFFFFFF, 1));
    EXPECT_FALSE(memory.is_valid_address(0x1000, 0xFFFFFFFF));
}

// Test memory mapping
TEST_F(PPCMemoryTest, MemoryMapping) {
    // Test mapping valid region
    EXPECT_TRUE(memory.map(0x1000, 0x1000, PPCMemory::PERM_READ | PPCMemory::PERM_WRITE));
    
    // Test mapping overlapping region
    EXPECT_FALSE(memory.map(0x1500, 0x1000, PPCMemory::PERM_READ | PPCMemory::PERM_WRITE));
    
    // Test unmapping
    EXPECT_TRUE(memory.unmap(0x1000));
}

// Test memory permissions
TEST_F(PPCMemoryTest, MemoryPermissions) {
    // Map read-only region
    memory.map(0x1000, 0x1000, PPCMemory::PERM_READ);
    
    // Test read access
    memory.write_u32(0x1000, 0x12345678);
    EXPECT_EQ(memory.read_u32(0x1000), 0x12345678);
    
    // Test write access (should fail)
    EXPECT_THROW(memory.write_u32(0x1000, 0x87654321), std::runtime_error);
}

// Test memory access through context
TEST_F(PPCMemoryTest, ContextMemoryAccess) {
    // Test memory access functions
    WriteMemory32(&ctx, 0x1000, 0x12345678);
    EXPECT_EQ(ReadMemory32(&ctx, 0x1000), 0x12345678);
    
    // Test array access
    WriteMemory32(&ctx, 0x1004, 0x87654321);
    EXPECT_EQ(ReadMemory32(&ctx, 0x1004), 0x87654321);
}

// Test memory access safety
TEST_F(PPCMemoryTest, MemoryAccessSafety) {
    // Test null context
    EXPECT_THROW(ReadMemory32(nullptr, 0x1000), std::runtime_error);
    EXPECT_THROW(WriteMemory32(nullptr, 0x1000, 0x12345678), std::runtime_error);
    
    // Test invalid address
    EXPECT_THROW(ReadMemory32(&ctx, 0xFFFFFFFF), std::runtime_error);
    EXPECT_THROW(WriteMemory32(&ctx, 0xFFFFFFFF, 0x12345678), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 