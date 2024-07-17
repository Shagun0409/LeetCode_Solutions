class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maxin=0;
       for(int i=0;i<nums.size();i++){
          if (i > maxin){
            return false;
        }
      int  sum=nums[i]+i;
       maxin= max(sum,maxin);
       }
       return true; 
    }
};