class Solution {
public:
    int getLucky(string s, int k) {
        string res= "";
        int n=s.length();
        
        for(int i=0;i<n;i++){
            // digit=digit+(s[i]-'a')*10*(n-i) 

            int num=s[i]-'a'+1;
            res+=to_string(num);
        }
int temp;
        while(k>0){
            temp=0;
            for(int i=0;i<res.length();i++){
                temp+=res[i]-'0';
            }
            res=to_string(temp);
           k--;

        }
        return temp;
    }

};