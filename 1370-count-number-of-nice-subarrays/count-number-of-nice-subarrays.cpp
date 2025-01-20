class Solution {
    private: int helper(vector<int> nums,int k){
        int start=0;
        int end=0;
        int count=0;
        int totalS=0;
       for(end=0;end<nums.size();end++){
            if(nums[end]%2!=0){
                count++;

            }
            while(count>k){
               if(nums[start]%2 !=0){
                count--;
                
               }
               start++;
              
            }
            totalS+=end-start+1;
        }
        return totalS;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};