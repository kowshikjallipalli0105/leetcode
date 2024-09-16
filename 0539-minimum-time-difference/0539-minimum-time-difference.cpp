class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minute(n);
        for (int i = 0; i < n; i++) {
            string time = timePoints[i];
            string hourstr = time.substr(0, 2);
            string minstr = time.substr(3, 4);
            int hour = stoi(hourstr);
            int min = stoi(minstr);
            minute[i] = hour * 60 + min;
        }
        sort(minute.begin(), minute.end());
        int res = INT_MAX;
        for (int i = 1; i < n; i++) {
        res=min(res,minute[i]-minute[i-1]);
        }
        return min(res,24*60-minute[n-1]+minute[0]);
    }
};