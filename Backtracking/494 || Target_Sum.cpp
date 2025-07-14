class Solution {
public:
void solve(vector<int>&nums,int target,int ind,int &ans){
    if(ind>=nums.size()){
        if(target==0) ans++;
        return ;
    }
    solve(nums,target-nums[ind],ind+1,ans);
    solve(nums,target+nums[ind],ind+1,ans);
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        solve(nums,target,0,ans);
        return ans;
    }
};
