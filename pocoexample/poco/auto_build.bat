md .\build_win
pushd .\build_win
del /a CMakeCache.txt
cmake -G "Visual Studio 15 2017 Win64" -DPOCO_STATIC=ON -DCMAKE_INSTALL_PREFIX=D:/Poco ..
cmake --build . --config Release
cmake -DBUILD_TYPE=Release -P cmake_install.cmake
popd
pause