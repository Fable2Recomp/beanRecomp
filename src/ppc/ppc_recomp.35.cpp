#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823A4BA8) PPC_WEAK_FUNC(sub_823A4BA8);
PPC_FUNC_IMPL(__imp__sub_823A4BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,228(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,232(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A4BC0) PPC_WEAK_FUNC(sub_823A4BC0);
PPC_FUNC_IMPL(__imp__sub_823A4BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,236(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,240(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A4BD8) PPC_WEAK_FUNC(sub_823A4BD8);
PPC_FUNC_IMPL(__imp__sub_823A4BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,18908
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 18908;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x823a4c44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A4C44;
	// bl 0x8240fc1c
	__imp__KeTlsAlloc(ctx, base);
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r31.u64;
loc_823A4C08:
	// mfmsr ctx_arrow(ctx)->r10
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r11,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823a4c2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A4C2C;
	// stwcx. ctx_arrow(ctx)->r3,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r3.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r10,1
	// bne 0x823a4c08
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823A4C08;
	// b 0x823a4c34
	goto loc_823A4C34;
loc_823A4C2C:
	// stwcx. ctx_arrow(ctx)->r11,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r11.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r10,1
loc_823A4C34:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823a4c44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A4C44;
	// bl 0x8240fc2c
	__imp__KeTlsFree(ctx, base);
loc_823A4C44:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823A4C60) PPC_WEAK_FUNC(sub_823A4C60);
PPC_FUNC_IMPL(__imp__sub_823A4C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823a4bd8
	sub_823A4BD8(ctx, base);
	// bl 0x8240fbfc
	__imp__KeTlsGetValue(ctx, base);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823A4C98) PPC_WEAK_FUNC(sub_823A4C98);
PPC_FUNC_IMPL(__imp__sub_823A4C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823a51f8
	sub_823A51F8(&ctx);
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-31072
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -31072;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// lwz ctx_arrow(ctx)->r4,13356(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823a5630
	sub_823A5630(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823A4CD0) PPC_WEAK_FUNC(sub_823A4CD0);
PPC_FUNC_IMPL(__imp__sub_823A4CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823a4d20
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823A4D20;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823A4CF4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218de00
	sub_8218DE00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4cf4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4CF4;
loc_823A4D20:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823a4d60
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823A4D60;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823A4D34:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218e3c8
	sub_8218E3C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4d34
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4D34;
loc_823A4D60:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823a4da0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823A4DA0;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823A4D74:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218dff8
	sub_8218DFF8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4d74
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4D74;
loc_823A4DA0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823A4DA8) PPC_WEAK_FUNC(sub_823A4DA8);
PPC_FUNC_IMPL(__imp__sub_823A4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823a4e08
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823A4E08;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823A4DCC:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218de00
	sub_8218DE00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218dff8
	sub_8218DFF8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4dcc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4DCC;
loc_823A4E08:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823A4E18) PPC_WEAK_FUNC(sub_823A4E18);
PPC_FUNC_IMPL(__imp__sub_823A4E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823a4e60
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823A4E60;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823A4E3C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219b708
	sub_8219B708(ctx, base);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4e3c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4E3C;
loc_823A4E60:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823A4E68) PPC_WEAK_FUNC(sub_823A4E68);
PPC_FUNC_IMPL(__imp__sub_823A4E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4edc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4EDC;
	// beq ctx_arrow(ctx)->r6,0x823a4eb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A4EB8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4edc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4EDC;
	// bne ctx_arrow(ctx)->r6,0x823a4ee8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A4EE8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82193078
	sub_82193078(ctx, base);
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82193108
	sub_82193108(ctx, base);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// b 0x823a4ed4
	goto loc_823A4ED4;
loc_823A4EB8:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82193078
	sub_82193078(ctx, base);
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82193108
	sub_82193108(ctx, base);
	// li ctx_arrow(ctx)->r4,7
	ctx_arrow(ctx)->r4.s64 = 7;
loc_823A4ED4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82193198
	sub_82193198(ctx, base);
loc_823A4EDC:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82192fb0
	sub_82192FB0(ctx, base);
loc_823A4EE8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823A4F00) PPC_WEAK_FUNC(sub_823A4F00);
PPC_FUNC_IMPL(__imp__sub_823A4F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed11c
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a4f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A4F24;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// b 0x823a4f44
	goto loc_823A4F44;
loc_823A4F24:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a4f40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A4F40;
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a4f44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A4F44;
loc_823A4F40:
	// lwz ctx_arrow(ctx)->r21,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r21.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_823A4F44:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6,4,0,27
	ctx_arrow(ctx)->r24.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823a4e68
	sub_823A4E68(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218de38
	sub_8218DE38(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r24.u64;
	// rldicr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,63,63
	ctx_arrow(ctx)->r25.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 8);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a5004
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5004;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
loc_823A4F94:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 20;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,376
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 376;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,30,2,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,4,0,27
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lfs f0,4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 6020, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 6024, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 6028, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r9.s64;
	// ld ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// srad ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	temp.u64 = ctx_arrow(ctx)->r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx_arrow(ctx)->r25.s64 < 0) & (((ctx_arrow(ctx)->r25.s64 >> temp.u64) << temp.u64) != ctx_arrow(ctx)->r25.s64);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r25.s64 >> temp.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lhz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 8);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a4f94
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A4F94;
loc_823A5004:
	// lhz ctx_arrow(ctx)->r11,10(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 10);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a51a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A51A8;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,1152
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 1152;
	// lis ctx_arrow(ctx)->r22,-31988
	ctx_arrow(ctx)->r22.s64 = -2096365568;
loc_823A5020:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 65535, xer);
	// bge ctx_arrow(ctx)->r6,0x823a5048
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823A5048;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8239a600
	sub_8239A600(ctx, base);
	// b 0x823a5070
	goto loc_823A5070;
loc_823A5048:
	// lwz ctx_arrow(ctx)->r11,-30972(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a5068
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A5068;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a5070
	goto loc_823A5070;
loc_823A5068:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
loc_823A5070:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 32;
	// lwz ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// srd ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r25.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8218be00
	sub_8218BE00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lbz ctx_arrow(ctx)->r11,26(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,10,19,21
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 10) & 0x1C00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r26.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r11,27(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,13,16,18
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 13) & 0xE000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r26.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16,13,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 16) & 0x70000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r26.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// bl 0x82194e68
	sub_82194E68(&ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r5,30(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82194898
	sub_82194898(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r11,31(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,23,7,8
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 23) & 0x1800000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r26.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r5,30(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82194a28
	sub_82194A28(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82194dc8
	sub_82194DC8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r5,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82194ca8
	sub_82194CA8(ctx, base);
	// lhz ctx_arrow(ctx)->r11,10(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 10);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,24
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 24;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,36
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 36;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a5020
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A5020;
loc_823A51A8:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218e0f0
	sub_8218E0F0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
}

alias(__imp__sub_823A51C8) PPC_WEAK_FUNC(sub_823A51C8);
PPC_FUNC_IMPL(__imp__sub_823A51C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// lwz ctx_arrow(ctx)->r11,-30968(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A51D8) PPC_WEAK_FUNC(sub_823A51D8);
PPC_FUNC_IMPL(__imp__sub_823A51D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// lwz ctx_arrow(ctx)->r11,-30964(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A51E8) PPC_WEAK_FUNC(sub_823A51E8);
PPC_FUNC_IMPL(__imp__sub_823A51E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// lwz ctx_arrow(ctx)->r11,-30960(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A51F8) PPC_WEAK_FUNC(sub_823A51F8);
PPC_FUNC_IMPL(__imp__sub_823A51F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-30968
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -30968;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a53b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A53B4;
	// lis ctx_arrow(ctx)->r11,6184
	ctx_arrow(ctx)->r11.s64 = 405274624;
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,390
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | 390;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x8218bad8
	sub_8218BAD8(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8218baa8
	sub_8218BAA8(ctx, base);
	// lis ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -65536;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,255
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 255;
	// li ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = 16;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823A5270:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823a5270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5270;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addze ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r4.s64 = temp.s64;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stw ctx_arrow(ctx)->r30,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r8.s64 = 16;
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r5.s64 = 4;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// bl 0x823006e8
	sub_823006E8(&ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218a1b0
	sub_8218A1B0(ctx, base);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x8218bad8
	sub_8218BAD8(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8218baa8
	sub_8218BAA8(ctx, base);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
loc_823A5314:
	// std ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// bdnz 0x823a5314
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5314;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// li ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r8.s64 = 16;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r5.s64 = 4;
	// addze ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r4.s64 = temp.s64;
	// bl 0x823006e8
	sub_823006E8(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218a1b0
	sub_8218A1B0(ctx, base);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x8218bad8
	sub_8218BAD8(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8218baa8
	sub_8218BAA8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,255
	ctx_arrow(ctx)->r4.s64 = 255;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8218a1b0
	sub_8218A1B0(ctx, base);
loc_823A53B4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823A53C0) PPC_WEAK_FUNC(sub_823A53C0);
PPC_FUNC_IMPL(__imp__sub_823A53C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30956
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30956;
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A53D0) PPC_WEAK_FUNC(sub_823A53D0);
PPC_FUNC_IMPL(__imp__sub_823A53D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30956
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30956;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A53E0) PPC_WEAK_FUNC(sub_823A53E0);
PPC_FUNC_IMPL(__imp__sub_823A53E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// stw ctx_arrow(ctx)->r3,-30956(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -30956, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A53F0) PPC_WEAK_FUNC(sub_823A53F0);
PPC_FUNC_IMPL(__imp__sub_823A53F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x8226adf8
	sub_8226ADF8(ctx, base);
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823A5430) PPC_WEAK_FUNC(sub_823A5430);
PPC_FUNC_IMPL(__imp__sub_823A5430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-23144
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -23144;
loc_823A543C:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x823a5460
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5460;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a543c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A543C;
loc_823A5460:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x823a5474
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823A5474;
	// lis ctx_arrow(ctx)->r11,-32198
	ctx_arrow(ctx)->r11.s64 = -2110128128;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,21488
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 21488;
	// b 0x823a5478
	goto loc_823A5478;
loc_823A5474:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823A5478:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A5480) PPC_WEAK_FUNC(sub_823A5480);
PPC_FUNC_IMPL(__imp__sub_823A5480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 29, xer);
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-30956
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -30956;
	// beq ctx_arrow(ctx)->r6,0x823a5558
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A5558;
loc_823A54B4:
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x823a5544
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A5544;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8232b120
	sub_8232B120(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823a5544
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823A5544;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ade00
	sub_823ADE00(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823ade48
	sub_823ADE48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a5514
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A5514;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// b 0x823a5528
	goto loc_823A5528;
loc_823A5514:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a5534
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A5534;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
loc_823A5528:
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A5534:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_823A5544:
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 0);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 29, xer);
	// bne ctx_arrow(ctx)->r6,0x823a54b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A54B4;
loc_823A5558:
	// lhz ctx_arrow(ctx)->r11,34(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r27.u32 + 34);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a5624
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5624;
loc_823A556C:
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a5610
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A5610;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a5598
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A5598;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// b 0x823a55ac
	goto loc_823A55AC;
loc_823A5598:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a55d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A55D0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
loc_823A55AC:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a5600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A5600;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a5600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A5600;
loc_823A55D0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a55f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A55F4;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mtctr ctx_arrow(ctx)->r25
	ctr.u64 = ctx_arrow(ctx)->r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823a5600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823A5600;
loc_823A55F4:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823a5430
	sub_823A5430(ctx, base);
loc_823A5600:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_823A5610:
	// lhz ctx_arrow(ctx)->r11,34(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r27.u32 + 34);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,20
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 20;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a556c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A556C;
loc_823A5624:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823A5630) PPC_WEAK_FUNC(sub_823A5630);
PPC_FUNC_IMPL(__imp__sub_823A5630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A5650) PPC_WEAK_FUNC(sub_823A5650);
PPC_FUNC_IMPL(__imp__sub_823A5650) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A5658) PPC_WEAK_FUNC(sub_823A5658);
PPC_FUNC_IMPL(__imp__sub_823A5658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31988
	ctx_arrow(ctx)->r11.s64 = -2096365568;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-30956
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -30956;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823a567c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823A567C;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_823A567C:
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823A5698) PPC_WEAK_FUNC(sub_823A5698);
PPC_FUNC_IMPL(__imp__sub_823A5698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823A56A0) PPC_WEAK_FUNC(sub_823A56A0);
PPC_FUNC_IMPL(__imp__sub_823A56A0) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,92(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823A56A8) PPC_WEAK_FUNC(sub_823A56A8);
PPC_FUNC_IMPL(__imp__sub_823A56A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lhz ctx_arrow(ctx)->r10,34(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 34);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823a5738
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5738;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_823A56D4:
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a5700
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5700;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lhz ctx_arrow(ctx)->r6,10(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 10);
	// lhz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a5724
	goto loc_823A5724;
loc_823A5700:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823a5724
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823A5724;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r5,10(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 10);
	// lhz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A5724:
	// lhz ctx_arrow(ctx)->r11,34(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 34);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,20
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 20;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823a56d4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823A56D4;
loc_823A5738:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823A5740) PPC_WEAK_FUNC(sub_823A5740);
PPC_FUNC_IMPL(__imp__sub_823A5740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx.u8)->r1,-64
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -64;
	// bl 0x823ed584
	// b 0x823ed17c
	return;
}

