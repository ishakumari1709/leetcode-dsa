class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSumFreq;
        int sum=0;
        int count=0;
        prefixSumFreq[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(prefixSumFreq.count(sum-k)){
                count+=prefixSumFreq[sum-k];
            }
            prefixSumFreq[sum]++;
        }
        return count;
    }
};