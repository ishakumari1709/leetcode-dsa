class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> prefixSum(n+1,0);
        prefixSum[0]=gain[0];
        for(int i=1;i<gain.size();i++){
            prefixSum[i]=gain[i]+prefixSum[i-1];
        }
        return *max_element(prefixSum.begin(),prefixSum.end());
        
    }
};