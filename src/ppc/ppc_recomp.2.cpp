#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_820B2D60) PPC_WEAK_FUNC(sub_820B2D60);
PPC_FUNC_IMPL(__imp__sub_820B2D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x820eb800
	sub_820EB800(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2db8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2DB8;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2db8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2DB8;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2dd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2DD4;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8528(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2dd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2DD4;
loc_820B2DA4:
	// li ctx_arrow(ctx)->r3,161
	ctx_arrow(ctx)->r3.s64 = 161;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_820B2DB8:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8528(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2da4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2DA4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2da4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2DA4;
loc_820B2DD4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_820B2DE8) PPC_WEAK_FUNC(sub_820B2DE8);
PPC_FUNC_IMPL(__imp__sub_820B2DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x820eb800
	sub_820EB800(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2ed4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2ED4;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2ed4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2ED4;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2ed4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2ED4;
	// bl 0x820ae360
	sub_820AE360(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,54
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 54, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2e38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2E38;
	// li ctx_arrow(ctx)->r3,330
	ctx_arrow(ctx)->r3.s64 = 330;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_820B2E38:
	// bl 0x820c30e8
	sub_820C30E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2e7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2E7C;
	// bl 0x820b1940
	sub_820B1940(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,14100(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,180
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 180;
	ctx_arrow(ctx)->r11.s64 = 180 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_820B2E7C:
	// bl 0x820c30e8
	sub_820C30E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2ec0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2EC0;
	// bl 0x820b1940
	sub_820B1940(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,15144(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,136
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 136;
	ctx_arrow(ctx)->r11.s64 = 136 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_820B2EC0:
	// li ctx_arrow(ctx)->r3,240
	ctx_arrow(ctx)->r3.s64 = 240;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_820B2ED4:
	// li ctx_arrow(ctx)->r3,119
	ctx_arrow(ctx)->r3.s64 = 119;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_820B2EE8) PPC_WEAK_FUNC(sub_820B2EE8);
PPC_FUNC_IMPL(__imp__sub_820B2EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8528(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2f24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2F24;
loc_820B2F0C:
	// li ctx_arrow(ctx)->r3,1000
	ctx_arrow(ctx)->r3.s64 = 1000;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820B2F24:
	// bl 0x820ebb98
	sub_820EBB98(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2F78;
	// bl 0x82160588
	sub_82160588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2F78;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2F78;
	// lwz ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2F78;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b2f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B2F78;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2f0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2F0C;
loc_820B2F78:
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2fac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2FAC;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8528(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,121
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 & 121;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820B2FAC:
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3078
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3078;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3078
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3078;
	// bl 0x820ae360
	sub_820AE360(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,54
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 54, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2fe8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2FE8;
loc_820B2FD0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820B2FE8:
	// bl 0x820c30e8
	sub_820C30E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3030
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3030;
	// bl 0x820b1940
	sub_820B1940(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,3112(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 30;
	ctx_arrow(ctx)->r11.s64 = 30 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820B3030:
	// bl 0x820c30e8
	sub_820C30E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820b2fd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B2FD0;
	// bl 0x820b1940
	sub_820B1940(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,15148(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,52
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 52;
	ctx_arrow(ctx)->r11.s64 = 52 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820B3078:
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,8528(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b3090
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B3090;
	// li ctx_arrow(ctx)->r3,121
	ctx_arrow(ctx)->r3.s64 = 121;
loc_820B3090:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_820B30A8) PPC_WEAK_FUNC(sub_820B30A8);
PPC_FUNC_IMPL(__imp__sub_820B30A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x820eb800
	sub_820EB800(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x820b30d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B30D0;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x820b30d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B30D4;
loc_820B30D0:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820B30D4:
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_820B30E8) PPC_WEAK_FUNC(sub_820B30E8);
PPC_FUNC_IMPL(__imp__sub_820B30E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,184
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 184;
	// bl 0x821184c0
	sub_821184C0(ctx, base);
	// lwz ctx_arrow(ctx)->r10,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32123
	ctx_arrow(ctx)->r11.s64 = -2105212928;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f13,184(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32576(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,208(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 208, ctx_arrow(ctx)->r4.u32);
	// lfs f13,188(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32576(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,212(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 212, ctx_arrow(ctx)->r4.u32);
	// lfs f13,192(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32576(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,216(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 216, ctx_arrow(ctx)->r4.u32);
	// bl 0x82118490
	sub_82118490(&ctx);
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

alias(__imp__sub_820B3168) PPC_WEAK_FUNC(sub_820B3168);
PPC_FUNC_IMPL(__imp__sub_820B3168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x82345d68
	sub_82345D68(ctx, base);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r30,-32014
	ctx_arrow(ctx)->r30.s64 = -2098069504;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b31c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B31C4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B31C4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3228
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3228;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3220
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3220;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3220
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3220;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 7, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3220
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3220;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3218
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3218;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3220
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3220;
loc_820B3218:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x820b3224
	goto loc_820B3224;
loc_820B3220:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820B3224:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B3228:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 2;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b327c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B327C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3274
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3274;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x820b326c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B326C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3274
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3274;
loc_820B326C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x820b3278
	goto loc_820B3278;
loc_820B3274:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820B3278:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B327C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 3;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b32b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B32B4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B32B4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b32f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B32F0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B32F0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 5;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b332c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B332C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1348(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B332C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820B3338) PPC_WEAK_FUNC(sub_820B3338);
PPC_FUNC_IMPL(__imp__sub_820B3338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-304(ctx_arrow(ctx)->r1)
	ea = -304 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r4.s64 = 46;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,5000
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 5000;
	// lfs f1,504(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820c90d0
	sub_820C90D0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = -1;
	// li ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r4.s64 = 46;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,6288
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 6288;
	// lfs f1,500(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820c90d0
	sub_820C90D0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfs f6,14108(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f5,15168(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f4,15164(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f3,15160(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f3.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f2,15156(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,15152(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8238b608
	sub_8238B608(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f9,6580(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f8,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f2,14052(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// bl 0x8210bf20
	sub_8210BF20(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x8210be08
	sub_8210BE08(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,46
	ctx_arrow(ctx)->r6.s64 = 46;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,6288
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 6288;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82098a20
	sub_82098A20(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,46
	ctx_arrow(ctx)->r6.s64 = 46;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,5000
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 5000;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82098a20
	sub_82098A20(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,304
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 304;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_820B3440) PPC_WEAK_FUNC(sub_820B3440);
PPC_FUNC_IMPL(__imp__sub_820B3440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed108
	// stfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -144);
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x820ae360
	sub_820AE360(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,54
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 54, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3864
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3864;
	// lis ctx_arrow(ctx)->r30,-32014
	ctx_arrow(ctx)->r30.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1848(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3864
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3864;
	// lis ctx_arrow(ctx)->r23,-32014
	ctx_arrow(ctx)->r23.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3864
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3864;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// li ctx_arrow(ctx)->r21,-1
	ctx_arrow(ctx)->r21.s64 = -1;
	// lwz ctx_arrow(ctx)->r11,4204(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b34ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B34AC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r21.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820a0548
	sub_820A0548(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b34ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B34AC;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r11,-1848(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + -1848, ctx_arrow(ctx)->r4.u32);
loc_820B34AC:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r17,220
	ctx_arrow(ctx)->r17.s64 = 220;
	// li ctx_arrow(ctx)->r18,220
	ctx_arrow(ctx)->r18.s64 = 220;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r10,-1852(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r31,-1852(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -1852, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e218
	sub_8210E218(&ctx);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r11.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 4;
	// addze ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r10.s64 = temp.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	xer.ca = (ctx_arrow(ctx)->r31.s32 < 0) & ((ctx_arrow(ctx)->r31.u32 & 0xF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s32 >> 4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// addi ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bge ctx_arrow(ctx)->r6,0x820b34fc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B34FC;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
loc_820B34FC:
	// lwz ctx_arrow(ctx)->r8,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820b35b0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B35B0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,6
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 + 6;
loc_820B3510:
	// lhz ctx_arrow(ctx)->r9,-6(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -6);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3528
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3528;
	// lhz ctx_arrow(ctx)->r6,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -4);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b35a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B35A0;
loc_820B3528:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,20497
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 20497, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3558
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3558;
	// lhz ctx_arrow(ctx)->r9,-2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -2);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3544
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3544;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r9.u64;
loc_820B3544:
	// lhz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3558
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3558;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r9.u64;
loc_820B3558:
	// lhz ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -4);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,20497
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 20497, xer);
	// beq ctx_arrow(ctx)->r6,0x820b358c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B358C;
	// lhz ctx_arrow(ctx)->r9,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3578
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3578;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r9.u64;
loc_820B3578:
	// lhz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 4);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b358c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B358C;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r9.u64;
loc_820B358C:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3510
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3510;
	// b 0x820b35b0
	goto loc_820B35B0;
loc_820B35A0:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r11,-1848(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + -1848, ctx_arrow(ctx)->r4.u32);
loc_820B35B0:
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r16.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820b3864
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B3864;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis ctx_arrow(ctx)->r27,-31991
	ctx_arrow(ctx)->r27.s64 = -2096562176;
	// subf ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r31.s64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis ctx_arrow(ctx)->r28,-31994
	ctx_arrow(ctx)->r28.s64 = -2096758784;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r24,-1
	ctx_arrow(ctx)->r24.s64 = -1;
	// rlwinm ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r25.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,6580(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
loc_820B35E4:
	// lhzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r25.u32 + ctx_arrow(ctx)->r8.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u64 + ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3600;
	// lhz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3864
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3864;
loc_820B3600:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,20497
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 20497, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3724
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3724;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64 + ctx_arrow(ctx)->r11.u64;
	// lhz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 4);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b362c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B362C;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r11.u64;
loc_820B362C:
	// lhz ctx_arrow(ctx)->r11,6(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 6);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3640
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3640;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r11.u64;
loc_820B3640:
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r29,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e098
	sub_8213E098(&ctx);
	// lwz ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r19.s32, 1, xer);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bne ctx_arrow(ctx)->r6,0x820b36a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B36A8;
	// lwz ctx_arrow(ctx)->r8,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r17.u64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r17.s64 - ctx_arrow(ctx)->r8.s64;
	// b 0x820b36cc
	goto loc_820B36CC;
loc_820B36A8:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r19.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820b36c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B36C4;
	// srawi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r17.s64 - ctx_arrow(ctx)->r8.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// b 0x820b36cc
	goto loc_820B36CC;
loc_820B36C4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r17.u64;
loc_820B36CC:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stw ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// stw ctx_arrow(ctx)->r29,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r24,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
	// lwz ctx_arrow(ctx)->r8,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820B3724:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u64 + ctx_arrow(ctx)->r8.u64;
	// lhz ctx_arrow(ctx)->r3,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,20497
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 20497, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3850
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3850;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64 + ctx_arrow(ctx)->r11.u64;
	// lhz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 8);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3758
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3758;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r11.u64;
loc_820B3758:
	// lhz ctx_arrow(ctx)->r11,10(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 10);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b376c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B376C;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r11.u64;
loc_820B376C:
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r29,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e098
	sub_8213E098(&ctx);
	// lwz ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 1, xer);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bne ctx_arrow(ctx)->r6,0x820b37d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B37D4;
	// lwz ctx_arrow(ctx)->r8,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r18.s64 - ctx_arrow(ctx)->r8.s64;
	// b 0x820b37f8
	goto loc_820B37F8;
loc_820B37D4:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820b37f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B37F0;
	// srawi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r18.s64 - ctx_arrow(ctx)->r8.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// b 0x820b37f8
	goto loc_820B37F8;
loc_820B37F0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r18.u64;
loc_820B37F8:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stw ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// stw ctx_arrow(ctx)->r29,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r24,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
	// lwz ctx_arrow(ctx)->r8,-1844(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820B3850:
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + 1;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,12
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 12;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,16
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r16.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820b35e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B35E4;
loc_820B3864:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// lfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed158
	return;
}

alias(__imp__sub_820B3870) PPC_WEAK_FUNC(sub_820B3870);
PPC_FUNC_IMPL(__imp__sub_820B3870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-32
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -32;
	// bl 0x823ed528
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x820c9b80
	sub_820C9B80(&ctx);
	// bl 0x820c2fb8
	sub_820C2FB8(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3c10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3C10;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16796
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 16796;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,4(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lhz ctx_arrow(ctx)->r9,2304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2304);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lhz ctx_arrow(ctx)->r7,2310(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2310);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// lhz ctx_arrow(ctx)->r9,2308(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2308);
	// lhz ctx_arrow(ctx)->r8,2306(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2306);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r10, 0);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// lfs f12,15184(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r8);
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r7, 0);
	// std ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// std ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lfd f12,80(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f10,96(ctx_arrow(ctx)->r1)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f11,88(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f9,104(ctx_arrow(ctx)->r1)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// lfs f12,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f27,f8,f12
	f27.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f31,f11,f12
	f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fadds f30,f10,f27
	f30.f64 = double(float(ctx.f10.f64 + f27.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fadds f29,f9,f31
	f29.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x820c32b8
	sub_820C32B8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fmuls f13,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lwz ctx_arrow(ctx)->r10,556(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f0,12888(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * f0.f64));
	// beq ctx_arrow(ctx)->r6,0x820b398c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B398C;
	// lwz ctx_arrow(ctx)->r10,4572(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b398c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B398C;
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r9,560(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,17328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x820b399c
	goto loc_820B399C;
loc_820B398C:
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r9,560(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,17328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
loc_820B399C:
	// stw ctx_arrow(ctx)->r10,560(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 560, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,560(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820b39bc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B39BC;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,560(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 560, ctx_arrow(ctx)->r4.u32);
	// b 0x820b39d0
	goto loc_820B39D0;
loc_820B39BC:
	// lis ctx_arrow(ctx)->r9,-32190
	ctx_arrow(ctx)->r9.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r9,17324(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r9.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x820b39d4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B39D4;
	// stw ctx_arrow(ctx)->r9,560(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 560, ctx_arrow(ctx)->r4.u32);
loc_820B39D0:
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820B39D4:
	// lwz ctx_arrow(ctx)->r10,560(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// fadds f27,f29,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f29.f64 + f31.f64));
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// fsubs f25,f30,f28
	f25.f64 = double(float(f30.f64 - f28.f64));
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// fsubs f31,f29,f31
	f31.f64 = double(float(f29.f64 - f31.f64));
	// fsubs f1,f30,f23
	ctx.f1.f64 = double(float(f30.f64 - f23.f64));
	// lwz ctx_arrow(ctx)->r11,17320(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// fmr f3,f25
	ctx.f3.f64 = f25.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x820972f8
	sub_820972F8(ctx, base);
	// fadds f24,f30,f28
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(f30.f64 + f28.f64));
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fadds f3,f23,f30
	ctx.f3.f64 = double(float(f23.f64 + f30.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x820972f8
	sub_820972F8(ctx, base);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// fsubs f4,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(f29.f64 - f26.f64));
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820972f8
	sub_820972F8(ctx, base);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fadds f2,f29,f26
	ctx.f2.f64 = double(float(f29.f64 + f26.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820972f8
	sub_820972F8(ctx, base);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,16,24,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 16) & 0xFF;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,56
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,24,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 24) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,8,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 8) & 0xFF;
	// clrldi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFF;
	// std ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// std ctx_arrow(ctx)->r7,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// std ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r3,80
	ctx_arrow(ctx)->r3.s64 = 80;
	// std ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f13,96(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lfd f11,80(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f0,15176(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * f0.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x82096dd8
	sub_82096DD8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = -1;
	// lfs f22,15172(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f22.f64 = double(temp.f32);
loc_820B3B04:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s32;
	// li ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -1;
	// std ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lfd f0,104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f23,f0
	f23.f64 = double(float(f0.f64));
	// fmadds f20,f23,f26,f29
	f20.f64 = double(float(f23.f64 * f26.f64 + f29.f64));
loc_820B3B20:
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s32;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// std ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f0,96(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f27,f0
	f27.f64 = double(float(f0.f64));
	// fmadds f21,f27,f28,f30
	f21.f64 = double(float(f27.f64 * f28.f64 + f30.f64));
loc_820B3B3C:
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f31,f0,f22
	f31.f64 = double(float(f0.f64 * f22.f64));
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f25,f0,f22
	f25.f64 = double(float(f0.f64 * f22.f64));
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fmadds f24,f0,f28,f30
	f24.f64 = double(float(f0.f64 * f28.f64 + f30.f64));
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f31,f25
	f31.f64 = f25.f64;
	// fmuls f0,f0,f23
	f0.f64 = double(float(f0.f64 * f23.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmadds f25,f0,f26,f29
	f25.f64 = double(float(f0.f64 * f26.f64 + f29.f64));
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fmadds f31,f0,f28,f30
	f31.f64 = double(float(f0.f64 * f28.f64 + f30.f64));
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// fmr f4,f25
	ctx.f4.f64 = f25.f64;
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// fmr f2,f20
	ctx.f2.f64 = f20.f64;
	// fmr f1,f21
	ctx.f1.f64 = f21.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f23
	f0.f64 = double(float(f0.f64 * f23.f64));
	// fmadds f6,f0,f26,f29
	ctx.f6.f64 = double(float(f0.f64 * f26.f64 + f29.f64));
	// bl 0x82096f28
	sub_82096F28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 20, xer);
	// blt ctx_arrow(ctx)->r6,0x820b3b3c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B3B3C;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b3b20
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B3B20;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b3b04
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B3B04;
	// bl 0x82096fa0
	sub_82096FA0(ctx, base);
loc_820B3C10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-32
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -32;
	// bl 0x823ed574
	// b 0x823ed18c
	return;
}

alias(__imp__sub_820B3C20) PPC_WEAK_FUNC(sub_820B3C20);
PPC_FUNC_IMPL(__imp__sub_820B3C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// lfs f13,16588(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,1460(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,1468(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,1460(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1460, ctx_arrow(ctx)->r4.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,1468(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1468, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f1,16588(ctx_arrow(ctx)->r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16588, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16592(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16592, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3C68) PPC_WEAK_FUNC(sub_820B3C68);
PPC_FUNC_IMPL(__imp__sub_820B3C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f1,16584(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16584, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3C78) PPC_WEAK_FUNC(sub_820B3C78);
PPC_FUNC_IMPL(__imp__sub_820B3C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,376(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_820B3C80) PPC_WEAK_FUNC(sub_820B3C80);
PPC_FUNC_IMPL(__imp__sub_820B3C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,420(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8252(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,396(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

alias(__imp__sub_820B3C98) PPC_WEAK_FUNC(sub_820B3C98);
PPC_FUNC_IMPL(__imp__sub_820B3C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3CA8) PPC_WEAK_FUNC(sub_820B3CA8);
PPC_FUNC_IMPL(__imp__sub_820B3CA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f13,508(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_820B3CD0) PPC_WEAK_FUNC(sub_820B3CD0);
PPC_FUNC_IMPL(__imp__sub_820B3CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,700(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_820B3CE0) PPC_WEAK_FUNC(sub_820B3CE0);
PPC_FUNC_IMPL(__imp__sub_820B3CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f13,596(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14020(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,13980(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

alias(__imp__sub_820B3D08) PPC_WEAK_FUNC(sub_820B3D08);
PPC_FUNC_IMPL(__imp__sub_820B3D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f13,612(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,13980(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

alias(__imp__sub_820B3D28) PPC_WEAK_FUNC(sub_820B3D28);
PPC_FUNC_IMPL(__imp__sub_820B3D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,468(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3D38) PPC_WEAK_FUNC(sub_820B3D38);
PPC_FUNC_IMPL(__imp__sub_820B3D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,472(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3D48) PPC_WEAK_FUNC(sub_820B3D48);
PPC_FUNC_IMPL(__imp__sub_820B3D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r3,4998(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 4998, ctx_arrow(ctx)->r4.u8);
	// blr 
	return;
}

alias(__imp__sub_820B3D58) PPC_WEAK_FUNC(sub_820B3D58);
PPC_FUNC_IMPL(__imp__sub_820B3D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r3,4998(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3D68) PPC_WEAK_FUNC(sub_820B3D68);
PPC_FUNC_IMPL(__imp__sub_820B3D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stw ctx_arrow(ctx)->r3,16576(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16576, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3D78) PPC_WEAK_FUNC(sub_820B3D78);
PPC_FUNC_IMPL(__imp__sub_820B3D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r3,16576(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3D88) PPC_WEAK_FUNC(sub_820B3D88);
PPC_FUNC_IMPL(__imp__sub_820B3D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3db4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3DB4;
	// lwz ctx_arrow(ctx)->r10,180(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3db4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3DB4;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lbz ctx_arrow(ctx)->r3,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
loc_820B3DB4:
	// lwz ctx_arrow(ctx)->r11,1536(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r3,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820B3DC0) PPC_WEAK_FUNC(sub_820B3DC0);
PPC_FUNC_IMPL(__imp__sub_820B3DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 132;
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1500
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 1500;
	// blr 
	return;
}

alias(__imp__sub_820B3DE0) PPC_WEAK_FUNC(sub_820B3DE0);
PPC_FUNC_IMPL(__imp__sub_820B3DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,168
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 168;
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1484
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 1484;
	// blr 
	return;
}

alias(__imp__sub_820B3E00) PPC_WEAK_FUNC(sub_820B3E00);
PPC_FUNC_IMPL(__imp__sub_820B3E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1328
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 1328;
	// blr 
	return;
}

alias(__imp__sub_820B3E10) PPC_WEAK_FUNC(sub_820B3E10);
PPC_FUNC_IMPL(__imp__sub_820B3E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x820c9b90
	sub_820C9B90(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3e4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3E4C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x8211dd98
	sub_8211DD98(ctx, base);
loc_820B3E4C:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r3,-1828(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3e64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3E64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x820db5a0
	sub_820DB5A0(ctx, base);
loc_820B3E64:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,432(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 432, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_820B3E90) PPC_WEAK_FUNC(sub_820B3E90);
PPC_FUNC_IMPL(__imp__sub_820B3E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x820c9b90
	sub_820C9B90(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3f6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3F6C;
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3ef0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3EF0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,480(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3f6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3F6C;
loc_820B3EF0:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3f6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3F6C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b3f18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B3F18;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b3f6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3F6C;
loc_820B3F18:
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,436
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 436;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,372(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r29)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,420(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8252(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,396(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f0,2952(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,0(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
loc_820B3F6C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_820B3F80) PPC_WEAK_FUNC(sub_820B3F80);
PPC_FUNC_IMPL(__imp__sub_820B3F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1836(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// bne ctx_arrow(ctx)->r6,0x820b3fac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B3FAC;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1460
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 1460;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,436
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 436;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lfs f1,-1808(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820b0ae0
	sub_820B0AE0(ctx, base);
	return;
loc_820B3FAC:
	// lwz ctx_arrow(ctx)->r10,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1460
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 1460;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1496
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 1496;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,1468
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 1468;
	// lfs f13,1460(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// lfs f0,1496(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,436(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 436, ctx_arrow(ctx)->r4.u32);
	// lfs f0,1468(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,440(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 440, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,444(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 444, ctx_arrow(ctx)->r4.u32);
	// lfs f13,0(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,448(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 448, ctx_arrow(ctx)->r4.u32);
	// lfs f13,0(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,452(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 452, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,456(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 456, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,460(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 460, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,464(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 464, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4028) PPC_WEAK_FUNC(sub_820B4028);
PPC_FUNC_IMPL(__imp__sub_820B4028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x820c9b90
	sub_820C9B90(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lfs f0,3112(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f13,1496(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,420(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8252(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,396(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2952(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,0(ctx_arrow(ctx)->r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,0(ctx_arrow(ctx)->r29)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_820B40A0) PPC_WEAK_FUNC(sub_820B40A0);
PPC_FUNC_IMPL(__imp__sub_820B40A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,484(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_820B40B0) PPC_WEAK_FUNC(sub_820B40B0);
PPC_FUNC_IMPL(__imp__sub_820B40B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,488(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_820B40C0) PPC_WEAK_FUNC(sub_820B40C0);
PPC_FUNC_IMPL(__imp__sub_820B40C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-908(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,64(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,64(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f1,488(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 488, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r8,-32014
	ctx_arrow(ctx)->r8.s64 = -2098069504;
	// b 0x830e0750
	// ERROR 830E0750
	return;
}

alias(__imp__sub_820B40E8) PPC_WEAK_FUNC(sub_820B40E8);
PPC_FUNC_IMPL(__imp__sub_820B40E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// lwz ctx_arrow(ctx)->r10,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r8,4736(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4736, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,4740(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4740, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-1700(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1700, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,-1704(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1704, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4120) PPC_WEAK_FUNC(sub_820B4120);
PPC_FUNC_IMPL(__imp__sub_820B4120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4736, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4138) PPC_WEAK_FUNC(sub_820B4138);
PPC_FUNC_IMPL(__imp__sub_820B4138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4736, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4150) PPC_WEAK_FUNC(sub_820B4150);
PPC_FUNC_IMPL(__imp__sub_820B4150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4200
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4200;
	// lis ctx_arrow(ctx)->r28,-32014
	ctx_arrow(ctx)->r28.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,-1700(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bge ctx_arrow(ctx)->r6,0x820b4254
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B4254;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r6,100
	ctx_arrow(ctx)->r6.s64 = 100;
	// li ctx_arrow(ctx)->r4,101
	ctx_arrow(ctx)->r4.s64 = 101;
	// lwz ctx_arrow(ctx)->r11,-1704(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lis ctx_arrow(ctx)->r10,26214
	ctx_arrow(ctx)->r10.s64 = 1717960704;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,26215
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 | 26215;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,-2944
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + -2944;
	// mulhw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r9.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// mulli ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,202
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 * 202;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r31.u64;
	// bl 0x823ee6c8
	sub_823EE6C8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,-1700(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3000
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3000;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,200
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 200;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// sthx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8
	PPC_STORE_U16(ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r9.u16);
	// stwx ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// stw ctx_arrow(ctx)->r10,-1700(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + -1700, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820B4200:
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-2944
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -2944;
	// mulli ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,202
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 * 202;
	// li ctx_arrow(ctx)->r6,100
	ctx_arrow(ctx)->r6.s64 = 100;
	// li ctx_arrow(ctx)->r4,101
	ctx_arrow(ctx)->r4.s64 = 101;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r30.u64;
	// bl 0x823ee6c8
	sub_823EE6C8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3000
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3000;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,200
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 200;
	// li ctx_arrow(ctx)->r7,120
	ctx_arrow(ctx)->r7.s64 = 120;
	// stwx ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// sthx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9
	PPC_STORE_U16(ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r7,4740(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4740, ctx_arrow(ctx)->r4.u32);
loc_820B4254:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820B4260) PPC_WEAK_FUNC(sub_820B4260);
PPC_FUNC_IMPL(__imp__sub_820B4260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// lwz ctx_arrow(ctx)->r4,-31544(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820b4150
	sub_820B4150(ctx, base);
	return;
}

alias(__imp__sub_820B4270) PPC_WEAK_FUNC(sub_820B4270);
PPC_FUNC_IMPL(__imp__sub_820B4270) {
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
	// lis ctx_arrow(ctx)->r30,-32014
	ctx_arrow(ctx)->r30.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4380
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4380;
	// lwz ctx_arrow(ctx)->r10,8260(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4380
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4380;
	// lwz ctx_arrow(ctx)->r10,4740(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,30
	ctx_arrow(ctx)->r29.s64 = 30;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b433c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B433C;
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,-6384(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r10,4740(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4740, ctx_arrow(ctx)->r4.u32);
	// bl 0x820c9af0
	sub_820C9AF0(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b433c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B433C;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4740(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820b4324
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B4324;
	// lis ctx_arrow(ctx)->r10,26214
	ctx_arrow(ctx)->r10.s64 = 1717960704;
	// lis ctx_arrow(ctx)->r9,-32014
	ctx_arrow(ctx)->r9.s64 = -2098069504;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,26215
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 | 26215;
	// lwz ctx_arrow(ctx)->r10,-1700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// lwz ctx_arrow(ctx)->r11,-1704(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r10,-1700(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + -1700, ctx_arrow(ctx)->r4.u32);
	// mulhw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r8.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,31,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r11,-1704(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + -1704, ctx_arrow(ctx)->r4.u32);
	// b 0x820b433c
	goto loc_820B433C;
loc_820B4324:
	// lwz ctx_arrow(ctx)->r9,-1700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b433c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B433C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 30, xer);
	// ble ctx_arrow(ctx)->r6,0x820b433c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B433C;
	// stw ctx_arrow(ctx)->r29,4740(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4740, ctx_arrow(ctx)->r4.u32);
loc_820B433C:
	// bl 0x820c9af0
	sub_820C9AF0(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4380
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4380;
	// lwz ctx_arrow(ctx)->r10,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4740(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820b4380
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B4380;
	// lwz ctx_arrow(ctx)->r11,-1700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820b4380
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B4380;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b4378
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B4378;
	// stw ctx_arrow(ctx)->r29,4740(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4740, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_820B4378:
	// li ctx_arrow(ctx)->r11,120
	ctx_arrow(ctx)->r11.s64 = 120;
	// stw ctx_arrow(ctx)->r11,4740(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4740, ctx_arrow(ctx)->r4.u32);
loc_820B4380:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_820B4388) PPC_WEAK_FUNC(sub_820B4388);
PPC_FUNC_IMPL(__imp__sub_820B4388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4736(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b45c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B45C8;
	// lwz ctx_arrow(ctx)->r10,4740(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b45c8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B45C8;
	// lwz ctx_arrow(ctx)->r11,8260(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b45c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B45C8;
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-2944
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -2944;
	// bne ctx_arrow(ctx)->r6,0x820b43f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B43F4;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-1704
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -1704;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,202
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 202;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r28.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b45c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B45C8;
	// b 0x820b4414
	goto loc_820B4414;
loc_820B43F4:
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4740(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b45c8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B45C8;
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-1704
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -1704;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820B4414:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-3000
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -3000;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,6580(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,202
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 * 202;
	// stw ctx_arrow(ctx)->r30,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4470
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4470;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// bne ctx_arrow(ctx)->r6,0x820b4474
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4474;
loc_820B4470:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820B4474:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b44a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B44A0;
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b44a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B44A0;
	// bl 0x8210e280
	sub_8210E280(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 10;
	// b 0x820b44ac
	goto loc_820B44AC;
loc_820B44A0:
	// bl 0x8210e280
	sub_8210E280(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 30;
loc_820B44AC:
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x820eb800
	sub_820EB800(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x820b44cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B44CC;
	// bl 0x820eb800
	sub_820EB800(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// bne ctx_arrow(ctx)->r6,0x820b44d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B44D0;
loc_820B44CC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820B44D0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4534
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4534;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x820a0d30
	sub_820A0D30(ctx, base);
	// bl 0x820a55e0
	sub_820A55E0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4518
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4518;
	// bl 0x820df8d8
	sub_820DF8D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4518
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4518;
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18;
	// b 0x820b4568
	goto loc_820B4568;
loc_820B4518:
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -40;
	// b 0x820b4568
	goto loc_820B4568;
loc_820B4534:
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4554
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4554;
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// li ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r31.s64 = 8;
	// blt ctx_arrow(ctx)->r6,0x820b4558
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B4558;
loc_820B4554:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r30.u64;
loc_820B4558:
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
loc_820B4568:
	// lwz ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// stw ctx_arrow(ctx)->r31,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r30,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,202
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 202;
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r9,25700
	ctx_arrow(ctx)->r9.s64 = 1684275200;
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,25855
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 25855;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x8213e398
	sub_8213E398(ctx, base);
loc_820B45C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820B45D0) PPC_WEAK_FUNC(sub_820B45D0);
PPC_FUNC_IMPL(__imp__sub_820B45D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r11,16808(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16808, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,-1692(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1692, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,-1696(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1696, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,-1688(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1688, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4600) PPC_WEAK_FUNC(sub_820B4600);
PPC_FUNC_IMPL(__imp__sub_820B4600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,-1688(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,-1688(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -1688, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4618) PPC_WEAK_FUNC(sub_820B4618);
PPC_FUNC_IMPL(__imp__sub_820B4618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,-1688(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,-1688(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -1688, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4630) PPC_WEAK_FUNC(sub_820B4630);
PPC_FUNC_IMPL(__imp__sub_820B4630) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r29,-32014
	ctx_arrow(ctx)->r29.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,-1692(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 2, xer);
	// bge ctx_arrow(ctx)->r6,0x820b46a0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B46A0;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r6,150
	ctx_arrow(ctx)->r6.s64 = 150;
	// li ctx_arrow(ctx)->r4,151
	ctx_arrow(ctx)->r4.s64 = 151;
	// lwz ctx_arrow(ctx)->r11,-1696(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,-3648
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + -3648;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// addze ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	temp.s64 = ctx_arrow(ctx)->r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r10.u32;
	ctx_arrow(ctx)->r10.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// mulli ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,302
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 * 302;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r31.u64;
	// bl 0x823ee6c8
	sub_823EE6C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1692(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,-1692(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + -1692, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,300
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 300;
	// sthx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	PPC_STORE_U16(ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u16);
loc_820B46A0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_820B46A8) PPC_WEAK_FUNC(sub_820B46A8);
PPC_FUNC_IMPL(__imp__sub_820B46A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1688(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4748
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4748;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8260(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4748
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4748;
	// lis ctx_arrow(ctx)->r6,-32190
	ctx_arrow(ctx)->r6.s64 = -2109603840;
	// lis ctx_arrow(ctx)->r8,-32014
	ctx_arrow(ctx)->r8.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,16808(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,-1692(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b472c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B472C;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,-6384(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// stw ctx_arrow(ctx)->r7,16808(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 16808, ctx_arrow(ctx)->r4.u32);
	// bge ctx_arrow(ctx)->r6,0x820b474c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B474C;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// lwz ctx_arrow(ctx)->r11,-1696(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,-1692(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + -1692, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// srawi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// addze ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	temp.s64 = ctx_arrow(ctx)->r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r8.u32;
	ctx_arrow(ctx)->r8.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// stw ctx_arrow(ctx)->r11,-1696(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -1696, ctx_arrow(ctx)->r4.u32);
loc_820B4724:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820b4748
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820B4748;
loc_820B472C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820b4748
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B4748;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// li ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r11.s64 = 60;
	// bgt ctx_arrow(ctx)->r6,0x820b4744
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820B4744;
	// li ctx_arrow(ctx)->r11,240
	ctx_arrow(ctx)->r11.s64 = 240;
loc_820B4744:
	// stw ctx_arrow(ctx)->r11,16808(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 16808, ctx_arrow(ctx)->r4.u32);
loc_820B4748:
	// blr 
	return;
loc_820B474C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820b4724
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B4724;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,60
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 60, xer);
	// ble ctx_arrow(ctx)->r6,0x820b4724
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820B4724;
	// li ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r11.s64 = 60;
	// stw ctx_arrow(ctx)->r11,16808(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 16808, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820B4768) PPC_WEAK_FUNC(sub_820B4768);
PPC_FUNC_IMPL(__imp__sub_820B4768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed124
	// stwu ctx_arrow(ctx)->r1,-400(ctx_arrow(ctx)->r1)
	ea = -400 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r29,-32014
	ctx_arrow(ctx)->r29.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1688(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x820b4904
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4904;
	// lis ctx_arrow(ctx)->r10,-32190
	ctx_arrow(ctx)->r10.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r10,16808(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820b4904
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820B4904;
	// lis ctx_arrow(ctx)->r26,-32014
	ctx_arrow(ctx)->r26.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,-3648
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r10.s64 + -3648;
	// lwz ctx_arrow(ctx)->r10,-1696(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,302
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 302;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r27.u64;
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r5.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4904
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4904;
	// lwz ctx_arrow(ctx)->r10,8260(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820b4904
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820B4904;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lis ctx_arrow(ctx)->r28,-31994
	ctx_arrow(ctx)->r28.s64 = -2096758784;
	// lis ctx_arrow(ctx)->r29,-31991
	ctx_arrow(ctx)->r29.s64 = -2096562176;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lfs f1,6580(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r31,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r31,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e098
	sub_8213E098(&ctx);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-1864(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4850
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4850;
	// bl 0x8210e280
	sub_8210E280(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,70
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 70;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e2f0
	sub_8210E2F0(&ctx);
	// lis ctx_arrow(ctx)->r11,11915
	ctx_arrow(ctx)->r11.s64 = 780861440;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,41705
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 41705;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 11;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// b 0x820b487c
	goto loc_820B487C;
loc_820B4850:
	// bl 0x8210e280
	sub_8210E280(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16816
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 16816;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e2f0
	sub_8210E2F0(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
loc_820B487C:
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x8210e290
	sub_8210E290(ctx, base);
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// bl 0x8210e400
	sub_8210E400(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// extsh ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r7,100
	ctx_arrow(ctx)->r7.s64 = 100;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// lwz ctx_arrow(ctx)->r11,-1696(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,302
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 302;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r31,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8213e0d8
	sub_8213E0D8(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,400
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 400;
	// b 0x823ed174
	return;
loc_820B4904:
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// lbz ctx_arrow(ctx)->r10,-13405(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820b4d40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820B4D40;
	// lfs f0,1472(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f2,1480(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8210ae20
	sub_8210AE20(ctx, base);
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,15292
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r8.s64 + 15292;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r3,-32256
	ctx_arrow(ctx)->r3.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,15288
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 15288;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f0,14308(ctx_arrow(ctx)->r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lhz ctx_arrow(ctx)->r3,15284(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 15284);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,130
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 130;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,15280
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 15280;
	// lbz ctx_arrow(ctx)->r23,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,131
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 131;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// sth ctx_arrow(ctx)->r3,128(ctx_arrow(ctx)->r1)
	PPC_STORE_U16(ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r3.u16);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,137
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 137;
	// stb ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

