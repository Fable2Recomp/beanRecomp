#include <gtest/gtest.h>
#include "../../include/ppc/ppc_register.h"

class PPCRegisterTest : public ::testing::Test {
protected:
    PPCRegister reg;
    
    void SetUp() override {
        reg.clear();
    }
};

// Test basic register operations
TEST_F(PPCRegisterTest, BasicOperations) {
    // Test 8-bit operations
    reg.u8 = 0xFF;
    EXPECT_EQ(reg.u8, 0xFF);
    EXPECT_EQ(reg.s8, -1);
    
    // Test 16-bit operations
    reg.u16 = 0xFFFF;
    EXPECT_EQ(reg.u16, 0xFFFF);
    EXPECT_EQ(reg.s16, -1);
    
    // Test 32-bit operations
    reg.u32 = 0xFFFFFFFF;
    EXPECT_EQ(reg.u32, 0xFFFFFFFF);
    EXPECT_EQ(reg.s32, -1);
    
    // Test 64-bit operations
    reg.u64 = 0xFFFFFFFFFFFFFFFF;
    EXPECT_EQ(reg.u64, 0xFFFFFFFFFFFFFFFF);
    EXPECT_EQ(reg.s64, -1);
}

// Test type-safe constructors
TEST_F(PPCRegisterTest, TypeSafeConstructors) {
    // Test uint8_t constructor
    PPCRegister reg1(static_cast<uint8_t>(0xFF));
    EXPECT_EQ(reg1.u8, 0xFF);
    
    // Test int8_t constructor
    PPCRegister reg2(static_cast<int8_t>(-1));
    EXPECT_EQ(reg2.s8, -1);
    
    // Test uint16_t constructor
    PPCRegister reg3(static_cast<uint16_t>(0xFFFF));
    EXPECT_EQ(reg3.u16, 0xFFFF);
    
    // Test int16_t constructor
    PPCRegister reg4(static_cast<int16_t>(-1));
    EXPECT_EQ(reg4.s16, -1);
    
    // Test uint32_t constructor
    PPCRegister reg5(0xFFFFFFFF);
    EXPECT_EQ(reg5.u32, 0xFFFFFFFF);
    
    // Test int32_t constructor
    PPCRegister reg6(-1);
    EXPECT_EQ(reg6.s32, -1);
    
    // Test uint64_t constructor
    PPCRegister reg7(0xFFFFFFFFFFFFFFFFULL);
    EXPECT_EQ(reg7.u64, 0xFFFFFFFFFFFFFFFFULL);
    
    // Test int64_t constructor
    PPCRegister reg8(-1LL);
    EXPECT_EQ(reg8.s64, -1);
}

// Test comparison operations
TEST_F(PPCRegisterTest, ComparisonOperations) {
    PPCXERRegister xer;
    
    // Test unsigned comparisons
    reg.u32 = 5;
    reg.compare(3, xer);
    EXPECT_TRUE(reg.gt());
    EXPECT_FALSE(reg.lt());
    EXPECT_FALSE(reg.eq());
    
    reg.u32 = 3;
    reg.compare(5, xer);
    EXPECT_FALSE(reg.gt());
    EXPECT_TRUE(reg.lt());
    EXPECT_FALSE(reg.eq());
    
    reg.u32 = 5;
    reg.compare(5, xer);
    EXPECT_FALSE(reg.gt());
    EXPECT_FALSE(reg.lt());
    EXPECT_TRUE(reg.eq());
    
    // Test signed comparisons
    reg.s32 = -5;
    reg.compare(-3, xer);
    EXPECT_FALSE(reg.gt());
    EXPECT_TRUE(reg.lt());
    EXPECT_FALSE(reg.eq());
    
    reg.s32 = -3;
    reg.compare(-5, xer);
    EXPECT_TRUE(reg.gt());
    EXPECT_FALSE(reg.lt());
    EXPECT_FALSE(reg.eq());
    
    reg.s32 = -5;
    reg.compare(-5, xer);
    EXPECT_FALSE(reg.gt());
    EXPECT_FALSE(reg.lt());
    EXPECT_TRUE(reg.eq());
}

// Test type conversion safety
TEST_F(PPCRegisterTest, TypeConversionSafety) {
    // Test as<T>() method
    reg.u32 = 0xFFFFFFFF;
    EXPECT_EQ(reg.as<uint8_t>(), 0xFF);
    EXPECT_EQ(reg.as<int8_t>(), -1);
    EXPECT_EQ(reg.as<uint16_t>(), 0xFFFF);
    EXPECT_EQ(reg.as<int16_t>(), -1);
    EXPECT_EQ(reg.as<uint32_t>(), 0xFFFFFFFF);
    EXPECT_EQ(reg.as<int32_t>(), -1);
    
    // Test floating point conversions
    reg.f32 = 3.14159f;
    EXPECT_NEAR(reg.as<float>(), 3.14159f, 1e-6f);
    
    reg.f64 = 3.14159265359;
    EXPECT_NEAR(reg.as<double>(), 3.14159265359, 1e-12);
}

// Test CR register operations
TEST_F(PPCRegisterTest, CRRegisterOperations) {
    PPCCRRegister cr;
    
    // Test field operations
    cr.set_field(0, 0xF);
    EXPECT_EQ(cr.get_field(0), 0xF);
    
    cr.set_field(1, 0xA);
    EXPECT_EQ(cr.get_field(1), 0xA);
    
    // Test bit operations
    cr.set_lt(true);
    EXPECT_TRUE(cr.lt());
    
    cr.set_gt(true);
    EXPECT_TRUE(cr.gt());
    
    cr.set_eq(true);
    EXPECT_TRUE(cr.eq());
    
    cr.set_so(true);
    EXPECT_TRUE(cr.so());
}

// Test XER register operations
TEST_F(PPCRegisterTest, XERRegisterOperations) {
    PPCXERRegister xer;
    
    // Test bit operations
    xer.set_so(true);
    EXPECT_TRUE(xer.so());
    
    xer.set_ov(true);
    EXPECT_TRUE(xer.ov());
    
    xer.set_ca(true);
    EXPECT_TRUE(xer.ca());
    
    // Test byte count
    xer.set_byte_count(0x7F);
    EXPECT_EQ(xer.byte_count(), 0x7F);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 