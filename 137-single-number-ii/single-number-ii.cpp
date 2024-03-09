class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int ans=0;

        for(auto i:m){
            if(i.second==1){
                ans=i.first;
            }
        }
        return ans;
        
    }
};