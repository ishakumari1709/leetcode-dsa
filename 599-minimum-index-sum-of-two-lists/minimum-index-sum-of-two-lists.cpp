class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<int,vector<string>>map;
        int mini_index=INT_MAX;
        int n=list1.size();
        int m=list2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(list1[i]==list2[j]){
                map[i+j].push_back(list1[i]);
                }
            }
        }
        for(auto x: map){
            return x.second;
        }
        return {""};
    }
};