class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> map;

        for (const string& s:strs) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }
            string key;
            for (int count : freq) {
                key += to_string(count) + "#";
            }
            map[key].push_back(s);  
        } 

        vector<vector<string>> result;
        for (auto& entry : map) {
            result.push_back(entry.second);
        }
        return result;
        }  
    
};