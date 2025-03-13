class Solution {
public:
int sum(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        sum+=rem;
    }
    return sum;
}
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;

        for(int i=1;i<=n;i++){
            int digit_sum=sum(i);
            mp[digit_sum]++;
        }  
        int maxi = INT_MIN;
        for(auto& ele : mp)
        {
            if(ele.second > maxi)
            {
                maxi = max(maxi, ele.second);
            }
        }
        int cnt = 0;
        for(auto& ele : mp)
        {
            if(ele.second == maxi)
                cnt++;
        }
        return cnt;
        
    }
};