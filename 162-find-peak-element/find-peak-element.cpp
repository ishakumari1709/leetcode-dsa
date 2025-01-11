class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Compare mid with its right neighbor
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1; // Move to the right half
            } else {
                high = mid; // Move to the left half
            }
        }

        // `low` and `high` will eventually converge to the peak
        return low;
        
    }
};