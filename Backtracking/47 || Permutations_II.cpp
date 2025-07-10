class Solution {
public:
void solve(vector<bool>&used,vector<int>nums,vector<vector<int>>&ans,vector<int>&temp){
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]) continue;
        if((i>0&&nums[i]==nums[i-1]&&!used[i-1])) continue;
        used[i]=true;
        temp.push_back(nums[i]);
       solve(used,nums,ans,temp);
        temp.pop_back();
        used[i]=false;
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>used(nums.size(),false);
        solve(used,nums,ans,temp);
        return ans;
    }
};
