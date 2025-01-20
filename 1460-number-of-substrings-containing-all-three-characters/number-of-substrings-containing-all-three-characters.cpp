class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int start=0;
        int end=0;
        unordered_map<char,int> map;
        while(end<s.length()){
            map[s[end]]++;
            while(map['a'] >0 && map['b'] && map['c'] >0){
                count+=s.length()-end;
                map[s[start]]--;
                start++;
            }
            end++;
        }
        return count;
    }
};