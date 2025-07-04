class Solution {
public:
    int winningPlayerCount(int n,vector<vector<int>>& pick) {
        map<pair<int,int>,int>m;
        for(auto& p:pick) {
            m[{p[0],p[1]}]++;
        }
        vector<int>maxi(n,0);
        for(auto& t:m) {
            int p=t.first.first;
            int c= t.second;
            maxi[p]=max(maxi[p],c);
        }
        int ans=0;
        for(int i=0;i<n;i++) {
            if(maxi[i]>=i+1) {
                ans++;
            }
        }
        return ans;
    }
};
