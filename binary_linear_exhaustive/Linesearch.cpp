
//线性查找 

#include<iostream>

using namespace std;

int search(int a[],int n,int len){
	int yes = 0;
	for(int i = 0;i<len;i++){
		if(a[i]==n){
			yes = 1;
			cout<<"数字"<<n<<"是集合中第"<<i+1<<"位数字!"<<endl;
		}
	}
	
	if(yes==0){
		cout<<"数字"<<n<<"不在集合中"<<endl;
	}
	return 1;
}



int main(){
	
	int a[] = {1,3,5,7,9,2,4,6,8,10};
	
	
	int length = 0;
	
	search(a,8,10);
	
	return 0;
} 
