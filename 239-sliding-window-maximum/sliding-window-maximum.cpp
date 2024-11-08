class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return {};

        vector<int> left_max(n), right_max(n), result(n - k + 1);

        // Fill left_max array
        for (int i = 0; i < n; ++i) {
            if (i % k == 0) {
                left_max[i] = nums[i];  // Start of a new block
            } else {
                left_max[i] = max(left_max[i - 1], nums[i]);
            }
        }

        // Fill right_max array
        for (int i = n - 1; i >= 0; --i) {
            // Check if `i` is the end of a block or the last element
            if (i == n - 1 || (i + 1) % k == 0) {
                right_max[i] = nums[i];
            } else {
                right_max[i] = max(right_max[i + 1], nums[i]);
            }
        }

        // Calculate the maximum for each sliding window
        for (int i = 0; i <= n - k; ++i) {
            result[i] = max(right_max[i], left_max[i + k - 1]);
        }

        return result;   
        
    }
};