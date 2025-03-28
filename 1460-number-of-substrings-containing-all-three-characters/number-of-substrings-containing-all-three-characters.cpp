class Solution {
public:
    int numberOfSubstrings(string s) {
        int freq[3] = {0}, n = s.size(), count = 0, start = 0, uniqueChars = 0;

        for (int end = 0; end < n; end++) {
            if (++freq[s[end] - 'a'] == 1) uniqueChars++;

            while (uniqueChars == 3) {
                count += n - end;
                if (--freq[s[start] - 'a'] == 0) uniqueChars--;
                start++;
            }
        }
        return count;
        
    }
};