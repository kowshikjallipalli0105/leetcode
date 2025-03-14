class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(auto &ch:s){
            mp[ch]++;
        }
        int del=0;
        unordered_set<int>u_freq;
        for(auto &i:mp){
            int freq=i.second;
            while(freq>0 && u_freq.find(freq)!=u_freq.end()){
                freq--;
                del++;
            }
            u_freq.insert(freq);
        }
        return del;
    }
};