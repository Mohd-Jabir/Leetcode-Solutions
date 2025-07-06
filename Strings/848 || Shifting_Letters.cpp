class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum=0;
        for(auto x:shifts) sum+=x;
        int i=0;
        for(auto &x:s){
            x=(x-'a'+sum)%26+'a';
            sum=sum-shifts[i];
            i++;
        }
        return s;
    }
};
