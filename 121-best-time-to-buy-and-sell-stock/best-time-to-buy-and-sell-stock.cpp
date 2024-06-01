class Solution {
public:
    int maxProfit(vector<int>& prices) {
int buy=INT_MAX;
int rem=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];

            }
            else{
                rem=max(prices[i]-buy,rem);
            }
        }
        return rem;
        
    }
};