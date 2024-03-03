class Solution {
public:



void helper(string curr,int n,int o,int c,vector<string>& result){
    if(c==n && o==n)
    {
        result.push_back(curr);
        return;
    }

    if(o<n)
        {
            helper(curr+'(',n,o+1,c,result);
        }

    if(o>c)
        {
            helper(curr+')',n,o,c+1,result);
        }
    
}
    vector<string> generateParenthesis(int n)
     {
        vector<string> result;

        
    
            helper("",n,0,0,result);
            return result;
    
        
    }
};