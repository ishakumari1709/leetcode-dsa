class Solution {
public:
    int maxProfit(int k, vector<int>& arr) {
         int n=arr.size();
        vector<vector<int>> ahead(2, vector<int>(k+1, 0));
        vector<vector<int>> cur(2, vector<int>(k+1, 0));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<2;buy++){
                for(int limit=1;limit<=k;limit++){
                    if(buy==1){
                        cur[buy][limit]=max(-arr[ind]+ahead[0][limit],0+ahead[1][limit]);
                    }else{
                        cur[buy][limit]=max(arr[ind]+ahead[1][limit-1],0+ahead[0][limit]);
                    }
                }
                ahead=cur;
            }
        }
        return cur[1][k];
    }
};