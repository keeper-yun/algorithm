

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
        // 爬行60秒
        for (int i = 0; i < climbTime; ++i) {
            stamina -= climbCost / climbTime;
            totalTime++;
            if (stamina <= 0) {
                cout << "蜗牛体力值为0时过去了 " << totalTime << " 秒。" << endl;
                return 0;
            }
        }

        // 休息60秒
        for (int i = 0; i < restTime; ++i) {
            stamina += restGain / restTime;
            totalTime++;
        }
    }

    cout << "蜗牛体力值在给定循环中不会变为0。" << endl;

    return 0;
}

