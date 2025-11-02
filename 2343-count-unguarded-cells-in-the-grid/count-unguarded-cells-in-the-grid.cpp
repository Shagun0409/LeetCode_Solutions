class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        

        vector<vector<int>> visi(m, vector<int>(n, 0));

        for (int i = 0; i < guards.size(); i++){
            visi[guards[i][0]][guards[i][1]]=2;    
       }

       for (int i = 0; i < walls.size(); i++){
            visi[walls[i][0]][walls[i][1]]=2;    
       }

       int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        for(int i=0;i<guards.size();i++){
            int r=guards[i][0];
            int c=guards[i][1];

            for(int d=0;d<4;d++){
                int nr=r+dr[d];
                int nc=c+dc[d];
                while (nr >= 0 && nr < m && nc >= 0 && nc < n && visi[nr][nc] < 2){
                    visi[nr][nc]=1;
                    nr=nr+dr[d];
                    nc=nc+dc[d];

                }
            }
        }

        int c=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visi[i][j]==0){
                    c++;
                }
            }
        }
        return c;
    }
};