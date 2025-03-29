class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int start=0;
        int end=0;
        int n=s.size();
        int maxi=0;
        while(end<n){
            freq[s[end]]++;
            while(freq[s[end]] > 1){
                freq[s[start]]--;
              start++;
               
            }
            maxi=max(maxi,end-start+1);
            end++;

            
        }
        return maxi;
        
    }
};