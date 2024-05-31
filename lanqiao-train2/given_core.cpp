

#include <iostream>
#include <vector>

using namespace std;

int countWays(vector<int>& coins, int target) {
    vector<int> dp(target + 1, 0);
    dp[0] = 1; // 初始化：和为0的情况只有一种，即不选取任何硬币

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
    cout << "用给定的硬币组合成 " << target << " 的方法数为：" << ways << " 种。" << endl;
    return 0;
}

