class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2;
        int j=2;
        if(nums.size()==1) return 1;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[j-2]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};