class NumMatrix {
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        prefix=vector<vector<int>>(row,vector<int> (col,0));
        prefix[0][0]=matrix[0][0];
        for(int i=1;i<col;i++){
            prefix[0][i]=prefix[0][i-1]+matrix[0][i];
        }
        for(int i=1;i<row;i++){
            prefix[i][0]=prefix[i-1][0]+matrix[i][0];
        }
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                prefix[i][j]=matrix[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            }
        }

        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = prefix[row2][col2];
        int top = (row1 > 0) ? prefix[row1-1][col2] : 0;
        int left = (col1 > 0) ? prefix[row2][col1-1] : 0;
        int topLeft = (row1 > 0 && col1 > 0) ? prefix[row1-1][col1-1] : 0;
        return total - top - left + topLeft;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */