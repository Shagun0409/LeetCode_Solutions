class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> s(n);
        vector<int> l(n);

        s[n - 1] = nums[n - 1];
        l[0] = nums[0];

        int maxi = nums[0];
        int mini = nums[n - 1];

        for (int i = 1; i < n; i++) {
            maxi = max(nums[i], maxi);
            l[i] = maxi;
        }

        for (int i = n - 2; i >= 0; i--) {
            mini = min(nums[i], mini);
            s[i] = mini;
        }

int ss=0;
int minss=INT_MAX;
        for(int i=0;i<n;i++){
            ss=l[i]-s[i];
            minss=min(minss,ss);
            if(minss<=k){
                return i;
            }

        }
        return -1;
    }
};