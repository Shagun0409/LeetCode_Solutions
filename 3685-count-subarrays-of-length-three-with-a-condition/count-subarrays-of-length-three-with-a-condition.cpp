// class Solution {
// public:
//     int countSubarrays(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
        
//         for (int i = 0; i <= n - 3; i++) {
//             if (2 * (nums[i] + nums[i+2]) == nums[i+1]) {
//                 count++;
//             }
//         }
        
//         return count;
//     }
// };


class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0;
        int j=2;
int n=nums.size();
int count=0;
        while(j<n){
            if(2*(nums[i]+nums[j])==nums[i+1]){
                count++;
            }
            i++;
            j++;
        }
         return count;
    }
};


