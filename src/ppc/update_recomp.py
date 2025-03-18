#!/usr/bin/env python3
import os
import re
import sys
import glob

# Get the directory of the script
script_dir = os.path.dirname(os.path.abspath(__file__))

# Define the include line to add
include_line = '#include "ppc_recomp_patch.h"'

# Define regex patterns
ctx_pattern = re.compile(r'ctx\.(ctx)')
ctx_ref_pattern = re.compile(r'(!ctx)')
ctx_arrow_pattern = re.compile(r'(ctx)->([a-zA-Z0-9_]+)')
alias_pattern = re.compile(r'__attribute__\(\(alias\("([^"]+)"\)\)\)')
func_impl_pattern = re.compile(r'void ([a-zA-Z0-9_]+)\(PPCContext& ctx, uint32_t [a-zA-Z0-9_]+\)')
reg_init_pattern = re.compile(r'PPCRegister ([a-zA-Z0-9_]+) = ctx\.gpr\[([0-9]+)\];')
memory_func_pattern = re.compile(r'(PPCMemory::)(Read|Write)Memory([0-9]+)\(ctx, (.*?)\)')
memory_func_pattern2 = re.compile(r'(PPCMemory::)(Read|Write)Memory([0-9]+)\(ctx, (.*?), (.*?)\)')
compare_pattern = re.compile(r'PPCRegister::compare\((.*?), (.*?), (.*?)\)')
context_pattern = re.compile(r'\bcontext\b')
sub_func_pattern = re.compile(r'(sub_[0-9a-fA-F]+)\((&ctx|ctx\*),')
ppc_register_pattern = re.compile(r'PPCRegister\s+([a-zA-Z0-9_]+);')
ppc_register_init_pattern = re.compile(r'PPCRegister\s+([a-zA-Z0-9_]+)\s*=\s*ctx\.([a-zA-Z0-9_]+)\[([0-9]+)\];')

def process_file(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    # Check if the include line already exists
    if include_line not in content:
        # Remove any existing includes that might conflict
        content = re.sub(r'#include "ppc_recomp_macros\.h"', '', content)
        content = re.sub(r'#include "ppc_recomp_fix\.h"', '', content)
        content = re.sub(r'#include "ppc_recomp_compat\.h"', '', content)
        
        # Add the include line at the beginning of the file
        content = include_line + '\n' + content
    
    # Fix nested ctx.ctx references
    content = ctx_pattern.sub(r'ctx', content)
    
    # Fix !ctx references
    content = ctx_ref_pattern.sub(r'(!ctx)', content)
    
    # Fix ctx-> references
    content = ctx_arrow_pattern.sub(r'ctx_arrow(ctx)->\2', content)
    
    # Fix alias definitions
    content = alias_pattern.sub(r'alias(\1)', content)
    
    # Fix function implementations
    content = func_impl_pattern.sub(r'void \1(PPCContext* ctx, uint32_t base_addr)', content)
    
    # Fix PPCRegister declarations
    content = ppc_register_pattern.sub(r'PPCRegister \1{};', content)
    
    # Fix PPCRegister initializations with array index
    content = ppc_register_init_pattern.sub(r'PPCRegister \1 = ctx_arrow(ctx)->\2[\3];', content)
    
    # Fix register initializations
    content = reg_init_pattern.sub(r'PPCRegister \1 = ctx_arrow(ctx)->gpr[\2];', content)
    
    # Fix memory access function calls with 2 arguments
    content = memory_func_pattern.sub(r'PPC_LOAD_U\3(ctx, \4)', content)
    
    # Fix memory access function calls with 3 arguments
    content = memory_func_pattern2.sub(r'PPC_STORE_U\3(ctx, \4, \5)', content)
    
    # Fix compare function calls
    content = compare_pattern.sub(r'compare(\1, \2, \3)', content)
    
    # Fix context references
    content = context_pattern.sub(r'ctx', content)
    
    # Fix sub function calls
    content = sub_func_pattern.sub(r'\1(ctx,', content)
    
    # Fix PPCXERRegister and PPCCRRegister declarations
    content = re.sub(r'PPCXERRegister ([a-zA-Z0-9_]+);', r'int \1{};', content)
    content = re.sub(r'PPCCRRegister ([a-zA-Z0-9_]+);', r'int \1{};', content)
    
    # Fix memory access with ctx as first argument
    content = re.sub(r'g_Memory\.(Read|Write)Memory([0-9]+)\(ctx, ', r'PPC_\1_U\2(ctx, ', content)
    
    # Fix ctx_arrow references in test files
    content = re.sub(r'ctx_arrow\(ctx\)->ctx_arrow\(ctx\)->', r'ctx_arrow(ctx)->', content)
    
    # Fix ctx dereference issues
    content = re.sub(r'\*ctx = ctx;', r'/* ctx assignment removed */', content)
    
    # Write the modified content back to the file
    with open(file_path, 'w') as f:
        f.write(content)
    
    print(f"Updated {file_path}")

def main():
    # Process all files matching the pattern ppc_recomp.*.cpp
    script_dir = os.path.dirname(os.path.abspath(__file__))
    files = glob.glob(os.path.join(script_dir, "ppc_recomp.*.cpp"))
    
    # Also process test files
    test_files = glob.glob(os.path.join(script_dir, "ppc_recomp_*.cpp"))
    files.extend(test_files)
    
    # Process each file
    for file_path in files:
        process_file(file_path)
    
    print(f"Updated {len(files)} files")

if __name__ == "__main__":
    main() 