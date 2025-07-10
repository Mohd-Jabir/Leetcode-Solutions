class Solution {
public:
void solve(int ind,vector<int>nums,vector<vector<int>>&ans,vector<int>temp){
    if(ind==nums.size()){
        ans.emplace_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    solve(ind+1,nums,ans,temp);
    temp.pop_back();
    solve(ind+1,nums,ans,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,nums,ans,temp);
        return ans;
    }
};
