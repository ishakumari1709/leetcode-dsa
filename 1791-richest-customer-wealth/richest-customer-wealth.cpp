class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        vector<int> sum(m,0);
        int max=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum[i]+=accounts[i][j];
                /*if(sum>max){
                    sum=max;
                }*/

            }
    
        }
        return *max_element(sum.begin(),sum.end());
        
    }
};