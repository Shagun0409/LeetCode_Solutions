class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
 int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=-1*nums[i];
            }
        }
        sort(nums.begin(),nums.end());
       
        long long ans=0;
    long long ans1=0;
        for(int i=(n/2);i<n;i++){
            ans=ans+(nums[i]*nums[i]);
        }
        for(int i=0;i<n/2;i++){
            ans1=ans1+(nums[i]*nums[i]);
        }
        return ans-ans1;
    }
};