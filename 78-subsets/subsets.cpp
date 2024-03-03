class Solution {
public:


void helper(int i,vector<int>& subset, vector<int>& nums, vector<vector<int>>& result){
    if(i==nums.size()){
            result.push_back(subset);
            return;
        }

    subset.push_back(nums[i]);
    helper(i+1,subset,nums,result);
    subset.pop_back();
    helper(i+1,subset,nums,result);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> result;
        helper(0,subset,nums,result);
        return result;
    }
};