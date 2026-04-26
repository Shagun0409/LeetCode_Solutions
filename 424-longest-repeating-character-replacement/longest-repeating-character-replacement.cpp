class Solution {
public:
    int characterReplacement(string s, int k) {
unordered_map<char,int> mpp;
        int l=0;
        int r=0;
        int maxlen=0;
        int n=s.size();
int maxf=0;
        for(int r=0;r<n;r++){
            mpp[s[r]]++;

            maxf=max(maxf,mpp[s[r]]);
           while((r-l+1)-maxf>k){
                mpp[s[l]]--;
                l++;
            }
        maxlen=max(maxlen,r-l+1);
            
        }
       return maxlen ; 
        
    }
    

};