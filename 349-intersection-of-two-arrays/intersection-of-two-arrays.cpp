class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n1(nums1.begin(), nums1.end());
        unordered_set<int> n2;
        vector<int> interS;

        for(int i=0;i<nums2.size();i++){
            if(n1.count(nums2[i])){
            n2.insert(nums2[i]);
            }
        }
        for(int num : n2) {
            interS.push_back(num);
        }
      return interS;  
    }
};