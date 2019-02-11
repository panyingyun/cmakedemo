cmake -G "Visual Studio 15 2017 Win64"  -DUSE_SQRT=OFF  ..
cmake --build . --config Release
cd Release
cmakeb.exe  16  9
cmakeb.exe  1  25
cmakeb.exe  1  9
cmakeb.exe  2  2
cmakeb.exe  3  3
pause