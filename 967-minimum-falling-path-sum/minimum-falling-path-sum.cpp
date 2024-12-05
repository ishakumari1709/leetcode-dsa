class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
       int n = matrix.size();
        for (int row=1;row< n;row++) {
            for (int col=0;col< n;col++) {
                int up=matrix[row - 1][col];
                int DLeft=(col > 0) ? matrix[row - 1][col - 1] : INT_MAX;
                int DRight=(col < n - 1) ? matrix[row - 1][col + 1] : INT_MAX;
                matrix[row][col] += min({up,DLeft,DRight});
            }
        }
        int minSum = INT_MAX;
        for (int col=0;col<n;++col) {
            minSum=min(minSum,matrix[n - 1][col]);
        }
        return minSum;
    }
};