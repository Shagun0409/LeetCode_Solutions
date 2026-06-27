class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        map<long long,int> mp;
    int one=0;
        for(auto it:nums){
            if(it==1){
                one++;
            }else{
                mp[it]++;
            }
            
        }

        if((one%2)==0 && (one !=0)){
            one--;
        }
        int ans=one;

        for(auto it:mp){

            long long val=it.first;
            long long base=sqrt(val);
            if((base*base)==val && mp.count(base) && mp[base]>1){
                continue;
            }
            int count=0;

            while(mp.count(val) &&  mp[val]>1){
                count=count+2;
                val=(val*1LL*val);
            }
            if(mp[val]==1){
                count++;
            }else{
                count--;
            }
            ans=max(ans,count);





        }
        return ans;
        
    }
};