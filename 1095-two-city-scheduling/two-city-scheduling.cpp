class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
         sort(costs.begin(),costs.end(),[](vector<int>a,vector<int>b){
           return a[0]-b[0]<a[1]-b[1];
        });
        int total=0;
        int n=(costs.size()/2);
        for(int i=0;i<n;i++){
           total+=costs[i][0];
        }
        for(int i=n;i<costs.size();i++){
            total+=costs[i][1];
        }
        return total;
    }
};