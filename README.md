# flutter_scapix_example

A new [Flutter](https://flutter.dev/) project + [scapix](https://github.com/scapix-com/scapix).

## Getting Started

This project is a starting point for a Flutter application w/ simple scapix integration.

## Steps

1. flutter create -i objc -a java flutter_example
2. git clone https://github.com/scapix-com/scapix.git
3. [add native library files](https://github.com/calebbergman/flutter_scapix_example/commit/c0acd8f914e77c85d3d283ffcf12feff349d1dcd)
4. [add cmake](https://github.com/calebbergman/flutter_scapix_example/commit/04329996a850590d56014b71d39f404c31ff740f)
5. [implement native library code](https://github.com/calebbergman/flutter_scapix_example/commit/4c2da7aa3757a2143201232a79206fc43e17ef1e)
6. run cmake
```
cmake -B cmake_build -G "Visual Studio 16 2019" -T host=x64 -A x64 -DSCAPIX_BRIDGE=java -DSCAPIX_PLATFORM=android -DSCAPIX_JAVA_API=android-28
cmake --build cmake_build
```
7. build Android project
```
cd android
gradle build
```
8. wait 36 minutes for gradle to finish...
```
BUILD SUCCESSFUL in 36m 45s
98 actionable tasks: 84 executed, 14 up-to-date
```
9. debug on Android device

## Issues

1. Crashes?
 - inspect [LogCat](https://marketplace.visualstudio.com/items?itemName=abhiagr.logcat) to get error details