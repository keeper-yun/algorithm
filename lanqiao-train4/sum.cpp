#include <iostream>
#include <vector>

bool subsetSum(const std::vector<int>& nums, int target) {
    int n = nums.size();
    std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(target + 1, false));

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= target; ++j) {
            if (j < nums[i - 1]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    return dp[n][target];
}

int main() {
    std::vector<int> nums = {3, 34, 4, 12, 5, 2};
    int target;
    std::cin >> target;

    bool exists = subsetSum(nums, target);
    std::cout << std::boolalpha << exists << std::endl;  

    return 0;
}

