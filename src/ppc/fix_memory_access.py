import os
import re
import glob

def fix_memory_access(content):
    # Fix PPC_Read_U8 calls
    content = re.sub(
        r'PPC_Read_U8\s*\(\s*ctx\s*\)',
        lambda m: 'PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32)',
        content
    )
    
    # Fix PPC_Write_U8 calls with incorrect value parameters
    content = re.sub(
        r'PPC_Write_U8\s*\(\s*ctx\s*,\s*([^,]+)\s*,\s*ctx_arrow\(ctx\)->([^.]+)\.u32\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, ctx_arrow(ctx)->{m.group(2)}.u8)',
        content
    )
    
    # Fix PPC_Write_U32 calls with incorrect pointer access
    content = re.sub(
        r'PPC_Write_U32\s*\(\s*ctx\s*,\s*ctx_arrow\(ctx\)->r4\.u32->([^,]+)\s*,\s*([^)]+)\)',
        lambda m: f'PPC_Write_U32(ctx, ctx_arrow(ctx)->{m.group(1)}, {m.group(2)})',
        content
    )
    
    # Convert all PPC_STORE_U8_FUNC calls to PPC_Write_U8 (most common pattern)
    content = re.sub(
        r'PPC_STORE_U8_FUNC\s*\(\s*&ctx\s*,\s*([^,]+)\s*,\s*0\s*,\s*0\s*,\s*0\s*,\s*0\s*,\s*0\s*,\s*0\s*,\s*0\s*,\s*0\s*\+\s*\(([^)]+)\)\s*,\s*0\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, {m.group(2)}.u8)',
        content
    )
    
    # Convert PPC_STORE_U8_FUNC calls with different parameter patterns
    content = re.sub(
        r'PPC_STORE_U8_FUNC\s*\(\s*&ctx\s*,\s*([^,]+)\s*,\s*(?:0\s*,\s*)*0\s*\+\s*\(([^)]+)\)\s*,\s*0\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, {m.group(2)}.u8)',
        content
    )
    
    # Convert PPC_STORE_U8_FUNC calls with simpler patterns
    content = re.sub(
        r'PPC_STORE_U8_FUNC\s*\(\s*&ctx\s*,\s*([^,]+)\s*,\s*([^,]+)\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, {m.group(2)}.u8)',
        content
    )
    
    # Convert any remaining PPC_STORE_U8_FUNC calls
    content = re.sub(
        r'PPC_STORE_U8_FUNC\s*\(\s*&ctx\s*,\s*([^,]+)\s*,\s*(?:[^,]*,\s*)*([^,\s]+)\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, {m.group(2)}.u8)',
        content
    )
    
    # Fix any remaining extra parentheses in memory access calls
    content = re.sub(
        r'(PPC_(?:Read|Write)_[US]\d+)\s*\(\s*ctx\s*,\s*([^,]+)\s*\)\)',
        r'\1(ctx, \2)',
        content
    )
    
    # Fix any remaining incorrect value types in PPC_Write_U8 calls
    content = re.sub(
        r'PPC_Write_U8\s*\(\s*ctx\s*,\s*([^,]+)\s*,\s*([^.]+)\.(?:u32|u64)\s*\)',
        lambda m: f'PPC_Write_U8(ctx, {m.group(1)}, {m.group(2)}.u8)',
        content
    )
    
    # Fix any remaining incorrect value types in PPC_Write_U32 calls
    content = re.sub(
        r'PPC_Write_U32\s*\(\s*ctx\s*,\s*([^,]+)\s*,\s*([^.]+)\.(?:u8|u64)\s*\)',
        lambda m: f'PPC_Write_U32(ctx, {m.group(1)}, {m.group(2)}.u32)',
        content
    )
    
    return content

def process_directory(directory):
    pattern = os.path.join(directory, 'ppc_recomp.*.cpp')
    for filepath in glob.glob(pattern):
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()
        
        fixed_content = fix_memory_access(content)
        
        if fixed_content != content:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.write(fixed_content)
            print(f'Fixed {filepath}')

if __name__ == '__main__':
    process_directory('src/ppc') 