cmake -G "Visual Studio 15 2017 Win64"   ..
cmake --build . --config Release
xcopy Release\cmake4.exe  . /y
cmake4.exe airplane.bmp
pause