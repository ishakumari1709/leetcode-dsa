class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int, int> countMap;
        vector<int> result;

        // Count each element in nums1
        for (int num : nums1) {
            countMap[num]++;
        }

        // Check elements in nums2 and find the intersection
        for (int num : nums2) {
            if (countMap[num] > 0) {  // If num is in nums1 and still has occurrences left
                result.push_back(num);  // Add to result
                countMap[num]--;  // Decrease the count
            }
        }

        return result;
    }
};