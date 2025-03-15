class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        vector<vector<int>> result(columns, vector<int>(rows, 0)); 
        for(int i=0;i<columns;i++){
            for(int j=0;j<rows;j++){
                result[i][j]=matrix[j][i];
            }
        }
        return result;
        
    }
};