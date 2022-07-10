
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int tc=0;
        for(int i=0;i<cost.size();i++){
            if(i>1){
                cost[i] += min(cost[i-1],cost[i-2]);
            }
        }
        tc = min(cost[cost.size()-1],cost[cost.size()-2]);
        return tc;
    }
};