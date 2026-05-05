class Solution {
public:
    string reverseByType(string s) {
        int l = 0;
        int n = s.length();
        int r = n - 1;
        while (l < r) {
            if ((s[l] >= 'a' && s[l] <= 'z') && (s[r] >= 'a' && s[r] <= 'z')) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if ((s[l] >= 'a' && s[l] <= 'z')) { r--; }
            else {
                l++;
            }
        }
 l=0;
r=n-1;
        while (l < r) {
            if(((s[l]-'a'>= 26 || s[l]-'a'< 0) && (s[r]-'a'<0 || s[r]-'a'>=26)))
            {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(s[l]-'a'>= 26 || s[l]-'a'< 0 )
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return s;
    }
};