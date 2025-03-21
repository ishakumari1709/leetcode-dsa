class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        vector<int> prefix(n,0);
        prefix[n-1]=shifts[n-1];
        for(int i=n-2;i>=0;i--){
            prefix[i]=(prefix[i+1]+shifts[i])%26;
        }
        for(int i=0;i<n;i++){
            int shift=prefix[i];
            int newChar=(s[i]-'a'+shift)%26;
            s[i]='a'+newChar;




        }
        return s;

        
    }
};