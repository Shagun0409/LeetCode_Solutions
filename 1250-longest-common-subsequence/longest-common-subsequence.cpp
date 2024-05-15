class Solution {
public:

int f(int idx1,int idx2,string& text1, string& text2, vector<vector<int>>& dp){

if(idx1<0 || idx2<0) return 0;

if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];


if(text1[idx1]==text2[idx2]){
    return dp[idx1][idx2]=1+f(idx1-1,idx2-1,text1,text2,dp);
}
else{
    return dp[idx1][idx2]=0+max(f(idx1-1,idx2,text1,text2,dp),f(idx1,idx2-1,text1,text2,dp));
}
    
}
    int longestCommonSubsequence(string text1, string text2) {


        int idx1=text1.length();
        int idx2=text2.length();
        vector<vector<int>> dp(idx1,vector<int>(idx2,-1));
        return f(idx1-1,idx2-1,text1,text2,dp);
        
    }
};