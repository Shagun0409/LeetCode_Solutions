class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0)
            return 0;
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));

        for (int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a = matrix[i][j] + dp[i - 1][j];

                int b = matrix[i][j];
                if (j - 1 >= 0) {
                    b = b + dp[i - 1][j - 1];
                } else {
                    b += 1e9;
                }

                int c = matrix[i][j];
                if (j + 1 < m) {
                    c = c + dp[i - 1][j + 1];
                } else {
                    c += 1e9;
                }

                dp[i][j] = min(a, (min(b, c)));
            }
        }
                int mini = INT_MAX;
                for (int j = 0; j < m; j++) {
                    mini = min(mini, dp[n - 1][j]);
                }
                return mini;
            
        
    }
};