class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int n=cost.size(),total=0;
        for(int i=0;i<n;i++){
            if((i+1)%3==0){
                continue;
            }
            total+=cost[i];
        }
        return total;

    }
};