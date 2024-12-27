class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> tails(nums.size(),0);
        
        int size=0;
        
        for(int i=0;i<nums.size();i++){
            int low=0;
            int high=size-1;
            
            while(low<=high){
                int mid=(high+low)/2;
                if(tails[mid]<nums[i]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
            tails[low]=nums[i];
            if (low==size) size++;

            }
            return size; 
        
        }
    
};