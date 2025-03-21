class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> prefixSum(m + 1, vector<int>(n + 1, 0));
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                prefixSum[i][j] = mat[i - 1][j - 1] 
                                + prefixSum[i - 1][j] 
                                + prefixSum[i][j - 1] 
                                - prefixSum[i - 1][j - 1];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int x1 = max(0, i - k), y1 = max(0, j - k);
                int x2 = min(m - 1, i + k), y2 = min(n - 1, j + k);
                ans[i][j] = prefixSum[x2 + 1][y2 + 1] 
                          - prefixSum[x1][y2 + 1] 
                          - prefixSum[x2 + 1][y1] 
                          + prefixSum[x1][y1];
            }
        }
        
        return ans;
    }
};