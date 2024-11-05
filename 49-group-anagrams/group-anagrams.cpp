class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Hash map to store sorted strings as keys and anagram groups as values
        unordered_map<string,vector<string>> anagramMap;
        // Iterate through each string in the input array
        for(const string& str:strs){
              // Sort the string to form the key
            string sortedStr=str;
            sort(sortedStr.begin(),sortedStr.end());
            // Add the original string to the map under the sorted key
            anagramMap[sortedStr].push_back(str);
        }
        // Collect the groups of anagrams from the hash map
        vector<vector<string>>result;
        for(auto& entry: anagramMap){
            result.push_back(entry.second);
        }
        return result;
    }
};