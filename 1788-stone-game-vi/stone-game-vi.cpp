class Solution {
public:
    int stoneGameVI(vector<int>& a, vector<int>& b) {

        int n = a.size();

        vector < vector<int>> v(n);

        for (int i = 0; i < n; i++) {
            v[i] ={ a[i] + b[i], i};
        }
        sort(v.begin(), v.end(), greater<vector<int>>());
        int as = 0;
        int bs = 0;

       for (int i = 0; i < n; i += 2){
            as=as+a[v[i][1]];
        }
        for (int i = 1; i < n; i += 2) {
            bs=bs+b[v[i][1]];
        }
        if (as > bs)
            return 1;
        else if (as < bs)
            return -1;
        else
            return 0;
    }
};