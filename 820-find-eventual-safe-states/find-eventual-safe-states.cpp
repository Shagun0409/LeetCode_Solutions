class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
       vector<int> indeg(v, 0);

        vector<vector<int>> revadj(v);
        for(int i=0;i<v;i++){
            for(auto it:graph[i]){
                revadj[it].push_back(i);
                 indeg[i]++;
            }
           
        }
        queue<int> q;
        vector<int> safe;
        for(int i=0;i<v;i++){
            if(indeg[i]==0){
                q.push(i);
               

            }
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe.push_back(node);
            for(auto it: revadj[node]){
                indeg[it]--;
                if(indeg[it]==0){
                    q.push(it);
                }
            }
        }
        sort(safe.begin(),safe.end());
        return safe;
    }
};