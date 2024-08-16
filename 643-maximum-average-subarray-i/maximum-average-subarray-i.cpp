class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
    double ans=0;
        for(int i=0;i<k;i++){
            ans=ans+nums[i];
        }
        double avg=ans/k;

        for(int i=1;i<=nums.size()-k;i++){
            ans=ans-nums[i-1]+nums[i+k-1];
            avg=max(avg,ans/k);
        }
        return avg;
    }
};