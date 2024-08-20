class Solution(object):
    def isValid(self, s) :
        st=[]
        for i in s:
            if i in"([{":
                st.append(i);
            elif st and ((st[-1]=='(' and i==')') or (st[-1]=='[' and i==']') or (st[-1]=='{' and i=='}')) :
                st.pop();
            else: 
                return False
        return not st
       
        