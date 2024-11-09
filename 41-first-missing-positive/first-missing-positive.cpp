class Solution {
public:

    int firstMissingPositive(vector<int>& nums) {
        bool isOne = false;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (nums[i] == 1) {
                isOne = true;
            }
        }

        if (!isOne) return 1;

        for (int i = 0; i < n; i++) {
                if (nums[i] <= 0 || nums[i] > n) {
                    nums[i] = 1;
                }
            }
        for(int i=0;i<n;i++){
            int index=abs(nums[i]);
            if(index==n){
                nums[0]=-abs(nums[0]);
            }
            else{
                nums[index]=-abs(nums[index]);
            }
        }    
        for(int i=1;i<n;i++){
            if(nums[i]>0){
                return i;
            }
        }

        return nums[0] > 0 ? n : n+1;
    } 
    
};