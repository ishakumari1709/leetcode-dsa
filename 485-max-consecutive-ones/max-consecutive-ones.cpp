class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start=0;
        int end=0;
        int maxL=0;
        while(end<nums.size()){
            if(nums[end]==0){
                start=end+1;
            }
            
            maxL=max(maxL,end-start+1);
            end++;
            
        }
        return maxL;
    }
};