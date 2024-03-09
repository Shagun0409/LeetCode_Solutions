class Solution {
public:
    bool checkZeroOnes(string s) {
        int count=0;
        int maxo=0;
        int countz=0;
        int maxz=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;

            }
            else{
                count=0;
            }
            maxo=max(count,maxo);
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                countz++;

            }
            else{
                countz=0;
            }
            maxz=max(countz,maxz);
        }

        /* if(maxo<maxz){
            return false;
        } 
        else if(maxo==maxz)return false; 
        else return true; */
        return maxo > maxz;
    }
};