
//����ͬ�� 

#include<iostream>

using namespace std;

void cage(int head,int feet){
	
	int a=0,b;
	for(int i=0;i<head;i++){
		b=head-a;
		if((a*2)+(b*4)==feet){
			cout<<"����"<<a<<"ֻ"<<" "<<"����"<<b<<"ֻ"<<endl; 
			break;
		}
		a++;
	}
		
}



int main(){
	
	cage(35,94);
	
	return 0;
}

