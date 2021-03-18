# 在MacOS上构建Skia

cd third_party/skia

echo "当前路径为:$(pwd)"
echo "--------开始构建--------"

echo "--------更新依赖--------"
python2 tools/git-sync-deps


echo "--------生成配置文件-----"
bin/gn gen out/Shared --args='is_debug=false is_official_build=false is_component_build=true cc="clang" cxx="clang++"'
bin/gn gen out/Release  --args='is_debug=false is_official_build=false cc="clang" cxx="clang++"'

echo "生成CMakeLists.txt"
bin/gn gen out/config --ide=json --json-ide-script=../../gn/gn_to_cmake.py

echo "--------编译-----------"
ninja -C out/Shared -j8

echo "--------编译Demo-----------"
ninja -C out/Release -j8
ninja -C out/Release HelloWorld
ninja -C out/Release SkiaSDLExample
ninja -C out/Release editor
ninja -C out/Release viewer

echo "编译完成"

