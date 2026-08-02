class Solution {

public:
    int solve(int i, int j, vector<int>& nums) {
         if (i > j) {
            return 0;
        }

        if (i == j) {
            return nums[i];
        }
        int ti = nums[i] + min(solve(i + 2, j,nums), solve(i + 1, j - 1,nums));

        int tj = nums[j] + min(solve(i, j - 2,nums), solve(i + 1, j - 1,nums));
        return max(ti,tj);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
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