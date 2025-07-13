class Solution {
public:
bool check(vector<vector<char>>& board,int i,int j,char t){
    for(int k=0;k<9;k++){
       if(board[k][j]==t&&k!=i) return false;
       if(board[i][k]==t&&k!=j) return false;
    }
    int t1=i-i%3;  
    int t2=j-j%3;  
    for(int k=0;k<9;++k) {
    int r=t1+k/3;
    int c=t2+k%3; 
    if((r!=i||c!=j)&&board[r][c]==t)
        return false;
}
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]!='.'&&!check(board,i,j,board[i][j])) return false;
        }
    }
        return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        return solve(board);
    }
};
