
//鸡兔同笼 

#include<iostream>

using namespace std;

void cage(int head,int feet){
	
	int a=0,b;
	for(int i=0;i<head;i++){
		b=head-a;
		if((a*2)+(b*4)==feet){
			cout<<"鸡有"<<a<<"只"<<" "<<"兔有"<<b<<"只"<<endl; 
			break;
		}
		a++;
	}
		
}



int main(){
	
	cage(35,94);
	
	return 0;
}

