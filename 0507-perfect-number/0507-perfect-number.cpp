class Solution {
public:
    bool isdivisor(int i,int n){
        if(n%i ==0){
            return true;
        }
        return false;
    }
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1;i<=num/2;i++){
            if(isdivisor(i,num)){
                sum+=i;
            }
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};