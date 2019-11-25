# Readme
A C++ implementation of the Atlas Open Protocol for Tightening Controllers 

please refer to this [introduction on codeproject.com](https://www.codeproject.com/Articles/1190932/The-Atlas-Copco-Open-Protocol-Interpreter) for an introduction.

This is a C++ implementation using Boost.Spirit X3.

Test cases are converted from abovementioned C# projects.

# Prerequisite

- CMake
- [VCPkg](https://github.com/Microsoft/vcpkg)
- Boost
- msvc 2017+, gcc 9, clang 6.0

## Getting Started
navigate to the root of project.

- Linux
```bash
./linux.sh
```

- Windows

```batch
./windows.bat
```



## Tutorials
[override the auto-detected DLL triplet using `-DVCPKG_TARGET_TRIPLET=x86-windows-static` along with the normal toolchain argument.](https://blogs.msdn.microsoft.com/vcblog/2016/11/01/vcpkg-updates-static-linking-is-now-available/)

- Linux

```bash
mkdir build & cd build 
cmake ./cpp/ -G  "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=/home/ttan/repo/public/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build . --config Release
```

## Others

### install 64bit lib

- Windows
```
vcpkg install boost:x64-windows fmt:x64-windows
```

- Linux
```
vcpkg install boost:x64-linux fmt:x64-linux
vcpkg install 

```

