class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> Sorted;
        for (const auto& point : points) {
            Sorted.push_back(point[0]);
        }

        sort(Sorted.begin(), Sorted.end());

        int maxWidth = 0;
        for (int i=0;i<Sorted.size()-1;i++) {
            maxWidth=max(maxWidth,Sorted[i+1]-Sorted[i]);
        }

        return maxWidth;
        
    }
};