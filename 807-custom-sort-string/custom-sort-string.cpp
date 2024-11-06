class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>count;
        for(char c:s){//Count occurrences of each character in 's'
            count[c]++;
        }
        string result;
        for(char c: order){ //Build the result based on the 'order' string
            if(count.count(c)){
                result.append(count[c],c);
                count.erase(c);
            }
        }
        //Append remaining characters not in 'order'
        for (auto &[c, freq] : count) {
            result.append(freq, c); // Append character 'c', freq times
        }

        return result;
    }
};