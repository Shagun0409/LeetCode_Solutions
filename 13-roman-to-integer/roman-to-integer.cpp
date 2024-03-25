class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> digits;

        digits['M'] = 1000;

        digits['D'] = 500;

        digits['C'] = 100;

        digits['L'] = 50;

        digits['X'] = 10;

        digits['V'] = 5;

        digits['I'] = 1;
        int res=0;
        for (int i = 0; i < s.length(); i++) {
            if (digits[s[i]] < digits[s[i + 1]]) {
                res -= digits[s[i]];
            } else {
                res += digits[s[i]];
            }
        }
        return res;
    }
};