class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,suml=0,sumr=0;
        while(i<nums.size()){
            suml+=nums[i];
            i++;
        }
        vector<int> v;
        while(j>=0 && suml>=sumr){
            suml-=nums[j];
            sumr+=nums[j];
            v.push_back(nums[j]);
            j--;
        }
        return v;
    }
};