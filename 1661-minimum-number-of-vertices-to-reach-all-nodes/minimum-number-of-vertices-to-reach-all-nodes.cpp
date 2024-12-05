class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>visited(n,false);
        for(int i=0;i<edges.size();i++){
            visited[edges[i][1]]=true;
        }
        vector<int> result;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                result.push_back(i);
            }
        }
        return result;
    }
};