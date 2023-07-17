class Solution {
public:
    bool check(vector<int>& nums) 
    {int count=0;
     int n=nums.size();
       for(int i=1;i<n;i++)
       {
          if   (nums[i-1]>nums[i]) 
          {  count++;
           //one pair exists which is greater then previous one
          }
           
       } 
     if (nums[n-1]>nums[0])//when there is rotation check first and last elemnt
     
         count++;
         
         return count<=1;
     }     
        
        
};