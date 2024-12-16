class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long res=0;
        if(x<0) return 0;
        while(temp!=0){
            res=res*10+temp%10;
            temp/=10;
        }
        if(res==x){
            return 1;
        }
        return 0;
    }
};