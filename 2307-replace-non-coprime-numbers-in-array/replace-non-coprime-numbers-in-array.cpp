class Solution {
public:



 long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

     long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }


    vector<int> replaceNonCoprimes(vector<int>& nums) {
         stack<long long> st;

        for (int x : nums) {
            st.push(x);
            while (st.size() > 1) {
                long long a = st.top(); st.pop();
                long long b = st.top(); st.pop();

                long long g = gcd(a, b);
                if (g > 1) {
                    st.push(lcm(a, b)); 
                } else {
                    st.push(b);
                    st.push(a);
                    break; 
                }
            }
        }
        vector<int> ans(st.size());
        for (int i = (int)st.size()-1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
    
};