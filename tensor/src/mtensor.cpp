//
// Created by Max on 2020/6/11.
//
#include "../include/mtensor.h"

// Constructor
ME::mTensor::mTensor(): ndim(0), data(nullptr), shape() {}

ME::mTensor::mTensor(std::vector<int> vec): ndim(1) {
    shape.push_back(vec.size());
    data = new double[vec.size()];
    for(int i = 0; i != vec.size(); i++)
        *(data+i) = static_cast<double>(vec[i]);
}

int ME::mTensor::get_ndim() {
    return ndim;
}

void ME::mTensor::display() {
    if(ndim == 0)
        std::cout << "Empty Tensor" << std::endl;
    std::vector<int> block_index;
    for(auto i = shape.begin(); i != shape.end(); i++) {
        int acm = *i;
        for(auto j = i+1; j != shape.end(); j++) {
            acm *= *j;
        }
        block_index.push_back(acm);
    }

    std::cout << "[";
    for(int i = 0; i != block_index[0]; i++) {
        auto find_index = std::find(block_index.begin(), block_index.end(), i);
        if(find_index != block_index.end()) {
            if((i / *find_index) % 2 == 0)
                std::cout << "[";
            else {
                std::cout << "]" << std::endl;
            }
        }
        std::cout << *(data+i) << ", ";
    }
    std::cout << "]";
}

ME::mTensor::~mTensor() {
    delete[] data;
}
