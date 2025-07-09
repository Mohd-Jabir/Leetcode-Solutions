class Solution {
public:
    int solve(vector<int>v){
        int count=0;
        int i,j;
        for(i=0,j=0;i<v.size();i++,j+=2){
            count+=abs(v[i]-j);
        }
        return count;
    }
    int minSwaps(vector<int>& nums) {
        vector<int>e,o;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) e.push_back(i);
            else o.push_back(i);
        }
        if(abs((int)e.size()-(int)o.size())>1) return -1;
        else if(e.size()==o.size()) return  min(solve(e),solve(o));
        else if(e.size()>o.size()) return solve(e);
        else return solve(o);
    }
};
