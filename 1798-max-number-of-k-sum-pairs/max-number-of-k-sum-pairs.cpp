class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int j = nums.size() - 1;
        int i = 0;
        int operation = 0;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == k) { 
                i++;
                j--;
                operation++;
            } else if (sum < k) {
               
                i++;
            } else {
                
                j--;
            }
        }
    return operation;
}
};