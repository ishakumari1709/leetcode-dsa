class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> newMap;
        int n=nums.size();
        for(int i=0;i<n;i++){
          int  req=target-nums[i];
            if(newMap.find(req)!= newMap.end()){
                return {i,newMap[req]};
            }
            newMap[nums[i]] = i;
        }
        return {};
    }
};