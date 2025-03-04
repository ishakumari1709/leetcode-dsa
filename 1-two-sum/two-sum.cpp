class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> newM;
        vector<int> newArray;
        
        for(int i=0;i<nums.size();i++){
            int required=target-nums[i];
            if(newM.find(required)!=newM.end()){
            int required=target-nums[i];
            newArray.push_back(newM[required]); 
            newArray.push_back(i);
               
            }
            newM[nums[i]] = i;
            }
         return newArray;
    }
};