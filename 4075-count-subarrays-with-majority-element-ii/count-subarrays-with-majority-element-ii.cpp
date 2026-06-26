class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int cumSum=0;

        unordered_map<int,int> mp;
        mp[0]=1;
        long long vp=0;
        long long res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                vp=vp+mp[cumSum];
                cumSum++;
            }else{
                cumSum--;
                vp=vp-mp[cumSum];

            }
            mp[cumSum]+=1;
            res=res+vp;

        }
        return res;
    }
};