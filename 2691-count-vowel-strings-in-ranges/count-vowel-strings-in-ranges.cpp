class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
       int n = words.size();
        vector<int> Prefix(n + 1, 0);
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < n; i++) {
            Prefix[i + 1] = Prefix[i];
            if (vowels.count(words[i].front()) && vowels.count(words[i].back())) {  
                Prefix[i + 1]++;
            }
        }

        vector<int> ans(queries.size(), 0);
        for (int j = 0; j < queries.size(); j++) {
            int left = queries[j][0];
            int right = queries[j][1];
            ans[j] = Prefix[right + 1] - Prefix[left];
        }

        return ans;
       
    }
};