class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        
        if(n<=1){
            return 0;
        }
       int minp=prices[0];
        for(int i=1;i<n;i++){
            profit=max(profit,prices[i]-minp);
                                          minp=min(prices[i],minp);
                                          
        }
        return profit;
    }
};