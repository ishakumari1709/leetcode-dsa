class Solution {
public:
void func(vector<int>& nums,vector<int>& sub,vector<vector<int>>&result,int n,int i){
    if(i>=n){
        result.push_back(sub);
        return;
    }
    sub.push_back(nums[i]);
    func(nums,sub,result,n,i+1);
    sub.pop_back();
    func(nums,sub,result,n,i+1);
    return ;


}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sub;
        int n=nums.size();
        int i=0;
        func(nums,sub,result,n,i);
        return result;

        
    }
};