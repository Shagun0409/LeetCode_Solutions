class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n>0){
        double temp=myPow(x,n/2);
        if(n%2==1) return x*temp*temp;
        return temp*temp;
        }
        else{
            return 1/(x*myPow(x,-(long long)n-1));
        }
    }
};