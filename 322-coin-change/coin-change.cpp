class Solution {
public:

int f(int idx,int amount,vector<int>& coins,vector<vector<int>>& dp){

    if(idx==0 ) {
        if(amount%coins[0]==0){
            return amount/coins[0];
        }else return INT_MAX;
    }


if(dp[idx][amount]!=-1) return dp[idx][amount];

    int notake=f(idx-1,amount,coins,dp);
    int take=INT_MAX;
    if(coins[idx]<=amount){
        int res=f(idx,amount-coins[idx],coins,dp);
        if(res!=INT_MAX){
            take=1+res;
        }
    }
    return dp[idx][amount]=min(take,notake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= f(n-1,amount,coins,dp);
       if(ans != INT_MAX) return ans;
    return -1;
       
    }
};