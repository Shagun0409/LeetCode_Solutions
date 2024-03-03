class Solution {
public:


/*void helper(int i,vector<int>& subset, vector<int>& nums, vector<vector<int>>& result){
    if(i>=nums.size()){
            result.push_back(subset);
            return;
        }

    subset.push_back(nums[i]);
    helper(i+1,subset,nums,result);
    subset.pop_back();
    helper(i+1,subset,nums,result);
helper(i+1,subset,nums,result);

     subset.push_back(nums[i]);
     helper(i+1,subset,nums,result);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> result;
        helper(0,subset,nums,result);
        return result;
    }*/

void solve(vector<int>& nums, vector<int> temp , int i,vector<vector<int>> &ans) {
        
        // BC
        if(i >= nums.size()){
            ans.push_back(temp);
            return ;
        }

        

        // exclude
        solve(nums,temp,i+1, ans);

        // include
        int num = nums[i];
        temp.push_back(num);
        solve(nums,temp,i+1,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i = 0;
        solve(nums,temp,i,ans);
        return ans;
    }
};

