class Solution {
public:
    int f(int idx, int t, vector<int>& nums, vector<vector<int>>& dp) {
        if (idx == 0) {

            if (t == 0 && nums[idx] == 0)
                return 2;
            if (t == 0 || t == nums[idx])
                return 1;
            return 0;
        }
            if (dp[idx][t] != -1)
                return dp[idx][t];

            // Calculate the number of ways without taking the current element
            int notTaken = f(idx - 1, t, nums, dp);

            int taken = 0;
            if (nums[idx] <= t)
                taken = f(idx - 1, t - nums[idx], nums, dp);

            return dp[idx][t] = (notTaken + taken)%1000000007;
        }

        int findTargetSumWays(vector<int> & nums, int target) {
            int totalsum = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                totalsum += nums[i];
            }
            if ((totalsum - target) < 0)
                return 0;
            if ((totalsum - target) % 2 == 1)
                return 0;
            int t = (totalsum - target) / 2;
            vector<vector<int>> dp(n, vector<int>(t + 1, -1));
            return f(n - 1, t, nums, dp)%1000000007;
        }
    };