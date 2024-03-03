class Solution {
public:

void find(int idx,int target,vector<int>& arr,vector<int>& temp,vector<vector<int>>& res){
    if(target==0){
        res.push_back(temp);
        return;
    }
    if(target<0 || idx==arr.size()){
        return;
    }

    if(arr.size()>idx){
        temp.push_back(arr[idx]);
        find(idx,target-arr[idx],arr,temp,res);
        temp.pop_back();


    }
    find(idx+1,target,arr,temp,res);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        find(0,target,arr,temp,res);
        return res;
    }
};