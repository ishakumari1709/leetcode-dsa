class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> map;
        int n=s.size();
        int count=0;
        int end=0;
        int start=0;
    while(end<n){
        map[s[end]]++;
        while(map['a']>0 && map['b']>0 && map['c']>0){
            count+=n-end;
            map[s[start]]--;
            start++;


        }
    end++;
    }
     return count;
        
    }
};