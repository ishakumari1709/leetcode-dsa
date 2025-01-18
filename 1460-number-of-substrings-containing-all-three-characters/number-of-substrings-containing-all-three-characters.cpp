class Solution {
public:
    int numberOfSubstrings(string s) {
        int start=0;
        int end=0;
        int count=0;
        unordered_map<char,int> map;
        while(end<s.length()){
            map[s[end]]++;
            while(map['a']>0 && map['b']>0 && map['c']>0){ // Check if the window contains at least one 'a', 'b', and 'c'
                count+=s.length()-end;
                map[s[start]]--; //start shrinking from start
                start++;
            }
            end++;
        }
        
        return count;
    }
};