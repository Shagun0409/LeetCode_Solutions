class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
      int r;
        int maxsum=0;
       int n=cardPoints.size();

        for(int i=0;i<k;i++){
lsum+=cardPoints[i];
        }

        maxsum=lsum;
        r=n-1;
        for(int j=k-1;j>=0;j--){
            lsum=lsum-cardPoints[j];
            rsum=rsum+cardPoints[r];
            r--;
            maxsum=max(maxsum,lsum+rsum);

        }
        return maxsum;
        
        
    }
};