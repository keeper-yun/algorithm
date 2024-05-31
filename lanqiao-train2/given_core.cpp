

#include <iostream>
#include <vector>

using namespace std;

int countWays(vector<int>& coins, int target) {
    vector<int> dp(target + 1, 0);
    dp[0] = 1; // ��ʼ������Ϊ0�����ֻ��һ�֣�����ѡȡ�κ�Ӳ��

    for (int coin : coins) {
        for (int i = coin; i <= target; ++i) {
            dp[i] += dp[i - coin];
        }
    }

    return dp[target];
}

int main() {
    vector<int> coins = {1, 2, 3};
    int target = 5;
    int ways = countWays(coins, target);
    cout << "�ø�����Ӳ����ϳ� " << target << " �ķ�����Ϊ��" << ways << " �֡�" << endl;
    return 0;
}

