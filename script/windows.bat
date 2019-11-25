@echo off
mkdir ~build 
cd ~build 
cmake ../src/ -DCMAKE_TOOLCHAIN_FILE=F:\vcpkg\scripts\buildsystems\vcpkg.cmake  -DVCPKG_TARGET_TRIPLET=x64-windows -DCMAKE_INSTALL_PREFIX=F:\on-semi\release -G "Visual Studio 16 2019" -A x64
cmake --build . --config Release && cd ..

