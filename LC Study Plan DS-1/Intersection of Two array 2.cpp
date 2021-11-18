#include<iostream>
#include<map>

using namespace std;

/*
https://leetcode.com/problems/intersection-of-two-arrays-ii/
*/

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
       vector<int> vt;
       map<int, int> mp;
       int i=0, j=0;
        
        
       for(auto &it:nums1){
            mp[it]++;
       }
       for(i=0; i<nums2.size(); i++){
           if(mp[nums2[i]]>0){
               mp[nums2[i]]--;
               vt.push_back(nums2[i]);
           }
       }
       
      return vt;
        
}

int main(){
		
	 vector<int> nums1{1,2,2,1};
	 vector<int> nums2{2,2};
	 
	 vector<int> ans = intersect(nums1,nums2);
	 
	 for(auto &it:ans){
	 	cout<<it<<" ";
	 }
	 
	
}
