class Solution {
public:
bool solve(string &s,int ind,int t) {
    if(ind==s.size()) return t==0;
    int num=0;
    for(int i=ind;i<s.size();i++) {
        num=num*10+(s[i]-'0');
        if(num>t) break;
        if(solve(s,i+1,t-num)) return true;
    }
    return false;
}
int punishmentNumber(int n) {
    int ans=0;
    for(int i=1;i<=n;i++) {
        int sq=i*i;
        string s=to_string(sq);
        if(solve(s,0,i)) {
            ans+=sq;
        }
    }
    return ans;
}
};
