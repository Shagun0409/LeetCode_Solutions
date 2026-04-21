class Solution {
public:
    int lengthOfLongestSubstring(string s) {
int n=s.size();
        int arrlen=256;

        int arr[arrlen];

        for(int i=0;i<arrlen;i++){
            arr[i]=-1;
        }


        int l=0,r=0,maxlen=0;

        while(r<n){

            if(arr[s[r]]!=-1){
                l=max(arr[s[r]]+1,l);
            }

            int len=r-l+1;

            maxlen = max(len, maxlen);

            arr[s[r]]=r;
            r++;


        }
        return maxlen;
        
    }
};