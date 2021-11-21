#include<bits/stdc++.h>
using namespace std;

/*
https://leetcode.com/problems/first-unique-character-in-a-string/
*/
 int firstUniqChar(string s) {
        
        map<char,int > mp;
        int i, j;
        
        for(i=0; i<s.size(); i++){
            
            mp[s[i]]++;
        }
        
        for(i=0;i<s.size();i++){
            if(mp[s[i]]==1)
            {
                return i;
            }
        }
        return -1;        
}

int main(){
	
	string s="leetcode";
	
	cout<<firstUniqChar(s);
	
	
	
}
