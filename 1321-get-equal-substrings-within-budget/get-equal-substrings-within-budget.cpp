class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int start=0;
        int end=0;
        int maxL=0;
       
        while(end<n){
            maxCost-=abs(s[end]-t[end]);
            while(maxCost<0){
                
                maxCost+=abs(s[start]-t[start]);
                start++;

            }
            maxL=max(maxL,end-start+1);
            end++;
        }
        return maxL;
    }
};