//
// Created by Max on 2020/6/11.
//

#ifndef MAXENGINE_MTENSOR_H
#define MAXENGINE_MTENSOR_H

#include <vector>
namespace ME {
    class mTensor {
    public:
        mTensor();
        mTensor(std::vector<int>);

        int get_ndim();

    private:
        int ndim;
        std::vector<int> shape;
        double *data;
    };
}

#endif //MAXENGINE_MTENSOR_H
