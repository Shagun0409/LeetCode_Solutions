class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum=0;
        vector<int> rem1;
        vector<int> rem2;
        for(auto num:nums){
            sum=sum+num;
            if(num%3==1){
                rem1.push_back(num);
            }else if(num%3==2){
                rem2.push_back(num);
            }

        }
        sort(rem1.begin(),rem1.end());
        sort(rem2.begin(),rem2.end());
        if(sum%3==0){
            return sum;
        }
        int m=sum%3;
        int res=0;
        if(m==1){
        int r1= rem1.size()>=1 ? rem1[0] : INT_MAX;
        int r2=rem2.size()>=2 ? rem2[0]+rem2[1] :INT_MAX;

        res=max(res,sum-min(r1,r2));


        }else{
          


            int r2= rem2.size()>=1 ? rem2[0] : INT_MAX;
        int r1=rem1.size()>=2 ? rem1[0]+rem1[1] :INT_MAX;
        res=max(res,sum-min(r1,r2));

        }

        return res;
    }
};