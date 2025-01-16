class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int minL=nums.size()+1;
        int sum=0;
        while(end<nums.size()){
            sum+=nums[end];
            while(sum>=target){
                minL=min(minL,end-start+1);
                sum-=nums[start];
                start++;

            }
            end++;
        }

        return minL == nums.size() + 1 ? 0 : minL;

        
    }
};