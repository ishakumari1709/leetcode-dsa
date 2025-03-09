class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        //maping int with string
        //sort
        //output
        unordered_map<int,string> map;
        for(int i=0;i<names.size();i++){
            map[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<heights.size();i++){
            names[i]=map[heights[i]];
        }
        return names;

        
    }
};