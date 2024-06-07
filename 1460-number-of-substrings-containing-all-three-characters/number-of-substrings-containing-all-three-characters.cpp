class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int l=0;
        int r=0;
        int cnt=0;
        int ans=0;
        int n=s.size();
        while(r<n){
            mp[s[r]]++;
            while(mp['a'] && mp['b'] && mp['c']){

            
                cnt=cnt+(n-r);
                mp[s[l]]--;
l++;
            }
            r++;
        }
        return cnt;
    }
};