cmake_minimum_required(VERSION 3.0)
project(test)
# 设置头文件导入路径include_directories(headpath)
include_directories(${PROJECT_SOURCE_DIR}/include)

# 将多个cpp文件加入到一个变量中
# set(SRC_LIST main.cpp add.cpp sub.cpp)

# 使用宏来寻找要运行的文件
# 1.使用aux_source_directory(搜索路径 变量名)
# 注意PROJECT_SOURCE_DIR表示执行cmake编译时候后面给的路径，例如在build中执行cmake ..，则表示build的上一级路径
# 或者将PROJECT_SOURCE_DIR路径理解为CMakeLists.txt文件所在位置
# aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)
# 2.file(GLOB/GLOB_RECURSE 变量名 要搜索的文件路径和文件类型)
# GLOB: 将指定目录下搜索到的满足条件的所有文件名生成一个列表，并将其存储到变量中。
# GLOB_RECURSE：递归搜索指定目录，将搜索到的满足条件的文件名生成一个列表，并将其存储到变量中。
# CMAKE_CURRENT_SOURCE_DIR路径为CMakeLists.txt文件所在位置，本质上跟PROJECT_SOURCE_DIR一样
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 指定可执行文件main的输出路径
# set(HOME /home/xt/github/CMake-notes)
# set(HOME .)
# set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

#增加-std=c++11
# set(CMAKE_CXX_STANDARD 11)
#增加-std=c++14
# set(CMAKE_CXX_STANDARD 14)
#增加-std=c++98
# set(CMAKE_CXX_STANDARD 98)

add_executable(main  ${SRC_LIST})
