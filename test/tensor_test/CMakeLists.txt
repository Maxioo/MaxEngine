add_executable(tensor_test tensor_test.cpp)
target_link_libraries(tensor_test maxTensor_dll gtest_main)
add_test(NAME TENSOR_TEST COMMAND tensor_test)