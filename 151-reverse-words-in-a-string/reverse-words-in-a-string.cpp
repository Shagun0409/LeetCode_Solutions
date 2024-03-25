class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        for(int i=0;i<s.length();i++){
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word+=s[i];
                i++;
            }
            if(word!=" "&& !word.empty()) st.push(word);
        }

        string str="";
        while(!st.empty()){
            str=str+st.top();
            st.pop();
            if(!st.empty())  str+=" ";
        }
        return str;
    }
};