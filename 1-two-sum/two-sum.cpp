class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(map.find(req)!=map.end() && map[req]!=i){
                return{i,map[req]};

            }
        }
        return {} ;

        
    }
};