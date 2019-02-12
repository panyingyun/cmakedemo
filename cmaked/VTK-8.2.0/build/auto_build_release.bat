cmake -DBUILD_SHARED_LIBS:BOOL=OFF   -DCMAKE_INSTALL_PREFIX:PATH="E:\VTK820_R"   -G "Visual Studio 15 2017 Win64"  ..
cmake --build . --config Release --target INSTALL