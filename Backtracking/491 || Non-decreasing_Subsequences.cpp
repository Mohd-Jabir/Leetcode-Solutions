class Solution {
public:
void solve(int ind,vector<int>nums,set<vector<int>>&ans,vector<int>temp){
    if(ind>=nums.size()){
    if(temp.size()>=2){ ans.insert(temp);  }
        return;
    }
    if(!temp.size()|| nums[ind]>=temp.back()){
    temp.push_back(nums[ind]);
    solve(ind+1,nums,ans,temp);
    temp.pop_back();}
    solve(ind+1,nums,ans,temp);
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        solve(0,nums,ans,temp);
        return vector(ans.begin(),ans.end());
    }
};
