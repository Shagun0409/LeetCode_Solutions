class Solution {
public:
    bool isAnagram(string s, string t) {

        /*  map<char,int> m1;
         map<char,int>m2;

         if(s.length() != t.length()) return false;
         for(int i=0;i<s.length();i++){
             m1[s[i]]++;
         }

         for(int i=0;i<t.length();i++){
             m2[t[i]]++;
         }

         if(m1==m2) return true;
         else return false;
          */

        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            if (mp.find(t[i]) != mp.end()) {
                mp[t[i]] -= 1;
            } else
                return false;
        }

        for (auto items : mp) {
            if (items.second != 0) {
                return false;
            } 
   
        }
        return true;
    }
};