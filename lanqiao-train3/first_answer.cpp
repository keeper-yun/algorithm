

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
    
    cout << "所有任务完成的最短总时间是：" << shortestTime << endl;
    
    return 0;
}




