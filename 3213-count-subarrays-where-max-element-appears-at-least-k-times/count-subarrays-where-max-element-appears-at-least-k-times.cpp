class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
    long maxi = *max_element(nums.begin(), nums.end()), maxiOccurence = 0, res = 0;
int left=0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == maxi) {
                ++maxiOccurence;
            }
            while (maxiOccurence >= k) {
                if (nums[left] == maxi) {
                    --maxiOccurence;
                }
                left++;
            }
            res += left;
        }
        return res;
    }
};