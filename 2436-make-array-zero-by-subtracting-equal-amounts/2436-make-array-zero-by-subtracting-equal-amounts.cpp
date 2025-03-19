class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        while (true) {
            int minVal = INT_MAX;
            for (int num : nums) {
                if (num > 0) minVal = min(minVal, num);
            }
            if (minVal == INT_MAX) break;
            for (int& num : nums) {
                if (num > 0) num -= minVal;
            }
            cnt++;
        }
        return cnt;
    }
};
