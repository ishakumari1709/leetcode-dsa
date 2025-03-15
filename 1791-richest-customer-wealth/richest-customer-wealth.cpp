class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        int rows=accounts.size();
        int columns=accounts[0].size();
        int sum=0;
        int result=0;
        for(int i=0;i<rows;i++){
            sum=0;
            for(int j=0;j<columns;j++){
               sum+=accounts[i][j];
               
               }
               maxi=max(sum,maxi);
            
        }
        return maxi;
        
    }
};