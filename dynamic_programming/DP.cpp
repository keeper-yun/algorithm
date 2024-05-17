

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumPathSum(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (i == n - 1) { 
                dp[i][j] = triangle[i][j];
            } else {
                dp[i][j] = triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
            }
        }
    }

    return dp[0][0];
}

int main() {
    vector<vector<int>> triangle = {
        {7},
        {3, 8},
        {8, 1, 0},
        {2, 7, 4, 4},
		{4, 5, 2, 6, 5} 
    };

    cout << "最大路径和: " << maximumPathSum(triangle) << endl; 

    return 0;
}

