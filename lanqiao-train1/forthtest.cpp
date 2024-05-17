#include <iostream>
#include <cmath>

int main() {
    int numFolds = 10;  
    int ropeCount = std::pow(2, numFolds) + 1;  

    std::cout << "连续对折" << numFolds << "次，中间切一刀后得到" << ropeCount << "根绳子" << std::endl;

    return 0;
}

