class Solution {
public:
    int res=0;
    void solve(int n,int ind,vector<bool>&vis) {
        if(ind>n) {
            res++;
            return;
        }
        for(int i=1;i<=n; i++) {
            if(!vis[i]&&(i%ind==0||ind%i==0)) {
                vis[i]= true;
                solve(n,ind+1,vis);
                vis[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        vector<bool>vis(n+1,false);
        solve(n,1,vis);
        return res;
    }
};
