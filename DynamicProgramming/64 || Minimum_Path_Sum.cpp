class Solution {
public:
int solve(vector<vector<int>>&grid,int i,int j,int n,int m,vector<vector<int>>&dp){
    if(i>=n||j>=m) return INT_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==n-1&&j==m-1){
        return grid[i][j];
    }
    int d=solve(grid,i+1,j,n,m,dp);
    int l=solve(grid,i,j+1,n,m,dp);
    return dp[i][j]=grid[i][j]+min(d,l);
}
    int minPathSum(vector<vector<int>>& grid) {
        long long mini=INT_MAX;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
         return solve(grid,0,0,n,m,dp);
        
    }
};
