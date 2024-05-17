#include <iostream>
#include <vector>
#include <algorithm>

bool satisfiesCondition(int a, int b, int c, int d) {
    std::vector<int> digits = {a, b, c, d};

    // 遍历所有的排列组合
    do {
        int numerator = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
        int denominator = digits[0] * 10 + digits[1];
        int quotient = numerator / denominator;
        int remainder = numerator % denominator;

        // 验证结果是否只包含这四个数字且余数为0
        if (quotient == digits[2] && remainder == 0) {
            return true;
        }
    } while (std::next_permutation(digits.begin(), digits.end()));

    return false;
}

int countValidEquations() {
    int count = 0;

    // 遍历所有可能的四个数字的排列组合
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            if (b == a) continue;
            for (int c = 1; c <= 9; c++) {
                if (c == a || c == b) continue;
                for (int d = 1; d <= 9; d++) {
                    if (d == a || d == b || d == c) continue;

                    // 验证是否满足条件
                    if (satisfiesCondition(a, b, c, d)) {
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    int count = countValidEquations();

    std::cout << "共有 " << count << " 种满足条件的算式" << std::endl;

    return 0;
}

