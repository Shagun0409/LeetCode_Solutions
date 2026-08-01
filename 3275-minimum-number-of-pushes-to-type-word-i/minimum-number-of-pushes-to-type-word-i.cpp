class Solution {
public:
    int minimumPushes(string word) {
        
int ans=0;
        int n=word.length();
        if(n>=8 && n<16){
            ans=((n-8)*2)+8;
        }else if(n>=16 && n<24){
            ans=((n-16)*3)+24;
        }else if(n>=24 && n<=26){
            ans=((n-24)*4)+48;
        }
        else{
            ans=n;
        }
        return ans;
    }
};