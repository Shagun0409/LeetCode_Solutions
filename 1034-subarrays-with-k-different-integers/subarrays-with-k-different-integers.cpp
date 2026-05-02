class Solution {
public:
    int func(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
int n=nums.size();
        int l = 0;
        int r = 0;
        int c = 0;
        while (r < n) {
            mp[nums[r]]++;

            while (mp.size() > k) {
               

                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
             c = c + (r - l + 1);
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k) -func(nums,k-1);
    }
};