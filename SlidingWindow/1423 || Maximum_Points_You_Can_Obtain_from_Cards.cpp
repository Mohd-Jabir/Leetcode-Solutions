class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        int l=cardPoints.size(),r=k-1,maxi=sum;
        while(r>=0){
            sum-=cardPoints[r];
            r--;
            l--;
            sum+=cardPoints[l];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
