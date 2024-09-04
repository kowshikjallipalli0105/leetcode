class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) return "0";
        bool isneg=num<0;
        num=abs(num);
        string base="";
        while(num>0){
            base+=to_string(num%7);
            num/=7;
        }
        if(isneg){
            base+="-";
        } 
        reverse(base.begin(),base.end());
        return base;
    }
};