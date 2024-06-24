class Solution {
public:
    void sortColors(vector<int>& nums) {
       int l=0;
       int r=nums.size()-1;
       int m=0;
       while(m<=r){
        if(nums[m]==2){
            swap(nums[m],nums[r]);
            
            r--;

        }
        else if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else{
            m++;
        }
       } 
    }
};