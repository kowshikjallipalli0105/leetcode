class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>miss;
        int m=rolls.size();
        int have=(m+n)*mean;
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int req=have-sum;
        if(req<n||req>6*n){
            return miss;
        }
        int temp=n;
        for(int i=0;i<n;i++){
            int num=req/temp;
            if (num > 6) {
                num = 6;
            } else if (num < 1) {
                num = 1;
            }
            miss.push_back(num);
            req-=num;
            temp--;

        }
        return miss;
    }
};