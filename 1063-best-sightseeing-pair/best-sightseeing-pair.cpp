class Solution {  //https://www.youtube.com/watch?v=acZLDtayXlU
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = 0;
        int maxPotential = values[0] + 0; 
        
        for (int j = 1; j < values.size(); ++j) {
            
            maxScore = max(maxScore, maxPotential + values[j] - j);
        
            maxPotential = max(maxPotential, values[j] + j);
        }
        
        return maxScore;
    }
};