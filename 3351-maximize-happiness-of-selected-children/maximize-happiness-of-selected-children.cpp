#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(),greater<int>());
        int n = happiness.size();
        long long happy = 0;
        int u=0;
        for(int i=0;i<k;i++){
            happy=happy+max(happiness[i]-u,0);
            u++;
        }

        
         
        return happy;
    }
};
