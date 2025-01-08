class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0;
        int c1=0;
        int r2=n-1;
        int c2=n-1;
        int count=1;
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        while(r1<=r2 && c1<=c2){ //o(n)
            for(int c=c1;c<=c2;c++){
                matrix[r1][c]=count++; //o(n)
            }
            for(int r=r1+1;r<=r2;r++){
                matrix[r][c2]=count++;//o(m)
            }
            if(r1<r2 && c1<c2){
                for(int c=c2-1;c>=c1;c--){
                    matrix[r2][c]=count++; //o(n)
                }
                for(int r=r2-1;r>r1;r--){
                    matrix[r][c1]=count++; //o(m)
                }
            } //o(n+m+n+m)
            r1++;
            c1++;
            r2--;
            c2--;
        }
        return matrix;
        

        
    }
};