class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        vector<int> xAxis;
        
        for(int i=0;i<n;i++){
            xAxis.push_back(points[i][0]);
        }
        sort(xAxis.begin(),xAxis.end());
        
        int maxWidth = 0;
        for(int i = 1; i < n; i++) {
            maxWidth = max(maxWidth, xAxis[i] - xAxis[i - 1]);
        }

        return maxWidth;
    }
};