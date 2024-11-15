class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; // No houses to rob
        if (n == 1) return nums[0]; // Only one house to rob

        // Create a dp array to store the max money robbed up to each house
        vector<int> dp(n, 0);
        dp[0] = nums[0]; // Money robbed from the first house
        dp[1] = max(nums[0], nums[1]); // Max money robbed from the first two houses

        // Fill the dp array for the rest of the houses
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        }

        return dp[n - 1]; // The maximum money robbed is at the last house
    }
};