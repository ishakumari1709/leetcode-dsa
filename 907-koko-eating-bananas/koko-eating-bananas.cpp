class Solution {

    bool ispossible(vector<int>& piles,int mid,int h){
        long long time=0;
        for(int i=0;i<piles.size();i++){
            time+=ceil((double)piles[i]/mid);
        }
        return time<=h;
        
    }
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid=(start+end)/2;
            if(ispossible(piles,mid,h)){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
        
    }
};