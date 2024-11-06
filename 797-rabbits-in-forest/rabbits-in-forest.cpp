class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> map;
    
    // Count occurrences of each answer
    for (int i = 0; i < answers.size(); i++) {  // Use 'answers' instead of 'arr'
        map[answers[i]]++;
    }
    
    int ans = 0;
    
    // Calculate the minimum number of rabbits
    for (auto& [key, count] : map) {
        int groupSize = key + 1;  // Each group has 'key + 1' rabbits
        int groups = ceil(count * 1.0 / groupSize);  // Number of groups needed for this answer
        ans += groups * groupSize;  // Add the total rabbits for this answer
    }
    
    return ans;
    }
};