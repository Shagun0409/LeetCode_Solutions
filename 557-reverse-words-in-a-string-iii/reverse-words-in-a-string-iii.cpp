class Solution {
public:
    string reverseWords(string s) {
        int l=0;
        int r=0;
        int n=s.length();

        while(r<n){
            if(s[r] != ' '){
                r++;
            }
            else {
                reverse(begin(s)+l,begin(s)+r);
                l=r+1;
                r++;
            }

        }
        reverse(s.begin() + l, s.begin() + r);
        return s;
        
    }
};