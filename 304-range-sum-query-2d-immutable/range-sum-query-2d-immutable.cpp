class NumMatrix {
public:
   vector<vector<int>> prefixSum;
    NumMatrix(vector<vector<int>>& matrix) {
      int n = matrix.size();
        int m = matrix[0].size();

       
        prefixSum = vector<vector<int>>(n, vector<int>(m, 0));

        
        prefixSum[0][0] = matrix[0][0];
        for (int i = 1; i < m; i++) {
            prefixSum[0][i] = prefixSum[0][i - 1] + matrix[0][i];
        }
        for (int j = 1; j < n; j++) {
            prefixSum[j][0] = prefixSum[j - 1][0] + matrix[j][0];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2][col2] 
       - (row1 > 0 ? prefixSum[row1 - 1][col2] : 0) 
       - (col1 > 0 ? prefixSum[row2][col1 - 1] : 0) 
       + (row1 > 0 && col1 > 0 ? prefixSum[row1 - 1][col1 - 1] : 0);
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */