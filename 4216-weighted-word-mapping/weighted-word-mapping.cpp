class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result="";
    
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                int pos=words[i][j] - 'a' ;
                sum=sum+weights[pos];

            }
           
            int rem = sum % 26;
            result += ('z' - rem);

        }
        return result;
        
    }
};