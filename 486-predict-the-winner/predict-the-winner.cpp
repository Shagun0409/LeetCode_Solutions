class Solution {

public:
vector<vector<int>> dp;
    int solve(int i, int j, vector<int>& nums) {
        
         if (i > j) {
            return 0;
        }

        if (i == j) {
            return nums[i];
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        int ti = nums[i] + min(solve(i + 2, j,nums), solve(i + 1, j - 1,nums));

        int tj = nums[j] + min(solve(i, j - 2,nums), solve(i + 1, j - 1,nums));
        return dp[i][j] = max(ti, tj);
    }
    bool predictTheWinner(vector<int>& nums) {
  
        
        int n = nums.size();
         dp = vector<vector<int>>(n, vector<int>(n, -1));
        int t = 0;
        for (int i = 0; i < n; i++) {
    t += nums[i];
}
       

            int p1=solve(0,n-1,nums);
            

            int p2 = t - p1;

            if (p1 >= p2) {
                return true;
            } else {
                return false;
            }
        
    }
};