class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;

        for(auto &row:grid){
            for(int val : row){
                arr.push_back(val);
            }

        }
        sort(arr.begin(),arr.end());
        int target=arr[arr.size()/2];

        int ops=0;

        for(int nums:arr){
            if(target%x !=nums%x){
                return -1;
            }

            ops+=abs(nums-target)/x;
        }
        return ops;



    }
};