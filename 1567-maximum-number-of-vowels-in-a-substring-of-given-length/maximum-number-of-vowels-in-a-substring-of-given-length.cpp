class Solution {
private:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }

public:
    int maxVowels(string s, int k) {
        int maxCount = 0;
        int start = 0;
        int end = 0;
        int count = 0;
        while (end < s.length()) {
            if (isVowel(s[end])) {
                count++;
            }
            if (end - start + 1 > k) {
                if ( isVowel(s[start])) {
                    count--;
                }
                start++;
            }
            maxCount = max(maxCount, count);
            end++;
        }
        return maxCount;
    }
};