class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        vector<int> topF;
        for (int num : nums) {
            seen[num]++;
        }
        vector<pair<int, int>> result;
        for (auto& i : seen) {
            result.push_back({i.second,i.first});  
        }
        sort(result.rbegin(),result.rend());
        vector<int> result2;
        for(int i=0;i<k;i++){
            result2.push_back(result[i].second);

        }
        return result2;

        
    }
};