class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mindiff=INT_MAX;
        vector<vector<int>>res;
        for(int i=1;i<n;i++){
            mindiff=min(mindiff,arr[i]-arr[i-1]);
        }
        for(int i=1;i<n;i++){
            if((abs(arr[i]-arr[i-1]))==mindiff) res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};