class Solution {
public:
    int countSubarraysWithAtMostKodds(vector<int>& nums,int k){
        int start=0,answer=0,count=0;//count=no of odds
        for(int end=0;end<nums.size();++end){
            if(nums[end]%2!=0){ //if the current no  is odd
                count++; //increment the count od odd numbers
            }
            while(count>k){
                if(nums[start]%2 !=0){
                    count--;
                }
                start++;
            }
            answer+=end-start+1;
        }
        return answer;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countSubarraysWithAtMostKodds(nums,k)-countSubarraysWithAtMostKodds(nums,k-1);

        
    }
};