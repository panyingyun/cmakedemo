### Windows下编译准备  

1. 将SDL2-2.0.9目录添加到环境变量 SDL2DIR 中
2. 将SDL2-2.0.9\lib\x64目录添加到环境变量，以便程序可以找到 SDL2.dll
3. 然后运行 build下的编译脚本 auto_build.bat

```
windows下 下载 https://www.libsdl.org/release/SDL2-devel-2.0.9-VC.zip 

解压后目录如下：
cmake4
│  └─SDL2-2.0.9
│      ├─docs
│      ├─include
│      └─lib
│          ├─x64
│          └─x86

备注：这里先讨论Windows下的CMake的使用方法，Linux请参考类似的做法
```


#### Cmake 参考文献：
https://www.kancloud.cn/itfanr/cmake-practice/82991

#### SDL2 Find cmake 脚本从这里下载
https://github.com/tcbrindle/sdl2-cmake-scripts

#### Find cmake 通用范本写法：
https://github.com/rpavlik/cmake-modules/tree/master/module-docs

#### 更详细的学习请参考：
https://github.com/Akagi201/learning-cmake/tree/master/docs
