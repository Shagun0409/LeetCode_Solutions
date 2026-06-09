class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        long long diff=nums[nums.size()-1]-nums[0];
        return diff*k;
    }
};