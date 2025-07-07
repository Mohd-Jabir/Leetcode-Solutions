class Solution {
public:
    int solve(vector<int>& nums, int t,vector<int>&dp){
        if(t==0){
            return 1;
        }
        if(dp[t]!=-1) return dp[t];
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=t){
            res=res+solve(nums,t-nums[i],dp); }
        }
        dp[t]=res;
        return res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return solve(nums,target,dp);
    
    }
};
