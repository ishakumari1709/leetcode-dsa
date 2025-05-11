class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        unordered_map<char, int> map;
        int maxS = 0;
        int n = s.size();
        while (end < n) {
            map[s[end]]++;
            while (map[s[end]] > 1) {
                
                map[s[start]]--;
                start++;
            }
            
            maxS = max(maxS, end - start + 1);
            
            end++;
        }
        return maxS;
    }
};