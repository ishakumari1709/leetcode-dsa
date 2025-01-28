class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int minDiff=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(target-sum);
                if(sum>=target){
                    k--;
                }else if(sum<=target){
                    j++;
                }
                if(diff<minDiff){
                    minDiff=diff;
                    ans=sum;
                }
            }
        }
        return ans;
        
    }
};