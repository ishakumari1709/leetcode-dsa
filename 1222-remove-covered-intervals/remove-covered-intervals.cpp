class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int res=0,left=-1,right=-1;
        for(auto& val: intervals){
            if(val[0]>left&&val[1]>right){
                left=val[0];
                res++;
            }
            right=max(right,val[1]);
        }
           return res;
        
    }
};