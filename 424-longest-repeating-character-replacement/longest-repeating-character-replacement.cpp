class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int end=0;
        int maxFreq=0;
        int maxL=0;
        vector<int> hash(26,0);
        while(end<s.length()){
            hash[s[end]-'A']++;
            maxFreq=max(maxFreq,hash[s[end]-'A']);
            if(end-start+1-maxFreq>k){
                hash[s[start]-'A']--;
                start++;

            }
            maxL=max(maxL,end-start+1);
            end++;

            

        }
        return maxL;
        
    }
};