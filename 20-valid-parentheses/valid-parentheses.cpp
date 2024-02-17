class Solution {
public:
    bool isValid(string s) {
        


        stack<char> st;
        for(char x:s){
            if(x=='('|| x=='{'|| x=='['){
                st.push(x);
            }
            else{
                if(st.empty()==true){
                    return false;
                }
                else if(x==')' && st.top()!='(') { return  false;}
                else if(x==']' && st.top()!='[')  {return  false;}
                else if(x=='}' && st.top()!='{') {return  false;}
                else{ st.pop();}
            }
        }
        return st.empty();
        
    }
};
    