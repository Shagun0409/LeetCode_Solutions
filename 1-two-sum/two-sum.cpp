class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(temp.find(rem)!=temp.end()){
                return {temp[rem],i};
            }
            temp[nums[i]]=i;
        }
        return {-1,-1};

    }
};