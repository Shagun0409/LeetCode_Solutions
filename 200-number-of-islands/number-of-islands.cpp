class Solution {

private:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int r,
             int c) {
        vis[r][c] = 1;
        queue<pair<int,int>> q;
        q.push({r,c});
         int m = grid.size();
        int n = grid[0].size();
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int delrow= -1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    if(abs(delrow) + abs(delcol) != 1)
                        continue;
                    int newrow=row+delrow;
                    int newcol=col+delcol;
                    if(newrow>=0 && newrow<m && newcol>=0 && newcol<n && grid[newrow][newcol]=='1' && !vis[newrow][newcol]){
                     vis[newrow][newcol] = 1;
                        q.push({newrow, newcol});
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int c = 0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
    
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {


                
                if (grid[i][j] == '1' && vis[i][j] != 1) {
   
                     bfs(grid, vis, i, j);
                    c++;
                }
            }
        }
        return c;
    }
};