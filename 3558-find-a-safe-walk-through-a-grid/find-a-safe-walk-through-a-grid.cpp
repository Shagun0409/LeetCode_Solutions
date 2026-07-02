class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<vector<int>> dir={{0,1},{0,-1},{-1,0},{1,0}};
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> result(m,vector<int>(n,INT_MAX));

        deque<pair<int,int>>deque;

        result[0][0]=grid[0][0];
        deque.push_front({0,0});

       while(!deque.empty()){
        auto[r,c]=deque.front();

        deque.pop_front();

        for(auto &it:dir){
            int nr=r+it[0];
            int nc=c+it[1];


            if(nr<0 || nc<0 || nr>=m || nc>=n) continue;



            if(result[r][c]+grid[nr][nc]<result[nr][nc]){
                result[nr][nc]=result[r][c]+grid[nr][nc];
                if(grid[nr][nc]==0){
                    deque.push_front({nr,nc});
                }else{
                    deque.push_back({nr,nc});
                }
            }
        }
       }
        int x=result[m-1][n-1];

        if((health-x)>=1){
            return true;
        }else{
            return false;
        }
       


        
    }
};