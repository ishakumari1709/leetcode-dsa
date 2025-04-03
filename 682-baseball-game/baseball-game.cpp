class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                sum -= s.top();
                s.pop();
            } 
            else if (operations[i] == "D") {
                s.push(2 * s.top());
                sum += s.top();
            } 
            else if (operations[i] == "+") {
                int a = s.top(); s.pop();
                int b = s.top();
                s.push(a);
                s.push(a + b);
                sum += s.top();
            } 
            else {
                s.push(stoi(operations[i]));
                sum += s.top();
            }
        }
        return sum;
    }
};