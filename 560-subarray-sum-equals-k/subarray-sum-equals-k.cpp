class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n = nums.size();
    int answer = 0;
    unordered_map<int, int> prefixSumsFrequency;
    prefixSumsFrequency[0] = 1;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += nums[i];
        answer += prefixSumsFrequency[prefixSum - k];
        prefixSumsFrequency[prefixSum]++;
    }
    return answer;
    }
};