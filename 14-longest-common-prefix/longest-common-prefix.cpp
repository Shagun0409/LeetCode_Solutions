class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

     
        string start=strs[0];
       
        string last=strs[strs.size()-1];

        int en=min(start.length(),last.length());
string st;

        for(int i=0;i<en;i++){
            if(start[i]!=last[i]){
               return st;
            }
            else{

            
            st+=start[i];}
            
        }
        return st;
    }
};