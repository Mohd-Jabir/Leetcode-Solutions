class Solution {
public:
    vector<int>dp;
    int climbStairs(int n) {
        if(n<=1)
        return 1;
        if(dp.size() <= n || dp[n] == -1)
            dp.resize(n + 1, -1);
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
    
};
