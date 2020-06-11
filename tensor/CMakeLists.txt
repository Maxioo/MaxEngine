project(maxTensor VERSION 0.0.1 LANGUAGES CXX)
set(maxTensor_build_include_dirs
        "${maxTensor_SOURCE_DIR}/include")
add_library(maxTensor_dll SHARED src/mtensor.cpp)
target_include_directories(maxTensor_dll PUBLIC ${maxTensor_build_include_dirs})
