class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        long long sum = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        int largest = arr[i];
        int smallest = arr[i];
        for(int j = i; j < n; j++) {
            largest = max(largest, arr[j]);
            smallest = min(smallest, arr[j]);
            sum += (largest - smallest);
        }
    }
    return sum;
        
    }
};