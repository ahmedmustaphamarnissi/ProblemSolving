class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> prefixSum(2060);
        for (auto log : logs) prefixSum[log[0]]++, prefixSum[log[1]]--;
        for (int i = 1951; i <= 2050; i++) prefixSum[i] += prefixSum[i - 1];
        int cnt = 0, year = 1950;
        for (int i = 1950; i <= 2050; i++) {
            if (cnt < prefixSum[i]) cnt = prefixSum[i], year = i;
        }
        return year;
    }
};