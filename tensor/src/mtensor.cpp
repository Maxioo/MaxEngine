//
// Created by Max on 2020/6/11.
//
#include "../include/mtensor.h"
#include <iostream>

ME::mTensor::mTensor(): ndim(0), data(nullptr), shape(){
}

int ME::mTensor::get_ndim() {
    return ndim;
}
