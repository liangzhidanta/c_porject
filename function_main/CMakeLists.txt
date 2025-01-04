# CMakeLists.txt
cmake_minimum_required(VERSION 3.31.3)  # 设置 CMake 的最低版本要求
project(MyCMakeproject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
# 查找所有源文件
file(GLOB SOURCES "*.c")
# 添加可执行文件
add_executable(MyCMakeproject ${SOURCES})

set_property(TARGET MyCMakeproject PROPERTY CXX_STANDARD 17)