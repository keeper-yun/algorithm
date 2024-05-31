


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canSort(vector<int>& nums) {
    int n = nums.size();
    vector<int> sortedNums(nums.begin(), nums.end());
    sort(sortedNums.begin(), sortedNums.end());
    
    int minIdx = -1;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == sortedNums[n / 2]) {
            minIdx = i;
            break;
        }
    }
    
    if (minIdx == -1) {
        return false;
    }
    

    vector<int> left(nums.begin(), nums.begin() + minIdx);
    vector<int> right(nums.begin() + minIdx + 1, nums.end());
    bool leftSorted = is_sorted(left.begin(), left.end());
    bool rightSorted = is_sorted(right.rbegin(), right.rend());
    
    return leftSorted && rightSorted;
}

int main() {
    vector<int> nums = {1, 6, 3, 4, 5, 2, 7};
    if (canSort(nums)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}



