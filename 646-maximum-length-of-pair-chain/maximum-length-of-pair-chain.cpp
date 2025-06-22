class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int length=1;
        int current=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(current<pairs[i][0]){
                current=pairs[i][1];
                length++;
            }else{
                current=min(current,pairs[i][1]);
            }
        }
        return length;

        
        
    }
};