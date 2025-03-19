class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        cout<<s;
        vector<int>number;
        for( auto &i:s){
            number.push_back(i-'0');
        }
        sort(number.begin(),number.end());
        int size=number.size();
        int num1=0,num2=0;
        for(int i=0;i<size;i++){
            if(i%2==0) num1=num1*10+number[i];
            else num2=num2*10+number[i];
        }

        return num1+num2;
    }
};