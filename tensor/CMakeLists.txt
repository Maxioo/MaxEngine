project(maxTensor VERSION 0.0.1 LANGUAGES CXX)
set(maxTensor_build_include_dirs
        "${maxTensor_SOURCE_DIR}/include")
add_library(maxTensor_dll STATIC src/mtensor.cpp)
LINK_DIRECTORIES(${maxTensor_SOURCE_DIR})
target_include_directories(maxTensor_dll PUBLIC ${maxTensor_build_include_dirs})
