class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>l(height.size()),r(height.size());
        int maxi=INT_MIN;
        for(int i=0;i<height.size();i++){ 
          maxi=max(maxi,height[i]);
          l[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=height.size()-1;i>=0;i--){
             maxi=max(maxi,height[i]);
            r[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<height.size();i++){
            ans+=min(l[i],r[i])-height[i];
        }
    return ans;
    }

};
