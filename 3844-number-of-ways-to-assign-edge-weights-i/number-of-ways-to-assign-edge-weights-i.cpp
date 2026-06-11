class Solution {
public:

    static constexpr int mod = 1000000007;

    long long pow(long long base, int exp) {
        long long res = 1;

        while (exp) {
            if (exp & 1)
                res = res * base % mod;

            base = base * base % mod;
            exp >>= 1;
        }

        return res;
    }
    int md(unordered_map<int,vector<int>>& adj,int root,int par){
        int maxdepth=0;
        for(auto it:adj[root]){

        
        if(it==par) continue;

         maxdepth=max(maxdepth,md(adj,it,root)+1);
        }
        
        return maxdepth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> adj;

        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int d=md(adj,1,-1);
         return pow(2,d-1);
        
    }
};