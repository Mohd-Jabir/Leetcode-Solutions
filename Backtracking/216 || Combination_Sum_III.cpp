class Solution {
public:
    void solve(int ind,vector<int>num,int t,vector<int>temp,vector<vector<int>>&ans,int k,int n){
        if(ind>=num.size()){
            if(t==n&&temp.size()==k){
                ans.emplace_back(temp);
            }
            return ;
        }
        if(t<=n){
            temp.push_back(num[ind]);
            solve(ind+1,num,t+num[ind],temp,ans,k,n);
            temp.pop_back();
        }
        solve(ind+1,num,t,temp,ans,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>num={1,2,3,4,5,6,7,8,9};
        solve(0,num,0,temp,ans,k,n);
        return ans;
    }
};
