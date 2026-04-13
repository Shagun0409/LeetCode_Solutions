class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mindis=INT_MAX;
        int currdis=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                currdis=abs(i-start);
                mindis=min(currdis,mindis);
            }
            
        }

        return mindis;
    }
};