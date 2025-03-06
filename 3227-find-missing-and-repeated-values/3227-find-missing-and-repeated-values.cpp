class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int, int> mp;
        for (auto &row : grid) {
            for (auto &num : row) {
                mp[num]++;
            }
        }

        int repeated = -1, missing = -1;
        for (int i = 1; i <= n * n; i++) {
            if (mp[i] == 2) repeated = i;
            if (mp[i] == 0) missing = i;
        }

        return {repeated, missing};
    }
};
