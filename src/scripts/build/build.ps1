# Import Visual Studio environment
$vsPath = "C:\Program Files\Microsoft Visual Studio\2022\Community"
$vsCmdPath = "$vsPath\Common7\Tools\VsDevCmd.bat"

# Create a temporary batch file to capture environment variables
$tempFile = [System.IO.Path]::GetTempFileName() + ".bat"
"@echo off`r`ncall `"$vsCmdPath`" && set" | Out-File -FilePath $tempFile -Encoding ASCII

# Run the batch file and capture the environment variables
$envVars = cmd /c "$tempFile"

# Remove the temporary batch file
Remove-Item $tempFile

# Parse and set environment variables
foreach ($line in $envVars) {
    if ($line -match '^([^=]+)=(.*)$') {
        $name = $matches[1]
        $value = $matches[2]
        [System.Environment]::SetEnvironmentVariable($name, $value, [System.EnvironmentVariableTarget]::Process)
    }
}

# Build the solution
& "MSBuild.exe" "BeanRecomp.sln" /p:Configuration=Debug /p:Platform=Win32 