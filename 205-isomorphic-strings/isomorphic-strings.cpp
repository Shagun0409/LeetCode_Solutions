class Solution {
public:
    bool isIsomorphic(string s, string t) {
      /*  int arr1[256]={0};
       int arr2[256]={0};

       for(int i=0;i<s.length();i++) {
        if(arr1[s[i]]!=arr2[t[i]]) return false;
        arr1[s[i]]=i+1;
        arr2[t[i]]=i+1;
       }
       return true; */

       vector<int>ps(128,-1);
        vector<int>pt(128,-1);
        for(int i=0;i<s.size();i++)
        {
           if(ps[s[i]]!=pt[t[i]])
            return 0;
            ps[s[i]]=i;
            pt[t[i]]=i;
        }
        return 1;
    }
};