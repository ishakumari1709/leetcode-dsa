class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--){
            int ind=i%n;
            while(!s.empty() && s.top()<=nums[ind]){
                s.pop();
            }
            if(i<n ){
                if(!s.empty() ){
                    ans[i]=s.top();
                }

            }
            s.push(nums[ind]);


        }
        return ans;
        
    }
};