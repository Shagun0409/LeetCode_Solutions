class Solution {
public:
    int num(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int cnt=0;
        int ans = 0;
        int n = nums.size();
        while (r < n) {
            if (nums[r] % 2 == 1) {
                cnt++;
            }

            while (cnt > k) {
                if (nums[l] % 2 == 1) {
                    cnt--;
                }
                l++;
            }

            ans = ans + r - l + 1;
            r++;
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return num(nums, k) - num(nums, k - 1);
    }
};