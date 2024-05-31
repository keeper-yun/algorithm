

#include <iostream>

using namespace std;

int countDigits(int num, int digit) {
    int count = 0;
    while (num > 0) {
        int remainder = num % 10;
        if (remainder == digit) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    const int start = 1; // 开始数字
    const int end = 2024; // 结束数字
    int totalTwos = 0;

    for (int i = start; i <= end; ++i) {
        totalTwos += countDigits(i, 2);
    }

    cout << "组成连续的1到2024的数字，共需要" << totalTwos << "个2的号码牌。" << endl;

    return 0;
}

