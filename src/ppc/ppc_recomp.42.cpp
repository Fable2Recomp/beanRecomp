#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp____savefpr_19) PPC_WEAK_FUNC(__savefpr_19);
PPC_FUNC_IMPL(__imp____savefpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
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
	// stfd f19,-104(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -104);
	// stfd f20,-96(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -96);
	// stfd f21,-88(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -88);
	// stfd f22,-80(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -80);
	// stfd f23,-72(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -72);
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_20) PPC_WEAK_FUNC(__savefpr_20);
PPC_FUNC_IMPL(__imp____savefpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// stfd f20,-96(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -96);
	// stfd f21,-88(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -88);
	// stfd f22,-80(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -80);
	// stfd f23,-72(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -72);
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_21) PPC_WEAK_FUNC(__savefpr_21);
PPC_FUNC_IMPL(__imp____savefpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// stfd f21,-88(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -88);
	// stfd f22,-80(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -80);
	// stfd f23,-72(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -72);
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_22) PPC_WEAK_FUNC(__savefpr_22);
PPC_FUNC_IMPL(__imp____savefpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// stfd f22,-80(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -80);
	// stfd f23,-72(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -72);
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_23) PPC_WEAK_FUNC(__savefpr_23);
PPC_FUNC_IMPL(__imp____savefpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f23,-72(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -72);
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_24) PPC_WEAK_FUNC(__savefpr_24);
PPC_FUNC_IMPL(__imp____savefpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f24,-64(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -64);
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_25) PPC_WEAK_FUNC(__savefpr_25);
PPC_FUNC_IMPL(__imp____savefpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f25,-56(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -56);
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_26) PPC_WEAK_FUNC(__savefpr_26);
PPC_FUNC_IMPL(__imp____savefpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f26,-48(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -48);
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_27) PPC_WEAK_FUNC(__savefpr_27);
PPC_FUNC_IMPL(__imp____savefpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f27,-40(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -40);
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_28) PPC_WEAK_FUNC(__savefpr_28);
PPC_FUNC_IMPL(__imp____savefpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f28,-32(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -32);
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_29) PPC_WEAK_FUNC(__savefpr_29);
PPC_FUNC_IMPL(__imp____savefpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f29,-24(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -24);
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_30) PPC_WEAK_FUNC(__savefpr_30);
PPC_FUNC_IMPL(__imp____savefpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f30,-16(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -16);
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____savefpr_31) PPC_WEAK_FUNC(__savefpr_31);
PPC_FUNC_IMPL(__imp____savefpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// stfd f31,-8(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r12.u32 + -8);
	// blr 
	return;
}

alias(__imp____restfpr_14) PPC_WEAK_FUNC(__restfpr_14);
PPC_FUNC_IMPL(__imp____restfpr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// lfd f14,-144(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f15,-136(ctx_arrow(ctx)->r12)
	f15.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f16,-128(ctx_arrow(ctx)->r12)
	f16.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f17,-120(ctx_arrow(ctx)->r12)
	f17.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f18,-112(ctx_arrow(ctx)->r12)
	f18.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_15) PPC_WEAK_FUNC(__restfpr_15);
PPC_FUNC_IMPL(__imp____restfpr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// lfd f15,-136(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f15.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f16,-128(ctx_arrow(ctx)->r12)
	f16.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f17,-120(ctx_arrow(ctx)->r12)
	f17.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f18,-112(ctx_arrow(ctx)->r12)
	f18.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_16) PPC_WEAK_FUNC(__restfpr_16);
PPC_FUNC_IMPL(__imp____restfpr_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// lfd f16,-128(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f16.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f17,-120(ctx_arrow(ctx)->r12)
	f17.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f18,-112(ctx_arrow(ctx)->r12)
	f18.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_17) PPC_WEAK_FUNC(__restfpr_17);
PPC_FUNC_IMPL(__imp____restfpr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// lfd f17,-120(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f17.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f18,-112(ctx_arrow(ctx)->r12)
	f18.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_18) PPC_WEAK_FUNC(__restfpr_18);
PPC_FUNC_IMPL(__imp____restfpr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f18{};
	PPCRegister f19{};
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
	// lfd f18,-112(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f18.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_19) PPC_WEAK_FUNC(__restfpr_19);
PPC_FUNC_IMPL(__imp____restfpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
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
	// lfd f19,-104(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f19.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_20) PPC_WEAK_FUNC(__restfpr_20);
PPC_FUNC_IMPL(__imp____restfpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// lfd f20,-96(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f20.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_21) PPC_WEAK_FUNC(__restfpr_21);
PPC_FUNC_IMPL(__imp____restfpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// lfd f21,-88(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f21.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_22) PPC_WEAK_FUNC(__restfpr_22);
PPC_FUNC_IMPL(__imp____restfpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// lfd f22,-80(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f22.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_23) PPC_WEAK_FUNC(__restfpr_23);
PPC_FUNC_IMPL(__imp____restfpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f23,-72(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f23.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_24) PPC_WEAK_FUNC(__restfpr_24);
PPC_FUNC_IMPL(__imp____restfpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f24,-64(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f24.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_25) PPC_WEAK_FUNC(__restfpr_25);
PPC_FUNC_IMPL(__imp____restfpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f25,-56(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f25.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_26) PPC_WEAK_FUNC(__restfpr_26);
PPC_FUNC_IMPL(__imp____restfpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f26,-48(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f26.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_27) PPC_WEAK_FUNC(__restfpr_27);
PPC_FUNC_IMPL(__imp____restfpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f27,-40(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f27.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_28) PPC_WEAK_FUNC(__restfpr_28);
PPC_FUNC_IMPL(__imp____restfpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f28,-32(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f28.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_29) PPC_WEAK_FUNC(__restfpr_29);
PPC_FUNC_IMPL(__imp____restfpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f29,-24(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_30) PPC_WEAK_FUNC(__restfpr_30);
PPC_FUNC_IMPL(__imp____restfpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f30,-16(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp____restfpr_31) PPC_WEAK_FUNC(__restfpr_31);
PPC_FUNC_IMPL(__imp____restfpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// lfd f31,-8(ctx_arrow(ctx)->r12)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823ED5A8) PPC_WEAK_FUNC(sub_823ED5A8);
PPC_FUNC_IMPL(__imp__sub_823ED5A8) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823ed5fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823ED5FC;
loc_823ED5CC:
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x823ed704
	goto loc_823ED704;
loc_823ED5FC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ed60c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823ED60C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ed5cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823ED5CC;
loc_823ED60C:
	// lis ctx_arrow(ctx)->r10,16383
	ctx_arrow(ctx)->r10.s64 = 1073676288;
	// stw ctx_arrow(ctx)->r31,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,66
	ctx_arrow(ctx)->r9.s64 = 66;
	// stw ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x823ed638
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823ED638;
	// lis ctx_arrow(ctx)->r10,32767
	ctx_arrow(ctx)->r10.s64 = 2147418112;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// b 0x823ed63c
	goto loc_823ED63C;
loc_823ED638:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_823ED63C:
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r7.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823ed668
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823ED668;
loc_823ED660:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// b 0x823ed704
	goto loc_823ED704;
loc_823ED668:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ed6e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823ED6E0;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// blt 0x823ed69c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823ED69C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx.u8);
	// blr 
	return;
}

