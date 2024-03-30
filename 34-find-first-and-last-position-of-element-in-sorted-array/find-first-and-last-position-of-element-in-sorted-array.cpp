class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int low = 0;
        int n=nums.size();
        int high = n - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (target < nums[mid]) {
                high = mid - 1;

            } else {

                low = mid + 1;
            }
        }
        // return first;

        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;

            } else {

                low = mid + 1;
            }
        }
        // return second;

        return {first, last};
    }
};