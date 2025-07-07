class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n =arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int maxi=-1;
        for(auto & i:mp){
            if(i.first == i.second){
                maxi=max(i.first,maxi);
            }
        }
        return maxi;
    }
};