class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxL=0;
        vector<int> frequency(128,0);
        for(int end=0;end<s.size();end++){
            char currentChar=s[end];
            frequency[currentChar]++;
            while(frequency[currentChar]>1){
                frequency[s[start]]--;
                start++;
            }
            maxL=max(maxL,end-start+1);
            
        }
        return maxL;
        
    }
};