class Solution {
public:
    string processStr(string s) {
        string result="";
        int n=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'  && s[i]<='z'){
                result=result+s[i];

            }
            else if(s[i]=='*'){
               
            if(!result.empty()){
                result.pop_back();
            }
            }
            else if(s[i]=='#'){
                result=result+result;
            }else{
                reverse(result.begin(),result.end());
            }

        }
        return result;
    }
};