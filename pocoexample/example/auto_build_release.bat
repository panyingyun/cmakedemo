md .\build_win
pushd .\build_win
del /a CMakeCache.txt
cmake -DPoco_DIR:PATH="D:\Poco\lib\cmake\Poco" -G "Visual Studio 15 2017 Win64"  ..
cmake --build . --config Release
popd
pause