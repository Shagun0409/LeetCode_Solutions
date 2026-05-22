class Solution {
public:
    static bool cmp(vector<int>v1,vector<int>v2){
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int tw=0;
        int i=0;

        while(truckSize>0 && i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){

            tw=(boxTypes[i][0]*boxTypes[i][1])+tw;
            truckSize=truckSize-boxTypes[i][0];
            }else{
                int c=truckSize;
                truckSize-=c;
                tw=tw+c*boxTypes[i][1];
            }
            i++;
        }
        return tw;
    }
};