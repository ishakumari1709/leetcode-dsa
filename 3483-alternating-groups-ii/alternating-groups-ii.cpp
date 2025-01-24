class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int start=0;
        int end=1;
        int count=0;
        int window=1;
        while(end<=n+k-2){
            if(colors[end%n]!=colors[(end-1)%n]){
                window++;
            if(window>=k){
                count++;
                start++;
            }
            }else{
              start=end;
              window=1;
            }
            end++;
        }
        return count;
    }
};