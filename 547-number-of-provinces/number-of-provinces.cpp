class Solution {

    private:
        void dfs(int node,vector<vector<int>> &adjlist,vector<int> &vis){
           vis[node]=1;
            for(auto it: adjlist[node]){
                if(!vis[it]){
                    dfs(it,adjlist,vis);
                }
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        //to change adjacency matrix to list
         int v = isConnected.size();
       vector<vector<int>> adjlist(v);
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++ ){
                if(isConnected[i][j]==1 && i!=j ){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);



                }
            }
        }
         vector<int> vis(v, 0); 
        int cnt=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i, adjlist, vis);

            }
        }
        return cnt;

        
    }
};