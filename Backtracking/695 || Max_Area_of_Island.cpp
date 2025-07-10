class Solution {
public:
void solve(int i,int j,vector<vector<int>>&grid,int &count){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1) return;
    grid[i][j]=-1;
    count++;
    solve(i,j+1,grid,count);
    solve(i,j-1,grid,count);
    solve(i+1,j,grid,count);
    solve(i-1,j,grid,count);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               int count=0;
                if(grid[i][j]==1){ 
                    solve(i,j,grid,count); 
                    ans=max(ans,count);}

            }
        }
        return ans;
    }
};
