class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(5, 0);
        for(char c : text)
        {
            if(c == 'b')
            {
                count[0]++;
            }
            else if(c == 'a')
            {
                count[1]++;
            }
            else if(c == 'l')
            {
                count[2]++;
            }
            else if(c == 'o')
            {
                count[3]++;
            }
            else if(c == 'n')
            {
                count[4]++;
            }
        }
        return min({count[0], count[1], count[2] / 2, count[3] / 2, count[4]});
    }
};