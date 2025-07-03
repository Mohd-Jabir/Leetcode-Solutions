class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long ct1=0,ct2=0,sum1=0,sum2=0;
        for(auto x:nums1){
             if(x==0) ct1++;
             sum1+=x; 
            }
        for(auto x:nums2){ 
            if(x==0) ct2++;
            sum2+=x;
            }
        sum1+=ct1,sum2+=ct2;
        if(sum1>sum2){
            if(ct2==0) return -1;
        }
        else if(sum1<sum2){
             if(ct1==0) return -1;
        }
        return max(sum1,sum2);
    }
};
