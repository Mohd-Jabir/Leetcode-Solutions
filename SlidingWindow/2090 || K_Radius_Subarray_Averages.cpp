class Solution {
public:
   vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(),-1);
        if(k==0) return nums;
        int window=k*2+1;
        if(window>ans.size()) return ans;
        long long sum=0;
        for(int i=0;i<window;i++){
            sum+=nums[i];
        }
        ans[k]=sum/window;
        long long l=0;
        for(int r=window;r<nums.size();r++){
            k++;
            sum-=nums[l];
            sum+=nums[r];
            ans[k]=sum/window;
            l++;
        }
        return ans;
    }
};
