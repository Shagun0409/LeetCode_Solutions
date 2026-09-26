class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
    int o1;
    int o2;
int n=tokens.size();
    int res=0;
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
               st.push(stoi(tokens[i]));
            }else{
                o2=st.top();
                st.pop();
                o1=st.top();
                st.pop();
                if(tokens[i]=="+") st.push(o1+o2);
                else if(tokens[i]=="-") st.push(o1-o2);
                else if(tokens[i]=="*") st.push(o1*o2);
                else st.push(o1/o2);

            }

        }
        return st.top();

    }
};