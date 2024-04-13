class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0,len=0;
vector<int> mapp(256,-1);
        while(r<n){
            if(mapp[s[r]]!=-1)
                l=max(mapp[s[r]]+1,l);
            mapp[s[r]]=r;

            len=max(len,r-l+1);
            r++;

            
        }
        return len;
    }

};