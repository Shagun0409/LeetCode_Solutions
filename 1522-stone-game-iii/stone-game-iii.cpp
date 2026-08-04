class Solution {
public:
vector<int>t;
    int solve(vector<int>& stone, int i, int n) {
        int result = INT_MIN;
        if (i >= n)
            return 0;
        if(t[i]!=-1){
            return t[i];
        }
        result = stone[i] - solve(stone, i + 1, n);
        if (i + 1 < n)
            result =
                max(result, stone[i] + stone[i + 1] - solve(stone, i + 2, n));
        if (i + 2 < n)
            result = max(result, stone[i] + stone[i + 1] +stone[i + 2] -
                                     solve(stone, i + 3, n));
        t[i]=result;
        return result;
    }

    string stoneGameIII(vector<int>& stone) {

        int n = stone.size();
        t.resize(n+1,-1);

        int diff = solve(stone, 0, n);
        if (diff > 0) {
            return "Alice";
        } else if (diff < 0) {
            return "Bob";
        } else {
           return "Tie";
        }
    }
};