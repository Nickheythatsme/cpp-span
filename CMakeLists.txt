cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)
project(p2p)

enable_testing()
#add_subdirectory(src)
#add_subdirectory(tests)

set(CMAKE_CXX_CLANG_TIDY clang-tidy -checks=-*,readability-*)

add_executable(span main.cpp)
