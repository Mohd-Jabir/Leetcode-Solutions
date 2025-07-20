class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        map<long long,long long>m;
        for(auto x:points){
            m[x[1]]++;
        }
       vector<long long>temp;
        for(auto [a,b]:m){
            if(b>=2) temp.push_back(1LL*(b*(b-1))/2);
        }
        const int mod=1e9+7;
        long long ans=0;
        long long sum=0;
        for(auto x:temp){
            ans=(ans+x*sum%mod)%mod;
            sum=(sum+x)%mod;
        }
        return (int)ans;
    }
};
