class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size(), start = 0, end = 0, count = 0, maxi = 0;

        auto isVowel = [](char c) {
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        };

        while (end < n) {
            if (isVowel(s[end])) count++;

            if (end - start + 1 == k) {
                maxi = max(maxi, count);
                if (isVowel(s[start])) count--;  
                start++;
            }
            end++;
        }
        return maxi;
    }
};