#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
	https://leetcode.com/problems/search-a-2d-matrix/
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(), n=matrix[0].size();
        int start = 0, end = m*n-1;
        
        while(start<=end){
            
            int mid = start + (end-start)/2;
            int e = matrix[mid/n][mid%n];
            
            cout<<e<<" ";
            
            if(target == e){
                return true;
            }
            if(e>target){
                 end = mid-1;
            }
            if(e<target){
               
                start = mid+1;
            }
        }
        
        return false;
        
}





int main(){
	
	vector<vector<int> > vt{
	{1,3,5,7},
	{10,11,16,20},
	{23,30,40,60},
	};
	
	bool ans = searchMatrix(vt, 3);
	cout<<ans;
	
	
	
}
