class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        long rev=0;
        int digit;
        int temp=x;
        while(x!=0){
      
            
       digit =x%10;
        
        rev=digit+rev*10;
       x=x/10;
        }
        
        if(rev==temp){
            return true;
        }
        else{
            return false;
        }
        
    }
};