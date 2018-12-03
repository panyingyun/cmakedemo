cmake -G "Visual Studio 15 2017 Win64"   ..
cmake --build . --config Release
xcopy Release\cmake5.exe  . /y
cmake5.exe 
pause