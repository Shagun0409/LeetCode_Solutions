class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         
       intervals.push_back(newInterval);
       sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        
int n=intervals.size();

 ans.push_back({intervals[0][0],intervals[0][1]});
if(n <= 1)
        {
            return intervals;
        }

int pos=0;
        for(int i=1;i<n;i++){
            if(ans[pos][1]>=intervals[i][0]){
                ans[pos][1]=max(ans[pos][1],intervals[i][1]);
            }
            else{
                ans.push_back({intervals[i][0],intervals[i][1]});
                pos++;
            }
        }
        return ans;
    }
};