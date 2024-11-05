class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
    unordered_map<int, int> map;
    map[0] = -1;  // Initialize with cumulative sum 0 at index -1

    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {  // Use 'nums.size()' here
        // Update sum: -1 for 0, +1 for 1
        if (nums[i] == 0) {
            sum += -1;
        } else if (nums[i] == 1) {
            sum += 1;
        }

        // Check if this cumulative sum has been seen before
        if (map.find(sum) != map.end()) {
            int idx = map[sum];
            int len = i - idx;
            if (len > ans) {
                ans = len;
            }
        } else {
            // Store the first occurrence of this cumulative sum
            map[sum] = i;
        }
    }

    return ans;
    }
};