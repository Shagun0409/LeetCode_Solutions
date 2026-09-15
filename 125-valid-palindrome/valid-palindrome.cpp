class Solution {
public:
    bool isPalindrome(string s) {
        string s1=s;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
int i=0;
int j=s1.length()-1;
       while(i<=j) {
        if (!isalnum(s1[i])) {
           i++;
        }else if(!isalnum(s1[j]))
        {
            j--;
        }else{
            if(s1[i]==s1[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        
    }
    return true;
    }
};