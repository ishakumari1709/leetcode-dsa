class Solution {
    private: bool isPossible(int n,vector<int> batteries, long long mid){
        long long sum=0;
        for(long long battery:batteries){
            sum+=min(battery,mid);
        }
        return sum>=n*mid;

    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long start=*min_element(batteries.begin(),batteries.end());
        long long end=0;
        long long mid;
        for(long long battery: batteries){
            end+=battery;
        }

        while(start<=end){
            mid=(start+end)/2;
            if(isPossible(n,batteries,mid)){
                start=mid+1;
            }
            else{
                end=mid-1;
            }         
        }
       return end;  

    }
};