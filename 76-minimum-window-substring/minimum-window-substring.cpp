class Solution {
public:
    string minWindow(string s, string t) {
        
        int frequencyT[128]={0};
        int frequencyS[128]={0};
        int lengthS = 0;
        int lengthT = 0;
        int start=0,end=0,l=0;
        int start_i=-1,end_i=-1;
        int minLength=INT_MAX;
        if(t.length()>s.length()){
            return "";
        }
         for(int i=0;i<t.size();i++){
            char c= t[i];
            ++frequencyT[c]; //this increase the freqeuncy of each character 

            if (frequencyT[c]== 1) {  
                ++lengthT;// and this increase the length of t 
            }
        

        }
        while(end<s.length()){
            char c=s[end];
            ++frequencyS[c];
            if(frequencyS[c]==frequencyT[c]){
                ++lengthS;
            }
            while(lengthS==lengthT){
                if(end - start+1 < minLength){
                    start_i=start;
                    end_i=end;
                    minLength=end-start+1;
                }
                char ch=s[start]; //to remove the chadacter
                if(frequencyS[ch]==frequencyT[ch]){
                    --lengthS;
                }
                --frequencyS[ch];
                ++start;
            }
            ++end;
        }
       return start_i == -1 ? "" : s.substr(start_i, minLength);   
    }
};