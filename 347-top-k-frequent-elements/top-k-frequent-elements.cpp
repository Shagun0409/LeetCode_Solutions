class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;   // higher frequency first
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
      
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto it:nums){
            mp[it]++;
        }

         vector<pair<int, int>> v;

        for(auto it : mp) {
            v.push_back({it.first, it.second});
        }
      sort(v.begin(), v.end(), cmp);

        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};