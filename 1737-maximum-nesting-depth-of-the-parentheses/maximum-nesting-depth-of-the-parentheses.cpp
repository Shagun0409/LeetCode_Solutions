class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int cnt=0;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                cnt++;
                
                m=max(cnt,m);
            }
            else if (s[i]==')'){
                st.pop();
                cnt--;
            }
        }
        return m;
        
    }
};