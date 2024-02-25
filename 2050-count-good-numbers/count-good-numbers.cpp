#define Mod 1000000007
class Solution {
   
public:

    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;
        long first=pow(5,even)%Mod;
        long second=pow(4,odd)%Mod;
        return (first*second)%Mod;}

    
     long long  pow(long long x,long long n){
        if(n==0) return 1;
        if(n==1) return x;
        long long temp=pow(x,n/2);
        if(n%2==0) return temp*temp%Mod; 
        return x*temp*temp%Mod;
    }
};