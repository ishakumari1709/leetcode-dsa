class Solution { //dry run in copy
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int LSum=0;
        int RSum=0;
        int n=cardPoints.size();
        int maxSum=0;
         if (k == 0) return 0;
        // Edge case: if k == n, return the sum of all elements
        if (k == n) return accumulate(cardPoints.begin(), cardPoints.end(), 0);
        for(int i=0;i<k;i++){
            LSum+=cardPoints[i];
        }
        int RightIdx=n-1;
        maxSum=LSum;
        for(int i=k-1;i>=0;i--){
           LSum-=cardPoints[i];
           RSum+=cardPoints[RightIdx];
           RightIdx--;
           maxSum=max(maxSum,(LSum+RSum));
        }
        return maxSum;

        
    }
};