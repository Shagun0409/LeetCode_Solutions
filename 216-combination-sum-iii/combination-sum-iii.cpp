class Solution {
public:
void find(int idx, vector<vector<int>>& ans, int k, int n, vector<int>& ds, vector<int>& arr) {
if (k == 0) {
        if (n == 0) ans.push_back(ds);
        return;
    }

   
    for (int i = idx; i < arr.size(); i++) {
       
        if (n - arr[i] < 0) break;

        
        ds.push_back(arr[i]);
        find(i + 1, ans, k - 1, n - arr[i], ds, arr); 
        ds.pop_back(); 
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ds;
    find(0, ans, k, n, ds, arr);
    return ans;
    }
};