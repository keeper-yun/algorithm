#include <iostream>
#include <cmath>

int main() {
    int numFolds = 10;  
    int ropeCount = std::pow(2, numFolds) + 1;  

    std::cout << "��������" << numFolds << "�Σ��м���һ����õ�" << ropeCount << "������" << std::endl;

    return 0;
}

