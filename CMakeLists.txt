cmake_minimum_required(VERSION 3.16)
project(MaxEngine)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(libs)
add_subdirectory(tensor)
add_subdirectory(test)
add_executable(MaxEngine main.cpp)
target_link_libraries(MaxEngine maxTensor_dll)
