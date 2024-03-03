class Solution {
public:
    void find(int idx, int target, vector<int>& temp, vector < vector<int>> & res,vector<int>& candidates)
     {
        if (target == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = idx; i < candidates.size(); ++i) {
            if (candidates[i] > target)
                break;
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            find(i + 1, target - candidates[i], temp, res, candidates);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector < vector<int>> res;
        sort(candidates.begin(), candidates.end());
        find(0, target, temp, res, candidates);
        return res;
    }
};