#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int minMaxPages(int n,int m,vector<int>& pages){
	int left = *max_element(pages.begin(), pages.end());
	int right = accumulate(pages.begin(), pages.end(), 0);
	
	while (left < right) {
		int mid = left + (right -left) / 2;
		int student = 1;
		int sum = 0;
	
		for(int page : pages){
			if(sum + page > mid) {
				student++;
				sum = page;
			}else{
				sum += page;
			}
		}
		
		if (student > m) {
            left = mid + 1;  
        } else {
            right = mid;  
        }
	}
	
	return left;
}


int main(){
	int n = 4;
	int m = 2;
	vector<int> pages = {12,34,67,90};
	
	int result = minMaxPages(n,m,pages);
	
	cout <<"分配给学生的最大页数的最小值为: "<< result <<"页"<< endl;

    return 0;
}
