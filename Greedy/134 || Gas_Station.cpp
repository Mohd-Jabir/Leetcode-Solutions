class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int t=0,gt=0,ct=0,ans=0;
    for(int i=0;i<gas.size();i++){
        gt+=gas[i];
        ct+=cost[i];
        t+=gas[i]-cost[i];
        if(t<0){
            ans=i+1;
            t=0;
        }        
    }
    return (gt<ct)?-1:ans;
    }
};
