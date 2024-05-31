

#include <iostream>
#include <string>

using namespace std;

int countSubsequences(string s, string target) {
    int count = 0;
    int index = 0;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == target[index]) {
            index++;
            if (index == target.length()) {
                count++;
                index = 0;
            }
        }
    }
    
    return count;
}

int main() {
    string sequence = "";
    for (int i = 1; i <= 2024; ++i) {
        sequence += to_string(i);
    }
    string target = "2024";
    
    int result = countSubsequences(sequence, target);
    
    cout << "子序列等于2024的数量为：" << result << endl;
    
    return 0;
}

