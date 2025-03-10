class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        vector<string> distinct;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(map[arr[i]]==1){
                distinct.push_back(arr[i]);
            }
        }
        if (k > distinct.size()) return "";

        return distinct[k-1];

        
    }
};