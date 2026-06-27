class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> mp(n+1,0);
        for(int i=0;i<n;i++){
            mp[i+1]=mp[i]+arr[i];
        }
        int ts=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j+=2){
                ts=ts+(mp[j+1]-mp[i]);
            }
        }
        return ts;
    }
};