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

            if( abs(arr[i]-arr[i-1])<=1){
                continue;
            }else{
                arr[i]=min(arr[i],arr[i-1]+1);
            }
        }

        return *max_element(arr.begin(), arr.end());
    }
};