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

    cout << "��������ǣ�" << resultDate->tm_year + 1900 << "��" << resultDate->tm_mon + 1 << "��" << resultDate->tm_mday << "��" << endl;

    return 0;
}

