class Solution {
public:
bool isPalindrome(const string& str, int start, int end) {
        while (start < end) {
            if (str[start] != str[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string longest = "";

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j)) {
                    if (j - i + 1 > longest.length()) {
                        longest = s.substr(i, j - i + 1);
                    }
                }
            }
        }

        return longest;

        
    }
};