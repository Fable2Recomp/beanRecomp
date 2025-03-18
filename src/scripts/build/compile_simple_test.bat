@echo off
echo Compiling simple audio test...

:: Check if Visual Studio Developer Command Prompt is available
where cl >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    echo Visual Studio compiler not found in PATH.
    echo Please run this from a Visual Studio Developer Command Prompt.
    pause
    exit /b 1
)

:: Compile the program
cl /EHsc /std:c++17 /I"C:\SDL3\include" simple_audio_test.cpp /link /LIBPATH:"C:\SDL3\lib" SDL3.lib

if %ERRORLEVEL% NEQ 0 (
    echo Compilation failed!
    pause
    exit /b 1
)

:: Copy SDL3.dll if needed
if exist "C:\SDL3\bin\SDL3.dll" (
    copy "C:\SDL3\bin\SDL3.dll" .
    echo Copied SDL3.dll to current directory
)

:: Run the program
echo.
echo Running simple audio test...
simple_audio_test.exe

pause 