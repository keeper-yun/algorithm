#include <iostream>
#include <string>
#include <malloc.h>

#define N 100

using namespace std;

typedef char use;

typedef struct stack{
    use *base;
    use *top;
    int stacksize;
} stack;



void init(stack &L){
	
    L.base = (use *)malloc(sizeof(use) * N);
    L.top = L.base;
    L.stacksize = N;
    
}



bool push(stack &L, char x){
	
    if(L.top < L.base + L.stacksize){
    	
        *L.top = x;
        L.top++;
        return true;
		  
    } else 
        return false; 
    
    
}



char remove(stack &L){
	
    if(L.top == L.base)
        return '\0';  
    
    L.top--;
    use x = *L.top;
    return x;
}



int main(){
	
    stack A;
    init(A);
    
    stack B;
    init(B);

    string s;
    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        char a = s[i];
        push(A, a); 
    }

    string result;
    char c;
    
    while((c = remove(A)) != '\0'){
        push(B,c);
    }
    
    
    for(int i=0;i<s.length();i++)
    	result += remove(B);
    

    cout << "队列中的字符串：" << result << endl;

    return 0;
}

