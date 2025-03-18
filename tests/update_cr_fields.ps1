# Get all recompiler files
$files = Get-ChildItem -Path "ppc_recomp.*.cpp"

foreach ($file in $files) {
    # Read the file content
    $content = Get-Content $file.FullName

    # Replace condition register field accesses
    $content = $content -replace 'if \(cr6\.eq\)', 'if (cr6.getEQ())'
    $content = $content -replace 'if \(!cr6\.eq\)', 'if (!cr6.getEQ())'
    $content = $content -replace 'if \(cr6\.lt\)', 'if (cr6.getLT())'
    $content = $content -replace 'if \(!cr6\.lt\)', 'if (!cr6.getLT())'
    $content = $content -replace 'if \(cr6\.gt\)', 'if (cr6.getGT())'
    $content = $content -replace 'if \(!cr6\.gt\)', 'if (!cr6.getGT())'
    $content = $content -replace 'if \(cr6\.so\)', 'if (cr6.getSO())'
    $content = $content -replace 'if \(!cr6\.so\)', 'if (!cr6.getSO())'

    # Write the updated content back to the file
    Set-Content -Path $file.FullName -Value $content
} 