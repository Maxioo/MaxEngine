#include "mtensor.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Hello" << std::endl;
    std::vector<int> cc = {1, 2, 3, 4, 5, 6};
    ME::mTensor a(cc);
    a.display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
