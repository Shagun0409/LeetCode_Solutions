class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int j = 0;

        for (int x = nums.front(); x <= nums.back(); x++) {
            if (j < nums.size() && nums[j] == x) {
                j++;
            } else {
                ans.push_back(x);
            }
        }

        return ans;
    }
};