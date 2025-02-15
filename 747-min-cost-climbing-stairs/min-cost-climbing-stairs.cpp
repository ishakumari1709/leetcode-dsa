class Solution {
         
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int m=cost.size();

        for(int i=2;i<m;i++){
            cost[i]+=min(cost[i-1],cost[i-2]);

        }
        return min(cost[m-1],cost[m-2]);
        
    }
};