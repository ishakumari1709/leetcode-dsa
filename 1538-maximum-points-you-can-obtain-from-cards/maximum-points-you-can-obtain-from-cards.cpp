class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxi=sum;
        for (int i = 0; i < k; i++) {
    sum += cardPoints[n - 1 - i] - cardPoints[k - 1 - i];
    maxi = max(maxi, sum);
}
        
        return maxi;
        
    }
};