class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         unordered_map<string,int> coun;
        for(auto& v:arr) ++coun[v];
        for(auto& v:arr){
            if(coun[v]==1){
                --k;
                if(k==0) return v;
            }
        }
        return "";
    }
};