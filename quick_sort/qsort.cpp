#include<iostream>

using namespace std;



void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}



void quicksort(int a[],int begin,int end){
	int low = begin;
	int high = end;
	if(low<high){
		
		while(low<high){
			while(a[low]<=a[begin] && low<end){
				low++;
			}	
			while(a[high]>=a[begin] && high > begin){
				high--;
			}
			if(low<high)
				swap(a[low],a[high]);
			else
				break;
		}
		swap(a[begin],a[high]);
		quicksort(a,begin,high-1);
		quicksort(a,high+1,end);
	}
	
}



void printa(int a[] ,int len){
	for(int i=0;i<len;i++){
		cout<<a[i]<<" ";	
	}
	cout<<endl;
}



int main(){
	
	int a[] = {3,6,8,10,1,2,1};
	int len = sizeof(a) / sizeof(a[0]);
	
	cout << "原始数组为：";
	printa(a,len);
	
	quicksort(a,0,len-1);
	
	cout << "排序后数组为：";
	printa(a,len);
	
	return 0;
}



