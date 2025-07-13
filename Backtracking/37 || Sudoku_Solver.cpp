class Solution {
public:
bool check(vector<vector<char>>& board,int i,int j,char t){
    for(int k=0;k<9;k++){
       if(board[k][j]==t) return false;
       if(board[i][k]==t) return false;
       if(board[3*(i/3)+k/3][3*(j/3)+k%3]==t) return false;
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='.'){
                for(char t='1';t<='9';t++){
                    if(check(board,i,j,t)){
                        board[i][j]=t;
                    if(solve(board)) return true;
                    else board[i][j]='.';
                    }
                }
            
            return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
         solve(board);
    }
};
