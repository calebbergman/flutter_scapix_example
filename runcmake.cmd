cmake -B cmake_build -G "Visual Studio 16 2019" -T host=x64 -A x64 -DSCAPIX_BRIDGE=java -DSCAPIX_PLATFORM=android -DSCAPIX_JAVA_API=android-28
cmake --build cmake_build
