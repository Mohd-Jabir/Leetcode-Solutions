class Solution {
public:
int ans=INT_MAX;
int find(vector<int>&nums){
    int maxi=INT_MIN;
    for(auto x:nums) maxi=max(x,maxi);
    return maxi;
}
void solve(int ind,vector<int>&cookies,vector<int>&nums){
    if(ind>=cookies.size()){ 
        ans=min(ans,find(nums));
        return; }
    int temp=cookies[ind];
    for(int i=0;i<nums.size();i++){
        nums[i]+=temp;
        solve(ind+1,cookies,nums);
        nums[i]-=temp;
    }
}
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>nums(k,0);     
        solve(0,cookies,nums);
        return ans;
    }
};
