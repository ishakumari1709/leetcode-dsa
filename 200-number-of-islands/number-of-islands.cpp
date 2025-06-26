
class Solution {
public:
      int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(); //row
        int n = grid[0].size(); //col
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int count = 0; //no of island

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    bfs(i, j, grid, visited, m, n);
                    count++;
                }
            }
        }
        return count;
    }

private:
    void bfs(int row, int col,
             vector<vector<char>>& grid,
             vector<vector<bool>>& visited,
             int rowL, int colL) {

        visited[row][col] = true;
        queue<pair<int, int>> q;
        q.push({row, col});

        int d_r[] = {1, 0, 0, -1}; // Down, Left, Right, Up
        int d_c[] = {0, -1, 1, 0};

        while (!q.empty()) {
            auto [r, c] = q.front(); q.pop();

            for (int k = 0; k < 4; k++) {
                int nRow = r + d_r[k];
                int nCol = c + d_c[k];

                if (nRow >= 0 && nRow < rowL && nCol >= 0 && nCol < colL &&
                    grid[nRow][nCol] == '1' && !visited[nRow][nCol]) {
                    
                    visited[nRow][nCol] = true;
                    q.push({nRow, nCol});
                }
            }
        }
    }
};