

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int shortestCompletionTime(vector<int>& tasks) {

    sort(tasks.begin(), tasks.end());
    
    int totalTime = 0;
    int n = tasks.size();
    

    for (int i = 0; i < n; ++i) {
        totalTime += tasks[i] * (n - i);
    }
    
    return totalTime;
}

int main() {
    vector<int> tasks = {3, 1, 4, 3, 2};
    int shortestTime = shortestCompletionTime(tasks);
    
    cout << "����������ɵ������ʱ���ǣ�" << shortestTime << endl;
    
    return 0;
}




