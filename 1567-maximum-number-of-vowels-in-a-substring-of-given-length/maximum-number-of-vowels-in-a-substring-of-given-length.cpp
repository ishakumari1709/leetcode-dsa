class Solution {
     private: bool isVowel(char c){
        if(c=='a' || c=='e'|| c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int count=0;
        int maxi=0;
        int start=0;
        int end=0;
        int n=s.size();
        while(end<n){
            if(isVowel(s[end])){
                count++;
            }
            while(end-start+1>k){
                if(isVowel(s[start])){
                    count--;
                }
                start++;
            }
            maxi=max(maxi,count);
            end++;
        }
        return maxi;
        
    }
};