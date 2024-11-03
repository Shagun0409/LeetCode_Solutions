class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.length();
        vector<string> ans(numRows);
        if(numRows==1){
            return s;
        }

        bool flag =false;

        int i=0;
        for(auto ch:s){
            ans[i]+=ch;
            if(i==0 || i==numRows-1){
                flag=!flag;
            }
            if(flag){
                i++;
            }
            else{
                i--;
            }
        }

        string zig="";
        for(auto str:ans){
            zig+=str;
        }
        return zig;

        
    }
};

