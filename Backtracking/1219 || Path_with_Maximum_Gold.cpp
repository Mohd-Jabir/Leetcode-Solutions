class Solution {
public:
    int solve(vector<vector<int>>& grid,int i,int j,int &sum){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0) return 0;
        int temp=grid[i][j];
        grid[i][j]=0;
        int l=solve(grid,i,j-1,sum);
        int r=solve(grid,i,j+1,sum);
        int u=solve(grid,i-1,j,sum);
        int d=solve(grid,i+1,j,sum);
        grid[i][j]=temp;
        return temp+max({l,r,u,d});

    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int sum;
        int maxi=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                maxi=max(solve(grid,i,j,sum),maxi);
            }
        }
        return maxi;
    }
};
