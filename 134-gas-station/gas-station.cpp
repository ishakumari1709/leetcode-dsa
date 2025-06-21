class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int deficent=0;
        int balance=0;
        int index=0;
        for(int i=0;i<n;i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                deficent+=abs(balance);
                balance=0;
                index=i+1;
            }
        }
        if(balance-deficent>=0){
            return index;
        }else{
            return -1;
        }
        
    }
};