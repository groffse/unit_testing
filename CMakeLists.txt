cmake_minimum_required(VERSION 3.4)
project(catch_test)

enable_testing()
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(source)
add_subdirectory(tests)