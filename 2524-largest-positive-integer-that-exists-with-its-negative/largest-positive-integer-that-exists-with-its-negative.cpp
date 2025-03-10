class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
           if(map.find(-nums[i])!=map.end()){
            arr.push_back(abs(nums[i]));
           }
        }
        return arr.empty() ? -1 : *max_element(arr.begin(), arr.end());
    }
};