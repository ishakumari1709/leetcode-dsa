class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> result(n, 0);
        for (const auto& booking : bookings) {
            int first = booking[0] - 1; 
            int end = booking[1] - 1;
            int seats = booking[2];
            for (int i = first; i <= end; i++) {
                result[i] += seats;
            }
        }
        return result;

        
    }
};