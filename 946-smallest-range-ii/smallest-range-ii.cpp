class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int result = nums[n - 1] - nums[0];
        int bestL = nums[0] + k;
        int bestR = nums[n - 1] - k;
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            minn = min(bestL, nums[i + 1] - k);
            maxx = max(bestR, nums[i] + k);
            result = min(result, maxx - minn);
        }
        return result;
    }
};