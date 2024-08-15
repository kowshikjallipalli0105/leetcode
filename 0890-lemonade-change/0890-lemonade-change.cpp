class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int c5=0,c10=0;
        for(auto& bill:bills){
            if(bill==5){
                c5++;
            }
            else if(bill==10 && c5>=1){
                c10++;
                c5--;
            }else if(bill==20 && c5>=1 and c10>=1){
                c10--;
                c5--;
            }
            else if(bill==20 && c5>=3){
                c5=c5-3;
            }
            else{
                return false;
            }

        }
        return true;

    }
};