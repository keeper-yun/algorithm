

#include<cstring>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


bool judge(string s, unordered_set<string>& wordSet ){
	
	int len = s.length();
	bool dp[len+1];
	memset(dp, false, sizeof(dp));
    dp[0] = true; // 空串是集合的子集

    for (int i = 1; i <= len; ++i) {
        for (int j = 0; j < i; ++j) {
            if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[len];
}



int main(){
	
	string s1 = "areyouok"; 
	unordered_set<string> word_set = { "word","yo","is","post","are","hands","uo" };
	
	if(judge(s1,word_set)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
