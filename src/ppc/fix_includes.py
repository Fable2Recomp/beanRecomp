import os
import re
import glob

def process_file(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    # Remove the old include if present
    content = re.sub(r'#include\s+"ppc_recomp_funcs\.h"', '', content)
    
    # Add the new includes if not already present
    if '#include "ppc_recomp_macros.h"' not in content:
        content = '#include "ppc_recomp_macros.h"\n' + content
    
    if '#include "ppc_recomp_fix.h"' not in content:
        content = '#include "ppc_recomp_fix.h"\n' + content
    
    # Fix register access patterns
    content = re.sub(r'ctx->r(\d+)\.u32', r'PPCRegister_u32(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.s32', r'PPCRegister_s32(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.u64', r'PPCRegister_u64(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.s64', r'PPCRegister_s64(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.u8', r'PPCRegister_u8(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.s8', r'PPCRegister_s8(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.u16', r'PPCRegister_u16(&ctx, \1)', content)
    content = re.sub(r'ctx->r(\d+)\.s16', r'PPCRegister_s16(&ctx, \1)', content)
    
    # Fix memory access function calls
    # Replace WriteMemory8 calls with PPC_STORE_U8
    content = re.sub(r'ctx\.memory->WriteMemory8\(([^,]+),\s*([^)]+)\)', r'PPC_STORE_U8(&ctx, \1, \2)', content)
    content = re.sub(r'ctx\.memory->WriteMemory16\(([^,]+),\s*([^)]+)\)', r'PPC_STORE_U16(&ctx, \1, \2)', content)
    content = re.sub(r'ctx\.memory->WriteMemory32\(([^,]+),\s*([^)]+)\)', r'PPC_STORE_U32(&ctx, \1, \2)', content)
    content = re.sub(r'ctx\.memory->WriteMemory64\(([^,]+),\s*([^)]+)\)', r'PPC_STORE_U64(&ctx, \1, \2)', content)
    
    # Replace ReadMemory calls with PPC_LOAD functions
    content = re.sub(r'ctx\.memory->ReadMemory8\(([^)]+)\)', r'PPC_LOAD_U8(&ctx, \1)', content)
    content = re.sub(r'ctx\.memory->ReadMemory16\(([^)]+)\)', r'PPC_LOAD_U16(&ctx, \1)', content)
    content = re.sub(r'ctx\.memory->ReadMemory32\(([^)]+)\)', r'PPC_LOAD_U32(&ctx, \1)', content)
    content = re.sub(r'ctx\.memory->ReadMemory64\(([^)]+)\)', r'PPC_LOAD_U64(&ctx, \1)', content)
    
    # Fix static_cast<PPCRegister> to uint32_t issues
    content = re.sub(r'static_cast<uint32_t>\(([^)]+)\)', r'\1', content)
    
    # Fix direct WriteMemory8 calls with PPCContext* as first argument
    content = re.sub(r'WriteMemory8\(&ctx,\s*([^,]+),\s*([^)]+)\)', r'PPC_STORE_U8(&ctx, \1, \2)', content)
    content = re.sub(r'WriteMemory16\(&ctx,\s*([^,]+),\s*([^)]+)\)', r'PPC_STORE_U16(&ctx, \1, \2)', content)
    content = re.sub(r'WriteMemory32\(&ctx,\s*([^,]+),\s*([^)]+)\)', r'PPC_STORE_U32(&ctx, \1, \2)', content)
    content = re.sub(r'WriteMemory64\(&ctx,\s*([^,]+),\s*([^)]+)\)', r'PPC_STORE_U64(&ctx, \1, \2)', content)
    
    with open(file_path, 'w') as f:
        f.write(content)
    
    return True

def main():
    # Get all ppc_recomp.*.cpp files
    files = glob.glob('ppc_recomp.*.cpp')
    
    updated_count = 0
    for file in files:
        if process_file(file):
            updated_count += 1
    
    print(f"Updated {updated_count} files.")

if __name__ == "__main__":
    main()
