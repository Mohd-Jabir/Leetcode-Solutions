class Solution {
public:
    void solve(vector<vector<string>>&ans,int c,vector<string>&board,int n,vector<int>&lr,vector<int>&ld,vector<int>&ud) {
        if(c==n) {
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++) {
            if(ld[c+r]==0&&lr[r]==0&&ud[(n-1)+(r-c)]==0){
                board[r][c]='Q';
                ld[c+r]=1;
                lr[r]=1;
                ud[(n-1)+(r-c)]=1;
                solve(ans,c+1,board,n,lr,ld,ud);
                 board[r][c]='.';
                ld[c+r]=0;
                lr[r]=0;
                ud[(n-1)+(r-c)]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        vector<int>lr(n,0),ld(2*n-1,0),ud(2*n-1,0);
        solve(ans,0,board,n,lr,ld,ud);
        return ans;
    }
};
