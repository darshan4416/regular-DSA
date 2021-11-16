#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
Given an integer array nums, find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
https://leetcode.com/problems/maximum-subarray/

*/

int maxSubArray(vector<int>& nums) {
        
        int ans=nums[0],i,j,sum=0;
        int n = nums.size();
        
        for(i=0;i<n;i++){
            
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
            
        }
        return ans;
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
	
	cout<<maxSubArray(nums);
	
}
