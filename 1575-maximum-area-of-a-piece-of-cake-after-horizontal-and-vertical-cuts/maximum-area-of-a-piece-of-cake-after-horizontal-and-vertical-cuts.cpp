class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        int n=horizontalCuts.size();
        int maxH=max(horizontalCuts[0],h-horizontalCuts[n-1]);
        sort(verticalCuts.begin(),verticalCuts.end());
        int m=verticalCuts.size();
        int maxV=max(verticalCuts[0],w-verticalCuts[m-1]);
        for(int i=1;i<n;i++){
            maxH=max(maxH,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<m;i++){
            maxV=max(maxV,verticalCuts[i]-verticalCuts[i-1]);
        }
        
         return (1LL * maxH * maxV) % 1000000007;
        
    }
};