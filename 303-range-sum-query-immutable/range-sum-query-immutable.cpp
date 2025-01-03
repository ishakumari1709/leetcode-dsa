class NumArray {
    
public:
vector<int> PrefixS;

    
    NumArray(vector<int>& nums) {
        int n =nums.size();
        PrefixS=vector<int>(n+1,0);
        for(int i=0;i<n;i++){
            PrefixS[i+1]=nums[i]+PrefixS[i];
        }

        
    }
    
    int sumRange(int left, int right) {
        
        return PrefixS[right+1]-PrefixS[left];
            
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */