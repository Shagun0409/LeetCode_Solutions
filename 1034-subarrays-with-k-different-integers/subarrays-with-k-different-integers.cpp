class Solution {
public:

int fun(vector<int>&nums,int k){
    unordered_map<int,int> mp;
        int l=0;
        int r=0;
        int n=nums.size();
        int ans=0;
        while(r<n){
            mp[nums[r]]++;
            

            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
                
            }
            ans+=r-l+1;
            r++;



        }
        return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {

return fun(nums,k)-fun(nums,k-1);
    }
};