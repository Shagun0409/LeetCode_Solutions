class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         unordered_map<int, int> rank;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int n=arr.size();
        int r=1;
        for (int num : temp) {
            if (!rank.count(num)) {
                rank[num] = r++;
            }
        }

        for (int &num : arr) {
            num = rank[num];
        }
        return arr;
    }
};