class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> left(n);
        vector<int> right(n);
        // previous smaller
        for(int i = 0 ; i < n ;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            left[i] = (st.empty()) ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        //next smaller
        for(int i = n-1;i>=0;i--){
             while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            } 
            right[i] = (st.empty()) ? n : st.top();
            st.push(i);
        }

        int max_area = 0;
        for(int i = 0 ;i < n;i++){
            int area = heights[i] * (right[i] - left[i] - 1);
            max_area = max(max_area,area);
        }
        return max_area;

        
    }
};