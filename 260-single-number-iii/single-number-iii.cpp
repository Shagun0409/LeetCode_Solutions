class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        for(auto i: m){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};