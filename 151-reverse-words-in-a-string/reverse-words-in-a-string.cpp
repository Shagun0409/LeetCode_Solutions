class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] != ' '){
                res+=s[i];
            }
            else if(s[i]==' ' && res !=""){
                st.push(res);
                res="";
            }
        }
        if(res != "") st.push(res);
        
        string ans="";
        while(!st.empty()){
            string res=st.top();
            st.pop();
            if(!st.empty()) ans+=res+" ";
            else ans+=res;
        }
        return ans;
        
    }
};