class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n);
        for (auto &it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<pair<long long, int>,
                       vector<pair<long long, int>>, 
                       greater<pair<long long, int>>> pq;

        vector<long long> dist(n, LLONG_MAX);
        vector<int> ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});

        int mod = 1e9 + 7;

        while (!pq.empty()) {
            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto &it : adj[node]) {
                int adjnode = it.first;
                long long adjdist = it.second;

                if (dist[adjnode] > dis + adjdist) {
                    dist[adjnode] = dis + adjdist;
                    pq.push({dist[adjnode], adjnode});
                    ways[adjnode] = ways[node];
                } 
                else if (dist[adjnode] == dis + adjdist) {
                    ways[adjnode] = (ways[adjnode] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1];
    }
};
