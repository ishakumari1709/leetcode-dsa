class Solution {
public:
    string reverseWords(string s) {
        int end;
        int start=0;
        for(end=0;end<=s.length();end++){
            if(s[end]==' ' || end==s.length()){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;//move start to the next word;
            }
        }
        return s;
    }
};