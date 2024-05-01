class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int pre=0;
        int cnt=0;
        mpp[0]=1;

        for(int i=0;i<nums.size();i++){
            pre=pre+nums[i];
            int remove=pre-k;
            cnt=cnt+mpp[remove];

            mpp[pre]+=1;

        }
        return cnt;
        
    }
};