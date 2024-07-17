class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
int cnt=0;
  int n = intervals.size();
if(n<2) return 0;


 int start = intervals[0][0];
        int end = intervals[0][1]; 


        for(int i=0;i<intervals.size();i++){
if(intervals[i][0]<end) {
    end=min(end,intervals[i][1]);
}
else{
    cnt++;
    start=intervals[i][0];
    end=intervals[i][1];
}
        }
        cnt++;
        return n-cnt;
        
    }
};