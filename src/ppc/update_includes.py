#!/usr/bin/env python3
import os
import re
import glob

def update_includes(file_path):
    with open(file_path, 'r') as f:
        content = f.read()
    
    # Update include paths
    content = re.sub(r'#include "ppc_recomp_macros.h"', r'#include "../include/ppc/ppc_recomp_macros.h"', content)
    
    with open(file_path, 'w') as f:
        f.write(content)
    
    return True

def main():
    # Process all files matching the pattern ppc_recomp.*.cpp
    files = sorted(glob.glob('ppc_recomp.*.cpp'))
    count = 0
    
    for file in files:
        if update_includes(file):
            count += 1
            print(f"Updated includes in {file}")
    
    print(f"Updated includes in {count} files from {files[0]} to {files[-1]}")

if __name__ == "__main__":
    main() 