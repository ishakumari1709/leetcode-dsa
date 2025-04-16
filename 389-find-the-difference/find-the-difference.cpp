class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int>mpp;
        for(int i=0;i<t.length();i++){
            mpp[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            mpp[s[i]]--;
        }
        for(auto it:mpp){
            if(it.second>0){
                return it.first;
            }
        }
        return '0';
        }
    };