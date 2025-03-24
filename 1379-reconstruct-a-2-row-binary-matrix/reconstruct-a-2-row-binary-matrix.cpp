class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int m=colsum.size();
        vector<vector<int>> mat(2, vector<int>(m, 0));
        //if colsum[i]==2,mat[i][j]=1
        //if colsum[i]==0,mat[i][j]=0
        //if[1,0]:upper>lower,[0,1]:lower>upper
        for(int i=0;i<m;i++){
            if(colsum[i]==2){
                if(upper>0 && lower>0){
                    mat[0][i]=1;
                    mat[1][i]=1;
                    upper--;
                    lower--;
                }else{
                    return {};
                }

            
        }
        }
        for(int i=0;i<m;i++){
            if(colsum[i]==1){
                if(upper>lower && upper>0){
                    mat[0][i]=1;
                    upper--;
                }else if(lower>0){
                    mat[1][i]=1;
                    lower--;

                }else{
                    return {};
                }
            }
        }
        if (upper != 0 || lower != 0) return {};
        
        
        
        return mat;
    }
};