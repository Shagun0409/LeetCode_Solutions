class Solution {
public:
    bool isPalindrome(const string& s, int low, int high){
        while(low <= high){
            if(s[low++] != s[high--]){
                return false;
            }
        }

        return true; 
    }


    void dfs(int idx,const string& s, vector<vector<string>>& ans,vector<string>& temp){
        if(idx >= s.size()){
           ans.push_back(temp);
           return; 
        }  


        for(int i = idx; i < s.size(); i++){
           if(isPalindrome(s,idx,i)){
              temp.push_back(s.substr(idx, i - idx+ 1));
              dfs(i+1,s,ans,temp);
              temp.pop_back();
           }
        }
    }


    vector<vector<string>> partition(string s) {
    
         vector<vector<string>> ans; 

         vector<string> temp;

          dfs(0,s,ans,temp);


          return ans;

        
    }
};