class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int start=0;
        int end=0;
        int maxLength=0;
        while(end<s.size()){
            int cost =abs(s[end]-t[end]);
            maxCost-=cost;// Calculate the cost to change s[end] to t[end]
            while(maxCost<0){ // If maxCost becomes negative, shrink the window from the start
                maxCost+=abs(s[start]-t[start]);
                start++;// Move the start pointer forward

            }
            maxLength=max(maxLength,(end-start+1));
            end++; // Expand the window by moving end pointer
        }
        return maxLength;
    }
};