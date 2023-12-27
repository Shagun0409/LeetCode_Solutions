class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res=0;
        int longtime=0;
        int n=colors.size();
        
        
        for(int i=0;i<n;++i){
            if(i>0 && colors[i] != colors[i-1]){
                longtime =0;
            }
                
            if(longtime>neededTime[i]){
                res+=neededTime[i];
            }
                else{
                    res+= longtime;
                    longtime=neededTime[i];
                }
            }
            return res;
        
        
    }
};