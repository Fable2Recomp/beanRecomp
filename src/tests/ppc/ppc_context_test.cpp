#include <gtest/gtest.h>
#include "../../include/ppc/ppc_context.h"

class PPCContextTest : public ::testing::Test {
protected:
    PPCContext ctx;
    
    void SetUp() override {
        ctx.reset();
    }
};

// Test basic context operations
TEST_F(PPCContextTest, BasicOperations) {
    // Test GPR access
    ctx.get_r(0) = PPCRegister(0x12345678);
    EXPECT_EQ(ctx.get_r(0).u32, 0x12345678);
    
    // Test FPR access
    ctx.get_f(0) = PPCRegister(3.14159f);
    EXPECT_NEAR(ctx.get_f(0).f32, 3.14159f, 1e-6f);
    
    // Test VR access
    ctx.get_v(0) = PPCRegister(0xFFFFFFFF);
    EXPECT_EQ(ctx.get_v(0).u32, 0xFFFFFFFF);
}

// Test bounds checking
TEST_F(PPCContextTest, BoundsChecking) {
    // Test GPR bounds
    EXPECT_THROW(ctx.get_r(-1), std::out_of_range);
    EXPECT_THROW(ctx.get_r(32), std::out_of_range);
    
    // Test FPR bounds
    EXPECT_THROW(ctx.get_f(-1), std::out_of_range);
    EXPECT_THROW(ctx.get_f(32), std::out_of_range);
    
    // Test VR bounds
    EXPECT_THROW(ctx.get_v(-1), std::out_of_range);
    EXPECT_THROW(ctx.get_v(32), std::out_of_range);
}

// Test special registers
TEST_F(PPCContextTest, SpecialRegisters) {
    // Test Link Register
    ctx.lr = PPCRegister(0x12345678);
    EXPECT_EQ(ctx.lr.u32, 0x12345678);
    
    // Test Count Register
    ctx.ctr = PPCRegister(0x87654321);
    EXPECT_EQ(ctx.ctr.u32, 0x87654321);
    
    // Test FPSCR
    ctx.fpscr = PPCRegister(0xFFFFFFFF);
    EXPECT_EQ(ctx.fpscr.u32, 0xFFFFFFFF);
}

// Test context validation
TEST_F(PPCContextTest, ContextValidation) {
    // Test valid context
    EXPECT_TRUE(ctx.is_valid());
    
    // Test invalid context (null pointer)
    PPCContext* null_ctx = nullptr;
    EXPECT_THROW(ValidateContext(null_ctx), std::runtime_error);
}

// Test context state management
TEST_F(PPCContextTest, StateManagement) {
    // Set some register values
    ctx.get_r(0) = PPCRegister(0x12345678);
    ctx.get_f(0) = PPCRegister(3.14159f);
    ctx.lr = PPCRegister(0x87654321);
    
    // Test reset
    ctx.reset();
    EXPECT_EQ(ctx.get_r(0).u32, 0);
    EXPECT_EQ(ctx.get_f(0).f32, 0.0f);
    EXPECT_EQ(ctx.lr.u32, 0);
}

// Test memory address translation
TEST_F(PPCContextTest, MemoryAddressTranslation) {
    ctx.memory_base = 0x1000;
    uint32_t addr = 0x1234;
    EXPECT_EQ(ctx.translate_address(addr), 0x2234);
}

// Test register state save/restore
TEST_F(PPCContextTest, StateSaveRestore) {
    // Set up test state
    ctx.get_r(0) = PPCRegister(0x12345678);
    ctx.get_f(0) = PPCRegister(3.14159f);
    ctx.lr = PPCRegister(0x87654321);
    
    // Save state
    uint8_t buffer[1024];
    size_t size;
    ctx.save_state(buffer, size);
    
    // Reset context
    ctx.reset();
    
    // Restore state
    ctx.restore_state(buffer, size);
    
    // Verify restored state
    EXPECT_EQ(ctx.get_r(0).u32, 0x12345678);
    EXPECT_NEAR(ctx.get_f(0).f32, 3.14159f, 1e-6f);
    EXPECT_EQ(ctx.lr.u32, 0x87654321);
}

// Test helper methods for register access
TEST_F(PPCContextTest, RegisterHelperMethods) {
    // Test PPCRegister_u8
    ctx.get_r(0) = PPCRegister(0xFF);
    EXPECT_EQ(ctx.PPCRegister_u8(0), 0xFF);
    
    // Test PPCRegister_u16
    ctx.get_r(1) = PPCRegister(0xFFFF);
    EXPECT_EQ(ctx.PPCRegister_u16(1), 0xFFFF);
    
    // Test PPCRegister_u32
    ctx.get_r(2) = PPCRegister(0xFFFFFFFF);
    EXPECT_EQ(ctx.PPCRegister_u32(2), 0xFFFFFFFF);
    
    // Test PPCRegister_u64
    ctx.get_r(3) = PPCRegister(0xFFFFFFFFFFFFFFFFULL);
    EXPECT_EQ(ctx.PPCRegister_u64(3), 0xFFFFFFFFFFFFFFFFULL);
    
    // Test signed variants
    ctx.get_r(4) = PPCRegister(-1);
    EXPECT_EQ(ctx.PPCRegister_s8(4), -1);
    EXPECT_EQ(ctx.PPCRegister_s16(4), -1);
    EXPECT_EQ(ctx.PPCRegister_s32(4), -1);
    EXPECT_EQ(ctx.PPCRegister_s64(4), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 