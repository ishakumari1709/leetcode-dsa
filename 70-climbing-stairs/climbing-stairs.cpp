class Solution {
private:
   int climb(int n, vector<int>& dp) {
       if (n <= 1) {
           return 1;
       }
       if (dp[n] != -1) {
           return dp[n];
       }
       dp[n] = climb(n - 1, dp) + climb(n - 2, dp);
       return dp[n];
   }    

public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return climb(n, dp);   
    }
};