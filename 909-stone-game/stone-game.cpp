class Solution {
public:

vector<vector<int>>dp;
int solve(int i,int j,vector<int>& piles){
    if(i>j){
        return 0;
    }
if (dp[i][j] != -1)
            return dp[i][j];
    int ti = piles[i] + min(solve(i + 2, j,piles), solve(i + 1, j - 1,piles));

        int tj = piles[j] + min(solve(i, j - 2,piles), solve(i + 1, j - 1,piles));
        return dp[i][j] = max(ti, tj);
}
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
       dp = vector<vector<int>>(n, vector<int>(n, -1));
        
        
        int t=0;
        for(int i=0;i<n;i++){
            t=t+piles[i];
        }

         int p1=solve(0,n-1,piles);
            

            int p2 = t - p1;

            if (p1 > p2) {
                return true;
            } else {
                return false;
            }
    }
};