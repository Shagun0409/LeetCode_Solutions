class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        int n=hand.size();
        if((n%groupSize)!=0){
            return false;
        }
        unordered_map<int,int>c;
        for(int i=0;i<n;i++){
            c[hand[i]]++;

        }
         sort(hand.begin(), hand.end());

        for(auto num:hand){
            if(c[num]>0){
            for(int i=num;i<(num+groupSize);i++){
                if(c[i]==0) return false;

                
                c[i]--;
            }
            }
            
        }
        return true;
        
    }
};