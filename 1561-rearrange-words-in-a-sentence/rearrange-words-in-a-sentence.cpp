class Solution {
public:
    string arrangeWords(string text) {
       vector<pair<string,int>> words;
       string word;
       int index=0;
       text[0]=tolower(text[0]);
       for(char c: text){
        if(c==' '){
            words.push_back({word,index++});
            word.clear();
        }else{
            word+=c;
        }
       }
       words.push_back({word,index}); //to add last word
        stable_sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.first.length() < b.first.length();
});

        string result;
        for (auto& w : words) {
            result += w.first + " ";
        }
        result[0] = toupper(result[0]);
        result.pop_back();  

        return result;
    }
};