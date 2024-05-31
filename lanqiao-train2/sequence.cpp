

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 10000;

vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

vector<vector<int>> matrixPower(vector<vector<int>>& matrix, long long power) {
    int n = matrix.size();
    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        result[i][i] = 1; // Identity matrix
    }

    while (power > 0) {
        if (power % 2 == 1) {
            result = multiplyMatrix(result, matrix);
        }
        matrix = multiplyMatrix(matrix, matrix);
        power /= 2;
    }

    return result;
}

int main() {
    vector<int> initial = {46499, 25281, 13745};
    vector<vector<int>> transformationMatrix = {
        {1, 1, 1},
        {1, 0, 0},
        {0, 1, 0}
    };

    long long n = 20240524;
    if (n <= 3) {
        cout << initial[3 - n] << endl;
        return 0;
    }

    vector<vector<int>> resultMatrix = matrixPower(transformationMatrix, n - 3);

    int nthTerm = (resultMatrix[0][0] * initial[0] + resultMatrix[0][1] * initial[1] + resultMatrix[0][2] * initial[2]) % MOD;

    cout << "第" << n << "项的最后4位数字是: " << nthTerm << endl;

    return 0;
}

