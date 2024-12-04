class Solution {
private:
      int dfs(vector<vector<int>>& grid,int row,int col,int rows,int cols){
        if(row<0||col<0||row==rows||col==cols||grid[row][col]==0){
        return 0;
        }
        grid[row][col]=0;
        int area=1;
        area+=dfs(grid,row-1,col,rows,cols);
        area+=dfs(grid,row,col-1,rows,cols);
        area+=dfs(grid,row+1,col,rows,cols);
        area+=dfs(grid ,row,col+1,rows,cols);
        return area;

    }  

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        int rows=grid.size();
        int cols=rows==0?0:grid[0].size();
        for(int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if(grid[row][col]==1){
                  

                  maxarea=max(maxarea,dfs(grid,row,col,rows,cols));
                }

            }
        }
      return maxarea; 
    }
};