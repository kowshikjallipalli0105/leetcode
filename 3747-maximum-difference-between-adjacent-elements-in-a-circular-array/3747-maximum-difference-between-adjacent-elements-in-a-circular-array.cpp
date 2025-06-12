class Solution {
public:
    int maxAdjacentDistance(vector<int>& arr) {
        int n=arr.size();
        int maxdiff=INT_MIN;
        for(int i=1;i<n;i++){
            int diff=abs(arr[i]-arr[i-1]);
            maxdiff=max(diff,maxdiff);

        }
        int diff=abs(arr[n-1]-arr[0]);
        maxdiff=max(diff,maxdiff);
        return maxdiff;
    }
};