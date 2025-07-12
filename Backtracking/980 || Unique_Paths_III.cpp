class Solution {
public:
    void solve(vector<vector<int>>& grid,int i,int j,int count,int t,int &ans){
            if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==-1) return;
            if(grid[i][j]==2) {
                if(count==t) ans++;
                 return ;
            }
            grid[i][j]=-1;
            solve(grid,i,j+1,count+1,t,ans);
            solve(grid,i,j-1,count+1,t,ans);
            solve(grid,i+1,j,count+1,t,ans);
            solve(grid,i-1,j,count+1,t,ans);
            grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int s=0,e=0,count=0,t=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0) t++;
                if(grid[i][j]==1) { 
                    s=i,e=j;
                    }
            }
        }
        t++;
        int ans=0;
        solve(grid,s,e,0,t,ans);
        return ans;
    }
};
