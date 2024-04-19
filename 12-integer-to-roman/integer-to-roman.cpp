class Solution {
public:
    string intToRoman(int num) {
        string m[] = { "", "M", "MM", "MMM" };
    string c[] = { "",  "C",  "CC",  "CCC",  "CD",
                   "D", "DC", "DCC", "DCCC", "CM" };
    string x[] = { "",  "X",  "XX",  "XXX",  "XL",
                   "L", "LX", "LXX", "LXXX", "XC" };
    string i[] = { "",  "I",  "II",  "III",  "IV",
                   "V", "VI", "VII", "VIII", "IX" };


                   string t=m[num/1000];
                   string o=c[(num%1000)/100];
                   string te=x[(num%100)/10];
                   string ze=i[(num%10)];

                  string ans=t+o+te+ze;
                  return ans;
                   

    }
};