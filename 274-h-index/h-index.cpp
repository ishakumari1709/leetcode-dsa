class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            
            if(citations[i]>=n){
                freq[n]++;
                
            }else{
                freq[citations[i]]++;
            }
        }

  int HIndex = 0, total = 0;
        for (int i = n; i >= 0; i--) {
            total += freq[i];  
            if (total >= i) {
                HIndex = i;  
                break;
            }
        }
        
        return HIndex;
    }
 
};