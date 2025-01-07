class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);
        prefix[0] = arr[0];
        for (int i = 1; i < n; ++i){
            prefix[i] = prefix[i - 1] + arr[i];
        }
        int totalSum = 0;
        for(int length= 1; length <=n; length+=2){
            for(int start =0; start+length <= n; ++start){
                int end=start+length-1;
                if(start>0){
                    totalSum+=prefix[end]-prefix[start-1];
                }
                else{
                   totalSum+=prefix[end];

                }
            }
        }
        
        return totalSum;
        
    }
};