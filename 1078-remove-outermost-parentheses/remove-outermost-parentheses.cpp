class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string m="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && c==0) c++;
            else if(s[i]=='(' && c>0){
                m+='(';
                c++;
            }
            else if(s[i]==')' && c>1) {
                m+=')';
                c--;
            }else{
                c--;
            }


        }
        return m;
    }
};