class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        //map[0]=1;
        int ans=0;
        int sum=0;
        vector<int> ar(k,0);
        ar[0]=1;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;

        if (rem<0) {
                rem+=k;
            }
            if(ar[rem]!=0){
                ans+=ar[rem];
            }
            ar[rem]++;
        
        }

        return ans;
    }
};