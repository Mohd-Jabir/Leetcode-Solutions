class Solution {
public:
void findcombination(int ind,vector<int>c,int t,vector<vector<int>>&ans,vector<int>temp){
     if(t==0){
        ans.emplace_back(temp);
     
     return ;
}
   for(int i=ind;i<c.size();i++){
    if(i>ind&&c[i]==c[i-1])continue;
    if(c[i]>t) break;
    temp.push_back(c[i]);
    findcombination(i+1,c,t-c[i],ans,temp);
    temp.pop_back();
   }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        findcombination(0,candidates,target,ans,temp);
        return ans;
    }
};
