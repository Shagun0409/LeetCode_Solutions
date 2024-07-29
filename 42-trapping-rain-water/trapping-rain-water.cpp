class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int prefix[n],sufix[n];
        prefix[0]=height[0];
        sufix[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            sufix[i]=max(sufix[i+1],height[i]);
        }
        int total=0;
        for(int i=0;i<n;i++){
            total+=min(sufix[i],prefix[i])-height[i];
        }
        return total;
    }
};