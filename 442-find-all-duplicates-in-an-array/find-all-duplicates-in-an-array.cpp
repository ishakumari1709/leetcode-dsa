class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for (const auto& pair : map) {
            if (pair.second >= 2) {
                result.push_back(pair.first);
            }
        }
        return result;

        
    }
};