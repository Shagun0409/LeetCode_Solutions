class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
       string m="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(!st.empty()){
                    m+=s[i];
                }
                st.push(s[i]);
            }
            else if(s[i]==')'){
                st.pop();

                if(!st.empty()){
                    m+=s[i];
                   
                }
            }

        }
        return m;
        
    }
};