@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat"
MSBuild.exe BeanRecomp.sln /p:Configuration=Debug /p:Platform=Win32 