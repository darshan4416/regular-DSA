#include<iostream>
#include<map>
#include<vector>
using namespace std;

 bool isValidSudoku(vector<vector<char>>& board) {
        
        int row[9][9]={0}, col[9][9]={0}, sub[9][9]={0};
        int i, j;
       // cout<<board.size();
        for(i=0; i<9; i++){
            for(j=0; j<9; j++){
        
                if(board[i][j]!='.'){
                    int num = (board[i][j]-'0')-1;
                    int k = i/3*3 + j/3;
                
//                     cout<<i<<" "<<j<<" "<<k<<" "<<num<<" "<<board[i][j]-'0'<<endl;    
                    if(row[i][num] || col[j][num] || sub[k][num]){
                        return false;
                     }
                    else{
                        row[i][num]=col[j][num]=sub[k][num]=1;
                     }
                }
            }
        }
        
        return true;
        
}


int main(){
	
	vector<vector<char> > board{
	{"8","3",".",".","7",".",".",".","."},
	{"6",".",".","1","9","5",".",".","."},
	{".","9","8",".",".",".",".","6","."},
	{"8",".",".",".","6",".",".",".","3"},
	{"4",".",".","8",".","3",".",".","1"},
	{"7",".",".",".","2",".",".",".","6"},
	{".","6",".",".",".",".","2","8","."},
	{".",".",".","4","1","9",".",".","5"},
	{".",".",".",".","8",".",".","7","9"}
	};
	
	bool ans = isValidSudoku(board);
	cout<<ans;
	
	
	
}
