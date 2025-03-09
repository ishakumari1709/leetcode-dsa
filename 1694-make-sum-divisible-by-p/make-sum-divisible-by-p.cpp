class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long totalSum = accumulate(nums.begin(), nums.end(), 0L);
        int need=totalSum % p;
        if (need==0) return 0; 
        
        unordered_map<int, int> mp;
        mp[0]=-1; 
        long sum=0;
        int minLen=nums.size();

        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            int want=(sum%p-need+p)%p; 
            if (mp.find(want)!=mp.end()) {
                minLen=min(minLen,i-mp[want]);
            }
            mp[sum % p]=i;
        }

        return minLen==nums.size() ?-1:minLen;
        
    }
};