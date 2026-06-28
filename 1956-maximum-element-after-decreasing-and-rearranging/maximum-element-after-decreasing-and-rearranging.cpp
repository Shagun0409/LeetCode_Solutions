class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    int n=arr.size();
    if(arr[0]!=1){
              arr[0]=1;  
            }

        for(int i=1;i<n;i++){
            

            int curr1=arr[i-1]+1;
            int curr2=arr[i-1];

            if(arr[i]==curr1 || arr[i]==curr2){
                continue;
            }else{
                arr[i]=curr1;
            }
        }

        return *max_element(arr.begin(), arr.end());
    }
};