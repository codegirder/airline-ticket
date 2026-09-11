## Requirements
- macOS, CMake 4.4.x, Homebrew LLVM (`brew install cmake llvm ninja`)

## Build
```
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=/opt/homebrew/opt/llvm/bin/clang++
cmake --build build
./build/main
```

If CMake says the `import std` UUID is incorrect, get the new one with
`strings $(which cmake) | grep -E '^[0-9a-f]{8}-([0-9a-f]{4}-){3}[0-9a-f]{12}$'`
and update `CMAKE_EXPERIMENTAL_CXX_IMPORT_STD` in CMakeLists.txt.