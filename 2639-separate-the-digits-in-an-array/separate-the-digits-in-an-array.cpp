class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v1;
        vector<int> ans;

int n=nums.size();
        for(int i=0;i<n;i++){

int digit=nums[i];
            while(digit>0){
                int rem=digit%10;
                v1.push_back(rem);
                 digit=digit/10;

            }
            reverse(v1.begin(),v1.end());
            copy(v1.begin(), v1.end(), back_inserter(ans));
            v1.clear();
        }
        return ans;
        
    }
};