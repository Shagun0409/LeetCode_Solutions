class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') c++;
            if(s[i]==')') c--;

            m=max(c,m);
        }
        return m;
    }
};