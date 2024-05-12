class Solution {
public:
int h(vector<int> nums){
    int prev=nums[0];
    int prev2=0;

    for(int i=1;i<nums.size();i++){
        int take=nums[i];
        if(i>1){
            take+=prev2;
        }
        int nontake=0+prev;
        int curr=max(take,nontake);

        prev2=prev;
        prev=curr;
    }
    return prev;
}


    int rob(vector<int>& nums) {
        vector<int> temp;
        vector<int> temp1;
        if(nums.size()==1) return nums[0];

        for(int i=0;i<nums.size();i++){
           if(i!=0) temp.push_back(nums[i]);
            if(i!=nums.size()-1) temp1.push_back(nums[i]);
        }

        int ans1=h(temp);
        int ans2=h(temp1);
        return max(ans1,ans2);
        
    }
};