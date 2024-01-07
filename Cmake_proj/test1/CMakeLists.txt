cmake_minimum_required(VERSION 3.0)

project(testApp_cmake)

include_directories(include)

#add_subdirectory(src)
#add_subdirectory 是 CMake 中的一个命令，用于向项目中添加子目录。
#在一个大型项目中，为了更好地组织代码，可以将不同功能或模块的代码放在各自的子目录中。
#add_subdirectory 的作用就是将这些子目录中的 CMakeLists.txt 文件包含到主项目的构建中。
# Note: this not a command for adding a source file path

add_executable(${PROJECT_NAME}

 test.cpp
 src/swap.cpp
 
 )

