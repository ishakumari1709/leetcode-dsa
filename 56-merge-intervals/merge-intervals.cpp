class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(
            intervals.begin(), intervals.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[0] <
                       b[0];
            });
        int end = intervals[0][1];
        vector<vector<int>> answer;
        for (int j = 0, i = 0; i <= intervals.size(); i++) {
            if (i == intervals.size() || intervals[i][0] > end) {
                answer.push_back({intervals[j][0], end});
                j = i;
            }
            if (i != intervals.size()) {
                end = max(end, intervals[i][1]);
            }
        }
        return answer;
    }
};