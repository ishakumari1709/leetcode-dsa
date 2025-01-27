class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int start=0;
        int end=tokens.size()-1;
        int score=0;
        int maxScore=0;
        sort(tokens.begin(),tokens.end());
        while(start<=end){
            if(tokens[start]<=power){
                
                power-=tokens[start];
                
                start++;
                score++;
            }else if(score>=1 ){
                power+=tokens[end];
                end--;
                score--;
                
            }else{
                return 0;
            }
            maxScore=max(score,maxScore);
            

        }
        return maxScore;
    }
};