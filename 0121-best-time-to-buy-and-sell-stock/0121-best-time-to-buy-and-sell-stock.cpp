class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,start=prices[0];
        for(int i=1;i<prices.size();i++){
            maxi = max(maxi,prices[i]-start);
            start = min(prices[i],start);
        }
        return maxi;
    }
};