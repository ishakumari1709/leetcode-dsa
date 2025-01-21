class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int start = 0, end = 0, maxOperation = 0, n = nums.size();
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        int target = totalSum - x;
        if (target < 0) return -1;
        if (target == 0) return n;

        int currentSum = 0;
        while (end < nums.size()) {
            currentSum += nums[end];
            while (currentSum > target) {
                currentSum -= nums[start];
                start++;
            }
            if (currentSum == target) {
                maxOperation = max(maxOperation, end - start + 1);
            }
            end++;
        }

        return (maxOperation == 0) ? -1 : (n - maxOperation);
    }
};