
//���ֲ��� 

#include<iostream>

using namespace std;

int search(int a[],int n,int len){
	
	int i=0,j=len-1;
	
	while(i<=j){
		if(i==j && a[i]==n)
			cout<<"����"<<n<<"�Ǽ����е�"<<i+1<<"λ����!"<<endl;
		
		if(a[i]==n)
			cout<<"����"<<n<<"�Ǽ����е�"<<i+1<<"λ����!"<<endl;
			
		if(a[j]==n)
			cout<<"����"<<n<<"�Ǽ����е�"<<j+1<<"λ����!"<<endl;	
		i++;
		j--;
	}
	return 1;
}



int main(){
	
	int a[] = {1,3,5,7,9,11,13,17,19};
	
	search(a,11,9);
	
	return 0;
}
