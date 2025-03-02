class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1 == sentence2) return true;

        vector<string> words1, words2;
        stringstream ss1(sentence1), ss2(sentence2);
        string word;
        while (ss1 >> word) words1.push_back(word);
        while (ss2 >> word) words2.push_back(word);
        if (words1.size() > words2.size()) swap(words1, words2);
        int m = words1.size(), n = words2.size();
        int i = 0, j = 0;
        while (i < m && words1[i] == words2[i]) i++;
        while (j < m - i && words1[m - 1 - j] == words2[n - 1 - j]) j++;
        return (i + j == m);
       }
};