class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res;
        string first=strs[0];
        string last=strs[strs.size()-1];

        int en=min(first.length(),last.length());
        for(int i=0;i<en;i++){
            if(first[i]!=last[i]) return res;
            else {
                res=res+first[i];
            }
        }
        return res;
    }
};