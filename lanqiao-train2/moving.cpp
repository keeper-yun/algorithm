

#include <iostream>

using namespace std;

int main() {
    const int initialStamina = 10000;
    const int climbTime = 60;
    const int restTime = 60;
    const int climbCost = 600;
    const int restGain = 300;

    int stamina = initialStamina;
    int totalTime = 0;

    while (stamina > 0) {
        // ����60��
        for (int i = 0; i < climbTime; ++i) {
            stamina -= climbCost / climbTime;
            totalTime++;
            if (stamina <= 0) {
                cout << "��ţ����ֵΪ0ʱ��ȥ�� " << totalTime << " �롣" << endl;
                return 0;
            }
        }

        // ��Ϣ60��
        for (int i = 0; i < restTime; ++i) {
            stamina += restGain / restTime;
            totalTime++;
        }
    }

    cout << "��ţ����ֵ�ڸ���ѭ���в����Ϊ0��" << endl;

    return 0;
}

