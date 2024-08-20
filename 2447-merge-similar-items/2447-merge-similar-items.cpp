class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>res;
        int arr[1001]={};
        for( auto& x:items1){
            arr[x[0]]=x[1];
        }
        for(auto& y:items2){
            if(arr[y[0]]){
                arr[y[0]]+=y[1];
            }
            else{
                arr[y[0]]=y[1];
            }
        }
        for(int i=0;i<1001;i++){
            if(arr[i]){
                res.push_back({i,arr[i]});
            }
        }
        return res;
    }
};