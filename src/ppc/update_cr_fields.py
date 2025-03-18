import os
import re

# Get all recompiler files in the current directory
recomp_files = [f for f in os.listdir('.') if (f.startswith('ppc_recomp.') and (f.endswith('.cpp') or f.endswith('.cpp.bak')))]

# Replacements to make
replacements = [
    # if statements
    (r'if \(cr6\.eq\)', 'if (cr6.getEQ())'),
    (r'if \(!cr6\.eq\)', 'if (!cr6.getEQ())'),
    (r'if \(cr6\.lt\)', 'if (cr6.getLT())'),
    (r'if \(!cr6\.lt\)', 'if (!cr6.getLT())'),
    (r'if \(cr6\.gt\)', 'if (cr6.getGT())'),
    (r'if \(!cr6\.gt\)', 'if (!cr6.getGT())'),
    (r'if \(cr6\.so\)', 'if (cr6.getSO())'),
    (r'if \(!cr6\.so\)', 'if (!cr6.getSO())'),
    
    # Direct field access
    (r'cr6\.eq', 'cr6.getEQ()'),
    (r'cr6\.lt', 'cr6.getLT()'),
    (r'cr6\.gt', 'cr6.getGT()'),
    (r'cr6\.so', 'cr6.getSO()'),
    
    # Other condition registers
    (r'cr0\.eq', 'cr0.getEQ()'),
    (r'cr0\.lt', 'cr0.getLT()'),
    (r'cr0\.gt', 'cr0.getGT()'),
    (r'cr0\.so', 'cr0.getSO()'),
    
    (r'cr1\.eq', 'cr1.getEQ()'),
    (r'cr1\.lt', 'cr1.getLT()'),
    (r'cr1\.gt', 'cr1.getGT()'),
    (r'cr1\.so', 'cr1.getSO()'),
    
    (r'cr2\.eq', 'cr2.getEQ()'),
    (r'cr2\.lt', 'cr2.getLT()'),
    (r'cr2\.gt', 'cr2.getGT()'),
    (r'cr2\.so', 'cr2.getSO()'),
    
    (r'cr3\.eq', 'cr3.getEQ()'),
    (r'cr3\.lt', 'cr3.getLT()'),
    (r'cr3\.gt', 'cr3.getGT()'),
    (r'cr3\.so', 'cr3.getSO()'),
    
    (r'cr4\.eq', 'cr4.getEQ()'),
    (r'cr4\.lt', 'cr4.getLT()'),
    (r'cr4\.gt', 'cr4.getGT()'),
    (r'cr4\.so', 'cr4.getSO()'),
    
    (r'cr5\.eq', 'cr5.getEQ()'),
    (r'cr5\.lt', 'cr5.getLT()'),
    (r'cr5\.gt', 'cr5.getGT()'),
    (r'cr5\.so', 'cr5.getSO()'),
    
    (r'cr7\.eq', 'cr7.getEQ()'),
    (r'cr7\.lt', 'cr7.getLT()'),
    (r'cr7\.gt', 'cr7.getGT()'),
    (r'cr7\.so', 'cr7.getSO()')
]

for file in recomp_files:
    # Read the file content
    with open(file, 'r') as f:
        content = f.read()

    # Apply all replacements
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)

    # Write the updated content back to the file
    with open(file, 'w') as f:
        f.write(content) 