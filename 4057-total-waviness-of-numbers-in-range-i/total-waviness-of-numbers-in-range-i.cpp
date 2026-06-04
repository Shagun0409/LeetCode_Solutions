class Solution {
public:


int wave(string num){
    int n=num.length();
    int score=0;
    for(int i=1;i<=n-2;i++ ){
        if(num[i]>num[i-1] && num[i]>num[i+1]){
            score++;
        }

        if(num[i]<num[i-1] && num[i]<num[i+1]){
            score++;
        }
    }
    return score;
}
    int totalWaviness(int num1, int num2) {
         int score=0;
        for(int i=num1;i<=num2;i++){
           

            string num=to_string(i);
            score=score+wave(num);
        }
        return score;
    }
};