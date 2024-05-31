

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
    const int start = 1; // ��ʼ����
    const int end = 2024; // ��������
    int totalTwos = 0;

    for (int i = start; i <= end; ++i) {
        totalTwos += countDigits(i, 2);
    }

    cout << "���������1��2024�����֣�����Ҫ" << totalTwos << "��2�ĺ����ơ�" << endl;

    return 0;
}

