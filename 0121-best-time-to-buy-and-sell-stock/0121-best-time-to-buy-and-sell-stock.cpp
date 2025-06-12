class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size(),mini=prices[0],maxdiff=0;
       for(int i=1;i<n;i++){
            if(prices[i]<mini) mini=prices[i];
            int diff=prices[i]-mini;
            maxdiff=max(diff,maxdiff);
       }
       return maxdiff;
    }
};