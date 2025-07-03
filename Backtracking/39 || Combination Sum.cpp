class Solution {
public:
    void findcombination(int ind,vector<int>c,int t,vector<vector<int>>&ans,vector<int>temp){
        if(ind==c.size()){
            if(t==0) ans.emplace_back(temp);
            return;
        }
        if(t>=c[ind]){
            temp.push_back(c[ind]);
            findcombination(ind,c,t-c[ind],ans,temp);
            temp.pop_back();
        }
        findcombination(ind+1,c,t,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        findcombination (0,candidates,target,ans,temp);
        return ans;
    }
};
