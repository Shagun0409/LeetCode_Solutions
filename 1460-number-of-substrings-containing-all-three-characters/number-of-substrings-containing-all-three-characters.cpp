class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        int r=0;
        int c=0;
        unordered_map<char,int> mp;
int n=s.size();
        while(r<n){
            mp[s[r]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                c=c+(n-r);
                mp[s[l]]--;
                l++;
            }
            r++;

        }
        return c;
    }
};