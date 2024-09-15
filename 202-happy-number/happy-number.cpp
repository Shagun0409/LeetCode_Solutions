class Solution {
public:

int func(int n){
    int sum=0;
    while(n>0){    
int digit=n%10;
int sq=digit*digit;
sum=sum+sq;

 n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
unordered_set<int> set;
if(n==1) return true;

       while(n!=1 && set.find(n)==set.end()){
        set.insert(n); 
      n= func(n);
      if (n == 1) {
                return true;
            }
       }
       return false;
    }
};