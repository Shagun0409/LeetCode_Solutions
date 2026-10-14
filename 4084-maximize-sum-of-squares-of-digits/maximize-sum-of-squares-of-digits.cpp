class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        // vector<int> ans;
        // int sumans = sum;
        // while (sumans != 0) {

        //     if (sumans > 9) {
        //         sumans = sumans - 9;
        //         ans.push_back(9);
        //     } else {
        //         ans.push_back(sumans);
        //           sumans = 0;
        //     }
        // }

        // while (ans.size() < num && sumans == 0) {
        //     ans.push_back(0);
        // }
        // if (ans.size() == num) {
        //     string result = "";
        //     for (int x : ans) {
        //         result += to_string(x);
        //     }
        //     return result;
        // } else {
        //     return "";
        // }



        if (sum > 9 * num) return "";

        string result = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);
            result += to_string(digit);
            sum -= digit;
        }

        if (sum != 0) return "";
        return result;

    }
};