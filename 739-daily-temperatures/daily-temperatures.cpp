class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n = temp.size();
        vector<int> res(n,0);
        

        for (int i = n - 1; i >= 0; i--) {
            while ((!st.empty() && temp[st.top()] <= temp[i]) ) {
                st.pop();
            }
            if ( !st.empty()) {

                res[i]=st.top() - i;
            } else{
                res[i]=0;
            }
             st.push( i);
        }
        return res;
    }
};