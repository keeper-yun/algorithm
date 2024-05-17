#include <iostream>
#include <ctime>

using namespace std;

int main() {

    struct tm weddingDate = {0, 0, 0, 4, 4, 104};

    time_t weddingTimestamp = mktime(&weddingDate);

    long long daysToAdd = 1500;
    long long secondsToAdd = daysToAdd * 24 * 60 * 60;
    time_t resultTimestamp = weddingTimestamp + secondsToAdd;

    struct tm *resultDate = localtime(&resultTimestamp);

    cout << "结婚日期是：" << resultDate->tm_year + 1900 << "年" << resultDate->tm_mon + 1 << "月" << resultDate->tm_mday << "日" << endl;

    return 0;
}

