#include <iostream>

int countWays(int N) {
    if (N == 0) {
        return 1;
    } else if (N < 0) {
        return 0;
    } else {
        return countWays(N-1) + countWays(N-2);
    }
}

int main() {
    int numSteps = 10;
    int ways = countWays(numSteps);

    std::cout << "����" << numSteps << "��̨�׵Ĳ�ͬ�Ϸ�����Ϊ��" << ways << std::endl;

    return 0;
}

