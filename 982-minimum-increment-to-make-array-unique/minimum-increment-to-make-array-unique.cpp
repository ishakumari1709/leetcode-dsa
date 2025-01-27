class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1];
        int extra=0;
        vector<int> result(max+nums.size());
        int ans=0;
        for(int num: nums){
            result[num]+=1;
        }
        for(int i=0;i<result.size();i++){
            if(result[i]>1){
                extra=result[i]-1;
                result[i+1]+=extra;
                ans+=extra;
            }

        }
        return ans;
        
    }
};