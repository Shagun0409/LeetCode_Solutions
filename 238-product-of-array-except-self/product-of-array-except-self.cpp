class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(n);
vector<int> r(n);
vector<int>ans;
        l[0]=1;
        r[n-1]=1;
        for(int i=1;i<n;i++){
            l[i]=l[i-1]*nums[i-1];
            r[n-i-1]=r[n-i]*nums[n-i];
        }

        for(int i=0;i<n;i++){
            ans.push_back(l[i]*r[i]);
        }
        return ans;
    }
};

// 1  1  2  6
// 24 12 4 1