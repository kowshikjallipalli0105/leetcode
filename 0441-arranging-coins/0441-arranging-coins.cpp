class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int temp=n;
        for(int i=1;i<=n;i++){
            temp=temp-i;
            if(temp<0){
                return i-1;
            }
        }
        return 1;
    }
};