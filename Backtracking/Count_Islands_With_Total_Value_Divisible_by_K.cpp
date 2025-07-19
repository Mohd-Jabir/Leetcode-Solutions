class Solution {
public:
    void solve(vector<vector<int>>& grid,long long& t,int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()) return;
        if(grid[i][j]==0||grid[i][j]==-1) return;
        t+=grid[i][j];
        grid[i][j]=-1;
        solve(grid,t,i+1,j);
        solve(grid,t,i-1,j);
        solve(grid,t,i,j+1);
        solve(grid,t,i,j-1);
        
    }
    int countIslands(vector<vector<int>>& grid,int k) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                long long t=0;
                if(grid[i][j]!=0&&grid[i][j]!=-1){
                    solve(grid,t,i,j);
                    if(t%k==0) ans++;}
            }
        }
        return ans;
    }
};
