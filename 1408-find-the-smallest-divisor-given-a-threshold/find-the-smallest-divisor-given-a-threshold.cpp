class Solution {
    private: 
    bool isPossible(vector<int> nums,int divisor,int threshold){
        int sum=0;

        for(int i=0;i<nums.size();i++){
          sum+=((nums[i]+divisor-1)/divisor);
        }
        return threshold>=sum;

    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int n=nums.size()-1;
        int end=*max_element(nums.begin(),nums.end());
        int mid;
        

        while(start<=end){
            mid=(start+end)/2;
           
            if(isPossible(nums,mid,threshold)){
               
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
            
        }
        return start;
        
    }
};