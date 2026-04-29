class Solution {



    public:

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Return difference between subarrays with sum at most goal and at most (goal - 1)
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
private:

int atMost(vector<int>& nums, int goal){
    if (goal < 0) return 0;
    int l=0;
    int r=0;
    int sum=0;
    int count=0;
    while(r<nums.size()){
        sum=sum+nums[r];
        while(sum>goal){
            sum=sum-nums[l];
            l++;
        }
    
        count=count+(r-l+1);
     r++;

    }
    return count;
}


};