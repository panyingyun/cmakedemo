windows下编译，下面是环境准备

* 下载 openvr-1.1.3b 库并解压
* 下载 SDL2-2.0.9 库并解压
* 下载 SDL2_ttf-2.0.14库并解压

目录如下：
```
├─openvr-1.1.3b
│  ├─bin
│  │  ├─linux32
│  │  ├─linux64
│  │  ├─osx32
│  │  │  └─libopenvr_api.dylib.dSYM
│  │  │      └─Contents
│  │  │          └─Resources
│  │  │              └─DWARF
│  │  ├─osx64
│  │  │  └─OpenVR.framework
│  │  │      └─Versions
│  │  │          └─A
│  │  │              ├─Headers
│  │  │              └─Resources
│  │  ├─win32
│  │  └─win64
│  ├─controller_callouts
│  ├─headers
│  ├─lib
│  │  ├─linux32
│  │  ├─linux64
│  │  ├─osx32
│  │  ├─win32
│  │  └─win64
│  ├─samples
│  │  ├─bin
│  │  │  ├─drivers
│  │  │  │  └─sample
│  │  │  │      ├─resources
│  │  │  │      │  ├─icons
│  │  │  │      │  ├─input
│  │  │  │      │  ├─localization
│  │  │  │      │  └─settings
│  │  │  │      ├─win32
│  │  │  │      └─win64
│  │  │  ├─linux64
│  │  │  ├─osx32
│  │  │  ├─shaders
│  │  │  ├─win32
│  │  │  │  └─platforms
│  │  │  └─win64
│  │  ├─driver_sample
│  │  ├─hellovr_dx12
│  │  ├─hellovr_opengl
│  │  ├─hellovr_vulkan
│  │  ├─helloworldoverlay
│  │  ├─shared
│  │  ├─thirdparty
│  │  │  ├─glew
│  │  │  │  └─glew-1.11.0
│  │  │  │      ├─bin
│  │  │  │      │  ├─Release
│  │  │  │      │  │  ├─Win32
│  │  │  │      │  │  └─x64
│  │  │  │      │  └─Release MX
│  │  │  │      │      ├─Win32
│  │  │  │      │      └─x64
│  │  │  │      ├─doc
│  │  │  │      ├─include
│  │  │  │      │  └─GL
│  │  │  │      └─lib
│  │  │  │          ├─Release
│  │  │  │          │  ├─osx32
│  │  │  │          │  ├─Win32
│  │  │  │          │  └─x64
│  │  │  │          └─Release MX
│  │  │  │              ├─Win32
│  │  │  │              └─x64
│  │  │  ├─sdl2-2.0.3
│  │  │  │  ├─bin
│  │  │  │  │  ├─linux32
│  │  │  │  │  ├─linux64
│  │  │  │  │  ├─osx32
│  │  │  │  │  ├─win32
│  │  │  │  │  └─win64
│  │  │  │  └─include
│  │  │  └─vulkan-1.0.49.0
│  │  │      ├─include
│  │  │      │  ├─shaderc
│  │  │      │  └─vulkan
│  │  │      └─lib
│  │  │          ├─linux64
│  │  │          ├─win32
│  │  │          └─win64
│  │  ├─tracked_camera_openvr_sample
│  │  ├─unity_keyboard_sample
│  │  │  ├─Assets
│  │  │  │  ├─Plugins
│  │  │  │  │  ├─openvr_api.bundle
│  │  │  │  │  │  └─Contents
│  │  │  │  │  │      └─MacOS
│  │  │  │  │  ├─x86
│  │  │  │  │  └─x86_64
│  │  │  │  └─SteamVR
│  │  │  │      ├─Editor
│  │  │  │      ├─Extras
│  │  │  │      ├─Materials
│  │  │  │      ├─Prefabs
│  │  │  │      ├─Resources
│  │  │  │      ├─Scenes
│  │  │  │      ├─Scripts
│  │  │  │      └─Textures
│  │  │  └─ProjectSettings
│  │  └─unity_teleport_sample
│  │      ├─Assets
│  │      │  ├─Materials
│  │      │  ├─Plugins
│  │      │  │  ├─openvr_api.bundle
│  │      │  │  │  └─Contents
│  │      │  │  │      └─MacOS
│  │      │  │  ├─x86
│  │      │  │  └─x86_64
│  │      │  ├─SteamVR
│  │      │  │  ├─Editor
│  │      │  │  ├─Extras
│  │      │  │  ├─Materials
│  │      │  │  ├─Prefabs
│  │      │  │  ├─Resources
│  │      │  │  ├─Scenes
│  │      │  │  ├─Scripts
│  │      │  │  └─Textures
│  │      │  └─UnityVS
│  │      │      └─Editor
│  │      └─ProjectSettings
│  └─src
│      ├─json
│      └─vrcommon
├─SDL2-2.0.9
│  ├─docs
│  ├─include
│  └─lib
│      ├─x64
│      └─x86
└─SDL2_ttf-2.0.14
    ├─include
    └─lib
        ├─x64
        └─x86
```
备注：这里先讨论Windows下的CMake的使用方法，Linux请参考类似的做法

最后 运行 auto_build.bat