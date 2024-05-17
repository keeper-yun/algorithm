

#include <iostream>

int main() {
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            int z = 6 * (x + y) - x * y;
            if (z >= y && z - y <= 10) {
                std::cout << "小华的年龄较小的弟弟最小为：" << y << "岁" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "未找到符合条件的年龄" << std::endl;

    return 0;
}

