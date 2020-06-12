//
// Created by Max on 2020/6/12.
//
#include "gtest/gtest.h"
#include "mtensor.h"

TEST(Tensor_TEST, test1){
    ME::mTensor a;
    EXPECT_EQ(a.get_ndim(), 0);
}
