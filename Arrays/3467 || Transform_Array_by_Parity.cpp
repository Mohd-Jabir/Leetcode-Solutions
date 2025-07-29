class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even=0,odd=0;
        vector<int>ans;
        for(auto val:nums)  (val%2==0)?even++:odd++;
        for(auto val:nums){
            if(even!=0){ ans.push_back(0); even--;}
            else if(even==0&&odd!=0){ ans.push_back(1); odd--;}
        }
        return ans;
    }
};
