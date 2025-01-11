class Solution {
    private: bool isPossible(vector<int> batteries, long long mid,int n){
        long long sum=0;
        for(long long battery:batteries){
            sum+=min(battery,mid);
        }
        return sum>=mid*n;
    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long start=*min_element(batteries.begin(),batteries.end());
        long long end=0;
        for(long long battery: batteries){
            end+=battery;
        }
       long long mid;
        while(start<=end){
            mid=(start+end)/2;
            if(isPossible(batteries,mid,n)){
                start=mid+1;
            }
            else{
                end=mid-1;
            }         
        }
       return end;        
    }
};