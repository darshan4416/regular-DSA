#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
Given an integer array nums, return true if any value appears 
at least twice in the array, and return false if every element is distinct.
https://leetcode.com/problems/contains-duplicate/
*/

bool containsDuplicate(vector<int>& nums) {
        
       map<int,int> mp;
       
        for(auto it:nums){
          
            mp[it]++;
            if(mp[it]==2){
                return 1;
            }
            
        }
        
        return 0;
       
 }

int main(){
	
	vector<int> nums;
    int n;
    cin>>n;
    
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		
		nums.push_back(temp);
	}
	
	cout<<containsDuplicate(nums);
	
}
