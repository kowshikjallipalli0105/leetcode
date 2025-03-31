class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        // sort(nums.begin(),nums.end());
        map<int,int>mp;
        vector<int>res;
        for(auto &i:nums){
            for(auto &j:i){
                mp[j]++;
            }
        }
        int n=nums.size();
        for(auto &i:mp){
            if(i.second==n) res.push_back(i.first);
        }
        sort(res.begin(),res.end());
        return res;
    }

};