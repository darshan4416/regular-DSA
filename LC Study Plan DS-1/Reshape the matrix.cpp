#inculde<bits/stdc++.h>
using namespace std;

/*
	https://leetcode.com/problems/reshape-the-matrix/
*/

 vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       
       vector<vector<int> > ans(r, vector<int> (c));
        
       int n = mat[0].size();
       int m = mat.size();
       int i=0, j=0, t=0; 
        
        if ((m*n) != (r*c)) return mat;
        
       for(i=0; i<m; i++){
           
           for(j=0; j<n; j++){
               ans[t/c][t%c] = mat[i][j];
               t++;
           }
       }
      
       
        return ans;
}



int main(){
	
	vector<vector<int> > vt{
		{1,2},
		{3,4}
	};
	
	vector<vector<int>> ans = matrixReshape(vt, 1, 4);
	
}
