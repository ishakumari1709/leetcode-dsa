class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice=INT_MAX;
       int maxProfit=0;
        for(int i=0;i<prices.size();i++){ //update the minPrice if current price (prices[i]) is lower
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            maxProfit= max(maxProfit,prices[i]-minPrice); //update max profit
        }
        return maxProfit;
        

    }
};