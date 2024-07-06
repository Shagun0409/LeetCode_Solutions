class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            // if(maxi<nums[i]){
            //     maxi=nums[i];
            // }

        }
        int u=(n*(n+1))/2;
        return u-sum;
    }
};