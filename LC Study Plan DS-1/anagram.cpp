#include<bits/stdc++.h>
using namespace std;
/*
	https://leetcode.com/problems/valid-anagram/
*/

bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;
}

int main(){
	string s = "anagram", t = "nagaram";
	cout<<isAnagram(s,t);
}
