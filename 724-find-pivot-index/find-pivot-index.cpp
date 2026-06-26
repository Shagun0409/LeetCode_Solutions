class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        
        vector<int> left_sum(n, 0);
        vector<int> right_sum(n, 0);
        
        for (int i = 1; i < n; i++) {
            left_sum[i] = left_sum[i - 1] + nums[i - 1];
        }
        
        for (int i = n - 2; i >= 0; i--) {
            right_sum[i] = right_sum[i + 1] + nums[i + 1];
        }
        
        for (int i = 0; i < n; i++) {
            if (left_sum[i] == right_sum[i]) {
                return i;
            }
        }
        
        return -1;
    }
};