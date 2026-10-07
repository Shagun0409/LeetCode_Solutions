class Solution {
public:
    int trap(vector<int>& height) {



        int n=height.size();
        int leftmax[n],rightmax[n];
        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];
        
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);

        }

        for(int i=n-2;i>=0;i--){
           rightmax[i]=max(rightmax[i+1],height[i]);

        }
int t=0;
        for(int i=0;i<n;i++){
            if(height[i]<leftmax[i] && height[i]<rightmax[i]){
                t=t+(min(leftmax[i],rightmax[i])-height[i]);
            }
        }
        return t;



    }
};