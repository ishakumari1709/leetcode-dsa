class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int n=firstList.size();
        int m=secondList.size();
        int i=0;
        int j=0;
        int start=0;
        int end = 0;
        while(i<n && j<m){

            start=max(firstList[i][0],secondList[j][0]);
            end=min(firstList[i][1],secondList[j][1]);
            if(start<=end){
                result.push_back({start,end});
            }
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};