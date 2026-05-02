class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        int n = s.length();
        int m = t.length();
        int c = 0;
        int startindex=0;
        int minlen = INT_MAX;
        unordered_map<char, int> mp;

        for (int i = 0; i < m; i++) {
            mp[t[i]]++;
        }

        while (r < n) {
            if (mp[s[r]] > 0) {
                c++;
            }
            mp[s[r]]--;
            while (c == m) {
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    startindex=l;
                }
                mp[s[l]]++;
                
                if(mp[s[l]]>0){
                    c--;
                }
                l++;
            }
            r++;

        }
        if(minlen == INT_MAX) return "";
return s.substr(startindex, minlen);
    }
};