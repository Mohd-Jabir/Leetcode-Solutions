class Solution {
public:
void solve(int s,vector<int>temp,vector<vector<int>>&ans,int n,int k){
       if(k==temp.size()){
            ans.emplace_back(temp);
            return;
        }
        for(int i=s;i<=n;i++){
            temp.push_back(i);
            solve(i+1,temp,ans,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(1,temp,ans,n,k);
        return ans;
    }
};
