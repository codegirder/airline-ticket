## Requirements
- macOS, CMake 4.4.x, Homebrew LLVM (`brew install cmake llvm ninja`)

## Build
```
chmod +x run.sh 

./run.sh
```

If CMake says the `import std` UUID is incorrect, get the new one with
`strings $(which cmake) | grep -E '^[0-9a-f]{8}-([0-9a-f]{4}-){3}[0-9a-f]{12}$'`
and update `CMAKE_EXPERIMENTAL_CXX_IMPORT_STD` in CMakeLists.txt.