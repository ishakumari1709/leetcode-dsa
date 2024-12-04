class Solution {    
public:
    int countVowelStrings(int n) {
        int sum=0;
        vector<int> dp(5, 1);
        if(n<=0){
            return 0;
        }
        for(int i=1;i<n;i++){
            for (int i = 3; i >= 0; i--) {
                dp[i] += dp[i+1];
            }
        }
        
        for(int i=0;i<5;i++){
            sum+=dp[i];
        }

    return sum;
        
    }
};