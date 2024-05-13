class Solution {
public:

int f(int i,int j,vector<vector<int>>& dp,vector<vector<int>>& obstacleGrid){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0 || obstacleGrid[i][j]==1) return 0;
  

    if(dp[i][j]!=-1) return dp[i][j];

    int up=f(i-1,j,dp,obstacleGrid);
    int left=f(i,j-1,dp,obstacleGrid);

    return dp[i][j]=up+left;}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[r-1][c-1]==1) return 0;
        vector<vector<int>> dp(r,vector<int>(c,-1));
        
        return f(r-1,c-1,dp,obstacleGrid);
    }
};