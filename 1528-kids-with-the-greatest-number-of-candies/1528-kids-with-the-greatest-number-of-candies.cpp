class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>cand;
        for(auto& i:candies){
            if(i+extraCandies>=maxi){
                cand.push_back(true);
            }
            else{
                cand.push_back(false);
            }
        }
        return cand;
    }
};