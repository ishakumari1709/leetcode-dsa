class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long s = 1, e = 0, mid = 0, sum = 0;
        for (long long battery : batteries) {
            sum += battery;
        }
        e = sum /n;
        while (s <= e) {
            mid = (s + e) / 2;
            long long total_time = 0;
            for (long long battery : batteries) {
                total_time += min(battery, mid);
            }
            if (total_time >= mid * n) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return e;
    }
};

