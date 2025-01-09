class Solution {
    private:
       bool isPossible(vector<int> weights,int D,int capacity ){
        int total=0,days=1;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>capacity){
                return false;
            }
            else if(total+weights[i]<=capacity){
                total+=weights[i];
            }
            else{
                ++days;
                total=weights[i];
            }
        }
            return days<=D;
        }
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int start=1,end=sum;
        while(start<=end){
            int capacity=(start+end)/2;
            if(isPossible(weights,days,capacity)){
                end=capacity-1;
            }
            else{
                start=capacity+1;
            }
        }

        return start;
    }
};