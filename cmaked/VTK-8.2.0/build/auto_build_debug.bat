cmake -DBUILD_SHARED_LIBS:BOOL=OFF -DModule_vtkIOFFMPEG:BOOL=ON  -DCMAKE_INSTALL_PREFIX:PATH="E:\VTK820_D"   -G "Visual Studio 15 2017 Win64"  ..
cmake --build . --config Debug --target INSTALL