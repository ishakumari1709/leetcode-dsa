class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> right(n,n); //to store next smaller
        vector<int> left(n,-1);//to store previous smaller
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                right[i]=s.top();
            }
            s.push(i);
        }
        while (!s.empty()) { //clear stack for resuse
            s.pop();
        }
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                left[i]=s.top();
            }
            s.push(i);
        }
        int maxarea = 0;
        for (int i = 0; i < n; i++) {
            int h = heights[i];                            
            int width = (right[i] - left[i] - 1);          
            int area = h * width;                          
            maxarea = max(maxarea, area);                 
        }

        return maxarea; 

        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
        int maxA = 0;
        vector<int> heights(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') heights[j]++;
                else heights[j] = 0;
            }
            maxA = max(maxA, largestRectangleArea(heights));
        }
        return maxA;
        
    }
};