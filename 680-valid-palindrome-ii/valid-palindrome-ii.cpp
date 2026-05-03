class Solution {
public:

    bool val(string s,int l , int r){
        while(l<r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l=0;
        int n=s.length();
        int r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                return val(s,l+1,r) || val(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};