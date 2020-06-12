//
// Created by Max on 2020/6/11.
//

#ifndef MAXENGINE_MTENSOR_H
#define MAXENGINE_MTENSOR_H
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

namespace ME {
    class mTensor {
    public:
        mTensor();
        mTensor(std::vector<int>);

        ~mTensor();

        int get_ndim();
        void display();

    private:
        int ndim;
        std::vector<int> shape;
        double *data;
    };
}

#endif //MAXENGINE_MTENSOR_H
