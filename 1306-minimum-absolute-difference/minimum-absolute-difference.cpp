class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minD=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            minD=min(minD,abs(arr[i]-arr[i+1]));

        }
        vector<vector<int>>ans;
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==minD){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
       return ans; 
    }
};