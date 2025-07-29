class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long n1=LONG_MIN;
        long n2=LONG_MIN;
        long n3=LONG_MIN;
        for(int n:nums){
            if(n==n1 || n==n2|| n==n3){
                continue;
            }
            if(n>n1){
                n3=n2;
                n2=n1;
                n1=n;
            }
           else if(n>n2){
                n3=n2;
                n2=n;
            }
            else if(n>n3){
                n3=n;
            }
        }
        return (int) (n3!=LONG_MIN?n3:n1);
    }
};