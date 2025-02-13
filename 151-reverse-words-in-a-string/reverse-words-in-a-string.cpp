class Solution {
public:
    string reverseWords(string s) {
         int i = 0,n=s.length();
        vector<string> words;
        string temp="";

        while(i<n) {
            if (s[i]!=' ') {
                temp+=s[i];
            } else if(!temp.empty()) {
                words.push_back(temp);
                temp="";
            }
            i++;
        }
        if (!temp.empty()) {
            words.push_back(temp);
        }

        string ans = "";
        for (int j = words.size() - 1; j >= 0; j--) {
            ans+=words[j];
            if(j > 0){
                ans += " ";
            }
        }

        return ans;
    }
};