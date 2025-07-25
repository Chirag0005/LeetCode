class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int i=0;;
        int j =n-1;
        int score =0;
        int maxscore =0;


        sort(tokens.begin(),tokens.end());

        while(i<=j){
            if(power >= tokens[i]){
                power -= tokens[i];
                i++;
                score++;
                maxscore = max(score,maxscore);
            }
            
            else if(score>0){
                power+=tokens[j];
                score--;
                j--;
            }
            else {
                break;
            }
        }
        return maxscore;
    }
};