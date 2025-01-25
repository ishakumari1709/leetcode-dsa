class Solution {
public:
    int compress(vector<char>& chars) {
         vector<char> result; 
        int i = 0;

        while (i < chars.size()) {
            char current_char = chars[i];
            int count = 0;
            while (i < chars.size() && chars[i] == current_char) {
                count++;
                i++;
            }

            result.push_back(current_char);

            if (count > 1) {
                string count_str = to_string(count);
                for (char c : count_str) {
                    result.push_back(c);
                }
            }
        }
        for (int j = 0; j < result.size(); j++) {
            chars[j] = result[j];
        }

        return result.size(); 
        
    }
};