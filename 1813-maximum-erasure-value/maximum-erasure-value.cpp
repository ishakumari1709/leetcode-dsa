class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int start=0;
        int end;
        int score=0;
        int maxScore=0;
        unordered_set<int> seen;
        for(end=0;end<nums.size();end++){
            while(seen.count(nums[end])){
                 score-=nums[start];
                 seen.erase(nums[start]);
                 start++;

            }
            score+=nums[end];
            seen.insert(nums[end]);
            maxScore=max(maxScore,score);
           

        }
        return maxScore;
         
        
    }
};