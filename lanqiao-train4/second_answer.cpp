#include <iostream>
#include <algorithm>

void minShelves(int w, int m, int n) {
    int maxShelf = std::max(m, n); 
    int minShelf = std::min(m, n); 
    int maxShelfCount = w / maxShelf; 
    int minShelfCount = 0; 
    int remainingSpace = w; 

    for (int i = maxShelfCount; i >= 0; --i) {
        int usedSpace = i * maxShelf; 
        int remainingWidth = w - usedSpace; 
        int shelves = i; 

        if (remainingWidth % minShelf == 0) {
            minShelfCount = remainingWidth / minShelf;
            remainingSpace = w - (shelves * maxShelf + minShelfCount * minShelf);
            break;
        }
    }

    std::cout << maxShelfCount + minShelfCount << " " << maxShelfCount << " " << minShelfCount << " " << remainingSpace << std::endl;
}

int main() {
    int w = 24;
    int m = 4;
    int n = 7;

    minShelves(w, m, n);

    return 0;
}

