class Solution {
public:
    bool isGood(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
       int n=nums.size();
       
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=i+1) return false;
            
            
                
          }
        if (nums[n-1]!=n-1)
            return false;
        return true;
        
    }
};
    