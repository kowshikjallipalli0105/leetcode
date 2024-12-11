class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    res.push_back({i,j});
                }
            }
        }
        for(auto& pos:res){
                int row=pos[0];
                int col=pos[1];
                for(int j=0;j<n;j++){
                    matrix[row][j]=0;

                }
                for(int i=0;i<m;i++){
                    matrix[i][col]=0;
                }
        }
    }
};