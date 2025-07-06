class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,mini=prices[0];
        for(auto x:prices){
            if(mini==x) continue;
            int num=x-mini;
            maxi=max(num,maxi);
            mini=min(mini,x);
        }
        return maxi;
    }
};
