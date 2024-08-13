class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end());
        int maxarea=0;
        for(int i=1;i<n;i++){
            int curarea=points[i][0]-points[i-1][0];
            maxarea=max(curarea,maxarea);
        }
        return maxarea;
    }
};