class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int h=n-1;
        int m=0;
        int l=0;
        while(m<=h){
            if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--;
            }
            else if(nums[m]==0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
            else{
                m++;
            }
        }
    }
};