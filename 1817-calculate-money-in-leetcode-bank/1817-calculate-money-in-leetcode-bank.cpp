class Solution {
public:
    int totalMoney(int n) {
        int money=0;
        int m=1;
        for(int i=1;i<=n;i++){
           money=money+m;
           if(i%7==0) m=i/7;
           m++;
        }
        return money;
    }
};