class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return {};

        vector<int> left_max(n), right_max(n), result(n - k + 1);
        for (int i = 0; i < n; ++i) {
            if (i % k == 0) {
                left_max[i] = nums[i]; 
            } else {
                left_max[i] = max(left_max[i - 1], nums[i]);
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (i == n - 1 || (i + 1) % k == 0) {
                right_max[i] = nums[i];
            } else {
                right_max[i] = max(right_max[i + 1], nums[i]);
            }
        }
        for (int i = 0; i <= n - k; ++i) {
            result[i] = max(right_max[i], left_max[i + k - 1]);
        }

        return result;   
        
    }
};