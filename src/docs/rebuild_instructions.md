# Project Rebuild Instructions

After implementing the new macros and function wrappers, you'll need to follow these steps to rebuild all the recompiled PowerPC files correctly.

## Summary of Changes

1. Updated memory access macros in `ppc_types.h` to handle pointer/address parameters
2. Created a new function wrapper system in `ppc_function_wrapper.h`
3. Documented the new implementation pattern in `example_implementation.md`

## Steps to Fix Existing Recomp Files

1. Include the new header in all recomp files:
   ```cpp
   #include "ppc_function_wrapper.h"
   ```

2. Change all direct memory access operations to use the new macros:
   ```cpp
   // Old:
   PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
   
   // New:
   PPC_STORE_U32(&ctx.r1, -8, r12.u32);
   ```

3. Change all function calls to use the wrapper:
   ```cpp
   // Old:
   sub_8239E608(ctx, base);
   
   // New:
   sub_call(8239E608);
   ```

4. Make sure all required function wrappers are defined in `ppc_function_wrapper.h`:
   ```cpp
   DEFINE_SUB_WRAPPER(8239E608)
   ```

## Full Rebuild Process

1. First, update one file manually following the pattern described above

2. Test compile to see if the changes fixed the issues:
   ```
   & "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" "BeanRecomp.vcxproj" "/p:Configuration=Debug" "/p:Platform=x86" "/p:VcpkgEnabled=true"
   ```

3. If the changes work for one file, you can repeat for other files, or use a script to automate the changes for all recomp files

## Script Automation

You could create a Python script to automatically update all recomp files:

```python
import os
import re

# Define regex patterns for finding function calls and memory operations
func_call_pattern = re.compile(r'sub_([0-9A-F]{8})\(ctx,\s*base\)')
store_pattern = re.compile(r'PPC_STORE_([US][0-9]+)\(([^,]+),\s*([^)]+)\)')
load_pattern = re.compile(r'PPC_LOAD_([US][0-9]+)\(([^)]+)\)')

# Function to collect all subfunction calls
def collect_subfunctions(directory):
    functions = set()
    for filename in os.listdir(directory):
        if filename.startswith('ppc_recomp') and filename.endswith('.cpp'):
            with open(os.path.join(directory, filename), 'r') as f:
                content = f.read()
                for match in func_call_pattern.finditer(content):
                    functions.add(match.group(1))
    return functions

# Generate wrappers for collected functions
def generate_wrappers(functions):
    lines = []
    for func in sorted(functions):
        lines.append(f'DEFINE_SUB_WRAPPER({func})')
    return '\n'.join(lines)

# Update a single file
def update_file(filename):
    with open(filename, 'r') as f:
        content = f.read()
    
    # Add include if needed
    if 'ppc_function_wrapper.h' not in content:
        content = content.replace('#include "ppc_recomp_shared.h"', 
                                '#include "ppc_recomp_shared.h"\n#include "ppc_function_wrapper.h"')
    
    # Replace function calls
    content = func_call_pattern.sub(r'sub_call(\1)', content)
    
    # Replace store operations
    content = store_pattern.sub(r'PPC_STORE_\1(&\2, \3)', content)
    
    # Replace load operations
    content = load_pattern.sub(r'PPC_LOAD_\1(&\2)', content)
    
    with open(filename, 'w') as f:
        f.write(content)

# Main script logic
def main():
    directory = 'src/ppc'
    functions = collect_subfunctions(directory)
    wrappers = generate_wrappers(functions)
    
    # Write wrappers to the header file
    with open('include/ppc/ppc_function_wrapper.h', 'r') as f:
        header_content = f.read()
    
    # Find the marker and replace with generated wrappers
    marker = '// Define wrappers for functions'
    if marker in header_content:
        parts = header_content.split(marker, 1)
        header_content = parts[0] + marker + ' used in recomp files\n' + wrappers + '\n\n// Add more wrappers as needed' + parts[1].split('// Add more wrappers as needed', 1)[1]
        
        with open('include/ppc/ppc_function_wrapper.h', 'w') as f:
            f.write(header_content)
    
    # Update all recomp files
    for filename in os.listdir(directory):
        if filename.startswith('ppc_recomp') and filename.endswith('.cpp'):
            update_file(os.path.join(directory, filename))

if __name__ == '__main__':
    main()
```

This script will:
1. Find all function calls in the recomp files
2. Generate wrapper definitions for them
3. Update the memory access and function call syntax in all files

## Final Testing

After making all changes, rebuild the entire project to ensure all errors are fixed:

```
& "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" "BeanRecomp.vcxproj" "/p:Configuration=Debug" "/p:Platform=x86" "/p:VcpkgEnabled=true"
``` 