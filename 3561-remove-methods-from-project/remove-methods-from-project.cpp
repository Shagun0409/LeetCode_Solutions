class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<int> d(n, 0);
        vector<bool> s(n, false);

        for(auto it:invocations){
            int u=it[0];
            int v=it[1];

            adj[u].push_back(v);
            d[v]++;

        }

        queue<int>q;
        q.push(k);
        s[k]=true;

        while(!q.empty()){
            int c=q.front();
            q.pop();

            for(auto it:adj[c]){
                d[it]--;

                if(!s[it]){
                    q.push(it);
                    s[it] = true;
                }

            }
        }

           bool canRemoveAll = true;
        vector<int> rem;

        for (int i = 0; i < n; i++) {
            if (s[i] && d[i] > 0) {
                canRemoveAll = false;
                break;
            } else if (!s[i]) {
                rem.push_back(i);
            }
        }

        if (!canRemoveAll) {
            vector<int> allNodes(n);
            iota(allNodes.begin(), allNodes.end(), 0);
            return allNodes;
        }

        return rem;
        
    }
};