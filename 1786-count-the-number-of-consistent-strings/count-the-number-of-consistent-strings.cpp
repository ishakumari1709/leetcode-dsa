class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> alloweds;
        for (char c : allowed) {
            alloweds[c] = 1; 
        }
        int count=0;
        for(string& word:words){
            bool consistent=true;
            for(char c: word){
                if(alloweds.find(c)==alloweds.end()){
                    consistent=false;
                    break;
                }
                
            }
            if(consistent) count++; //increement count only if word is fully checked
        }
return count;
        } 
        
    
};