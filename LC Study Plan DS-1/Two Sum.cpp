#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
https://leetcode.com/problems/two-sum/
*/

vector<int> twoSum(vector<int>& nums, int target) {
     
        int val;
        map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            
            int rem = target - nums[i];
            
            if(mp.find(rem)==mp.end()){
                mp.insert(make_pair(nums[i],i));
            }
            else{
                return {mp[rem],i};
            }
            
        }
        return {0};
}

int main(){
	
	vector<int> inp{2,7,11,15};
	
	cout<<twoSum(inp, 9)<<//0 1;
	
	
}
