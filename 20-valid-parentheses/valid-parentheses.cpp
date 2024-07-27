class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(auto it:s){
            if(it=='('||it=='['||it=='{'){
                s1.push(it);
            }
            else{
                if(s1.empty()==true) return false;
                else if(it==')' && s1.top()!='(') return false;
                else if(it=='}' && s1.top()!='{') return false;
                else if(it==']' && s1.top()!='[') return false;
                else{s1.pop();}
            }
        }
        return s1.empty();
    }
};