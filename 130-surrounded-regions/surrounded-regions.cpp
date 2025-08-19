class Solution {
private:
void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& board){
    vis[row][col]=1;
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    int n=board.size();
    int m=board[0].size();
    for(int k=0;k<4;k++){
        int nrow=row+dr[k];
        int ncol=col+dc[k];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
            vis[nrow][ncol]=1;
            dfs(nrow,ncol,vis,board);
        }
    }
}
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        // my approach is if the boundary of the matrix is having 'O' then it cannot be converted into 'X'
        // traversing first and last row

        for(int j=0;j<m;j++){
            if(!vis[0][j] && board[0][j]=='O'){
                dfs(0,j,vis,board);
            }
            if(!vis[n-1][j] && board[n-1][j]=='O'){
                dfs(n-1,j,vis,board);
            }
        } 
        for(int i=0;i<n;i++){
            if(!vis[i][0] && board[i][0]=='O'){
                dfs(i,0,vis,board);
            }
            if(!vis[i][m-1] && board[i][m-1]=='O'){
                dfs(i,m-1,vis,board);
            }
        } 
        // now after checking the boundary of a given matrix and if it is safe then we traverse the entire matrix and check if the matrix is having 'O' then we convert it to 'X'
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    vis[i][j]=1;
                    board[i][j]='X';
                }
            }
        }
        
    }
};