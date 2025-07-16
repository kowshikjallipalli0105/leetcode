class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int& i:arr){
            mp[i]++;
        }
        unordered_set<int> set;
        for(auto& i:mp){
            if(set.find(i.second)!=set.end()){
                return false;
            }
            set.insert(i.second);
        }

        return true;
    }
};