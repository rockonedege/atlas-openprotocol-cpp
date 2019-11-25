tool_chain=/home/ttan/repo/public/vcpkg/scripts/buildsystems/vcpkg.cmake
build_dir=./~build

rm $build_dir & mkdir $build_dir
cd $build_dir 
cmake ../src/ -G  "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=$tool_chain
# cmake ../src/ -G  "Ninja" -DCMAKE_TOOLCHAIN_FILE=$chain_tool
cmake --build . --config Release

