class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> s;
        
        for(int num:nums){
            if(s[num]>=1)
                return true;
                s[num]++;
            }
             return false;
        }
        
    
};