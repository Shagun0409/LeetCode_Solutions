class Solution {
public:
vector<vector<int>> direction{{1,0},{-1,0},{0,1},{0,-1}};
typedef pair<int,pair<int,int>>P;
    int minTimeToReach(vector<vector<int>>& moveTime) {

        int m=moveTime.size();
        int n=moveTime[0].size();

        vector<vector<int>> result(m,vector<int>(n,INT_MAX));
        priority_queue<P,vector<P>,greater<P>> pq;
        //initialization
        result[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int currTime=pq.top().first;
            auto cell=pq.top().second;

            int i=cell.first;
            int j=cell.second;

            pq.pop();

            if(i==m-1 && j==n-1){
                return currTime;
            }

            for(auto &dirn: direction){
                int iN=i+dirn[0];
                int jN=j+dirn[1];

if(iN>=0 &&  iN<m && jN>=0 && jN<n){
    int wait=max(moveTime[iN][jN] -currTime,0);
    int deptTime=currTime+wait+1;

    if(result[iN][jN]>deptTime){
        result[iN][jN]=deptTime;
        pq.push({deptTime,{iN,jN}});
    }
}
            }

        }
return -1;
        
    }
};