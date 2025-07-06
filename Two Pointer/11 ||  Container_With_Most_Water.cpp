class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxi=INT_MIN;
        while(i<j){
            int t=min(height[i],height[j])*(j-i);
            maxi=max(maxi,t);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
    }
};
