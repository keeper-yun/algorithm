

#include <iostream>

int main() {
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            int z = 6 * (x + y) - x * y;
            if (z >= y && z - y <= 10) {
                std::cout << "С���������С�ĵܵ���СΪ��" << y << "��" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "δ�ҵ���������������" << std::endl;

    return 0;
}

