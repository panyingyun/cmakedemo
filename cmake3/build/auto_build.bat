cmake -G "Visual Studio 15 2017 Win64"   ..
cmake --build . --config Release
if exist SDL2.dll (echo "find SDL2.dll ") else ( xcopy ..\SDL2-2.0.9\lib\x64\SDL2.dll . )
xcopy Release\cmake3.exe  . /y
cmake3.exe airplane.bmp
pause