class Solution {
public:
    bool checkIfExist(vector<int>& arr){
       map<int,int>m;
       for(auto x:arr) m[x]++;
       for(auto x:arr){
        if(x==0&&m[x]>1) return true;
        if(x!=0&&m[x*2]!=0) return true;
       }
       return false;
    }
};
