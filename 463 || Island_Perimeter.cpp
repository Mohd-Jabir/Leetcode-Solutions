class Solution {
public:
int solve(int i,int j,vector<vector<int>>&grid){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0) return 1;
    if(grid[i][j]==-1) return 0;
    grid[i][j]=-1;
    int p=0;
    p+=solve(i,j+1,grid);
    p+=solve(i+1,j,grid);
    p+=solve(i,j-1,grid);
    p+=solve(i-1,j,grid);
    return p;
}
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){ 
                    return  solve(i,j,grid); 
            }
        }}
        return 0;
    }
};
