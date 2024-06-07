class Solution {
public:
    int myAtoi(string s) {
     
     int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ') i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+') i++;
          
        for(int j=i;j<s.length();j++){
          
            if(s[j]>='0' && s[j]<='9'){
                ans=ans*10+(s[j]-'0');
                if(ans>INT_MAX && sign==-1)
                    return INT_MIN;
                else if(ans>INT_MAX && sign==1)
                    return INT_MAX;
            }
            else break;
        }
    
          return (sign*ans);
    }
};