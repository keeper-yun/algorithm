
//���Բ��� 

#include<iostream>

using namespace std;

int search(int a[],int n,int len){
	int yes = 0;
	for(int i = 0;i<len;i++){
		if(a[i]==n){
			yes = 1;
			cout<<"����"<<n<<"�Ǽ����е�"<<i+1<<"λ����!"<<endl;
		}
	}
	
	if(yes==0){
		cout<<"����"<<n<<"���ڼ�����"<<endl;
	}
	return 1;
}



int main(){
	
	int a[] = {1,3,5,7,9,2,4,6,8,10};
	
	
	int length = 0;
	
	search(a,8,10);
	
	return 0;
} 
