class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;

        if ((s+s).find(goal) !=-1) return true;
        else return false; 

    }
};