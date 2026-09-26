class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        priority_queue<pair<int,int>> pq;

        int n=nums.size();
        int i=0;
        int j=0;
        int c=0;
        while(j<n){

           pq.push({nums[j], j});
            c++;
            if(c==k){
                ans.push_back(pq.top().first);
                while(!pq.empty() && pq.top().second <= i){
    pq.pop();
}
                i++;
                c--;

            }
            j++;

        }
        return ans;
        
    }
};