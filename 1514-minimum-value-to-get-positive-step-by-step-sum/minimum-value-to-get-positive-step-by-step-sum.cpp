class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            minSum=min(minSum,sum);
        }
        return 1-minSum;
        
    }
};