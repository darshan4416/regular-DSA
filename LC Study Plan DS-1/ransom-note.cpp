#include<bits/stdc++.h>
using namespace std;

/*
	https://leetcode.com/problems/ransom-note/
*/

bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> mp;
        
        for(auto &it:ransomNote){
            mp[it]++;
        }
        for(auto &it:magazine){
            mp[it]--;
        }
        for(auto &it:ransomNote){
            if(mp[it]>0){
                return false;
            }
        }
        return true;
}


int main(){
	
	string ransomNote = "", magazine="";
	
	cout<<canConstruct(ransomNote,magazine);
	
	
	
	
}
