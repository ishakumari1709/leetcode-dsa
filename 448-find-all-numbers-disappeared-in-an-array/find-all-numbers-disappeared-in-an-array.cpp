class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int n=nums.size();
        vector<int> arr;
        for(int i=1;i<=n;i++){
            if(set.find(i)==set.end()){
                arr.push_back(i);
            }
        }
        return arr;
    }
};