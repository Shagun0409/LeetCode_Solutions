class Solution {
public:



    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
       unordered_set<int> st;

        for(int val:arr1){
           

        
            while( val>0){
                st.insert(val);
              val=val/10; 
            }
        }
        int res=0;
        for(int num:arr2){
            while(!(st.count(num)) && num>0){
                num=num/10;
            }
            if(num>0){
                res = max(res, (int)to_string(num).size());
            }
        }
        return res;
    }
};