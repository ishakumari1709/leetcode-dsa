class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxL=0;
        vector<int> freqIdx(128, -1);
        for(int end=0;end<s.length();end++){
            char currChar=s[end];
            if(freqIdx[currChar]>=start){
                start=max(start,freqIdx[currChar]+1);
            }
            freqIdx[currChar]=end;
            maxL=max(maxL,end-start+1);
        }
        return maxL;

        }
            

            
        
};