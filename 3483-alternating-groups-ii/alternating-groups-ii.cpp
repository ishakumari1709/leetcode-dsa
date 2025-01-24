class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int start=0;
        int end=1;
        int count=0;
        while(end<=n+k-2){
            if(colors[end%n]!=colors[(end-1)%n]){
            if(end-start+1==k){
                count++;
                start++;
            }
            }else{
              start=end;
            }
            end++;
        }
        return count;
        
    }
};