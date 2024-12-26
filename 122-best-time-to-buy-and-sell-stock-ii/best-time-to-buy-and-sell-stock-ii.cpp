class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int start=prices[0];
       int max=0;
       for(int i=0;i<prices.size();i++){
        if(start<prices[i]){
            max+=prices[i]-start;
        }
        start=prices[i];
       }
       return max;
    }     

};