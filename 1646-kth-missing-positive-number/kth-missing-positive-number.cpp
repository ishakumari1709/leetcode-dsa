class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing_count = 0;
        int current = 1;
        int i = 0;
        while (missing_count < k) {
            if (i < arr.size() && arr[i] == current) {
                i++;
            } else {
                missing_count++;
            }
            if (missing_count == k) {
                return current;
            }
            current++;
        }
        return -1;
    }
};