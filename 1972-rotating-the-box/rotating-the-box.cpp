class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {

        int r = boxGrid.size();
        int c = boxGrid[0].size();
        for (int i = 0; i < r ; i++) {
            int p = c - 1;
            for (int j = c - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '*') {
                    p = j - 1;

                } else if (boxGrid[i][j] == '#') {
                    swap(boxGrid[i][j], boxGrid[i][p]);
                    p--;
                }
            }
        }

        vector<vector<char>> res(c, vector<char>(r));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                res[j][r - 1 - i] = boxGrid[i][j];
            }
        }

        return res;
    }
};