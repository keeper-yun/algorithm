#include <iostream>

#include <vector>

using namespace std;


int maximumPathSum(vector<vector<int>>& triangle) {
    int row = 0; 
    int col = 0; 
    int sum = triangle[row][col]; 


    while (row < triangle.size() - 1) {

        int left = triangle[row + 1][col];
        int right = triangle[row + 1][col + 1];


        if (left > right) {
            sum += left;
        } else {
            sum += right;
            col++; 
        }

        row++; 
    }

    return sum;
}

int main() {

    vector<vector<int>> triangle = {
        {7},
        {3, 8},
        {8, 1, 0},
        {2, 7, 4, 4},
        {4, 5, 2, 6, 5}
    };

    cout << "最大路径和为: " << maximumPathSum(triangle) << endl;

    return 0;
}

