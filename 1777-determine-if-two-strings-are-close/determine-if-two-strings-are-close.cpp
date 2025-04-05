class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        if (word1.size() != word2.size())
            return false;
        for (char ch : word1) {
            map1[ch]++;
        }
        for (char ch : word2) {
            map2[ch]++;
        }
        set<char> char1, char2;
        for (auto& p : map1)
            char1.insert(p.first);
        for (auto& p : map2)
            char2.insert(p.first);
        if (char1 != char2)
            return false;

        vector<int> f1, f2;
        for (auto& p : map1)
            f1.push_back(p.second);
        for (auto& p : map2)
            f2.push_back(p.second);
        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());

        return f1 == f2;
    }
};