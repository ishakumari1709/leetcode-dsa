class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
    unordered_map<char, char> matchingBrackets = {
        {')', '('}, 
        {'}', '{'}, 
        {']', '['}
    };

    for (char ch : s) {
        if (matchingBrackets.count(ch)) {
            if (!st.empty() && st.top() == matchingBrackets[ch]) {
                st.pop();  
            } else {
                return false;  
            }
        } else {
            st.push(ch);  
        }
    }
    return st.empty();
    }
};