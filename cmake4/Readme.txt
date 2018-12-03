windows下 
下载 https://www.libsdl.org/release/SDL2-devel-2.0.9-VC.zip 

解压后目录如下：
cmake3
│  └─SDL2-2.0.9
│      ├─docs
│      ├─include
│      └─lib
│          ├─x64
│          └─x86

备注：这里先讨论Windows下的CMake的使用方法，Linux请参考类似的做法

SDL2 Find cmake 脚本从这里下载
https://github.com/tcbrindle/sdl2-cmake-scripts

Find cmake 通用范本写法：
https://github.com/rpavlik/cmake-modules/tree/master/module-docs
