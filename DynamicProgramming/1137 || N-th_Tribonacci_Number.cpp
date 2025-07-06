class Solution {
public:
  vector<int>dp;
    int tribonacci(int n) {
        if(n==0)
        return 0;
        if(n==2||n==1) return 1;
        if(dp.size() <= n || dp[n] == -1)
            dp.resize(n + 1, -1);
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};
