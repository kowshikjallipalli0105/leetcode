class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),diff=0,maxp=0,mini=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<mini) mini=prices[i];
            diff=prices[i]-mini;
            if(diff>maxp) maxp=diff;
        }
        return maxp;
    }
};