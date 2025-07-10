class Solution {
public:
void solve(vector<vector<int>>& image,int i,int j,int c,int t){
    if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=t) return;
    image[i][j]=c;
    solve(image,i+1,j,c,t);
    solve(image,i-1,j,c,t);
    solve(image,i,j+1,c,t);
    solve(image,i,j-1,c,t);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int t=image[sr][sc];
        if (t==color) return image;
        solve(image,sr,sc,color,t);
        return image;
    }
};
