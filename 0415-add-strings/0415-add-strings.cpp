class Solution {
public:
    string addStrings(string num1, string num2) {
        string s;
        int carry=0;
        int i=0;
        int j=0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        while(i<num1.size()||j<num2.size()){
            if(i<num1.size()&&j<num2.size()){
                carry+=num1[i++]-'0';
                carry+=num2[j++]-'0';
            }
            else if(i<num1.size()){
                carry+=num1[i++]-'0';
            }
            else{
                carry+=num2[j++]-'0';
            }
            s.push_back(carry%10+'0');
            carry/=10;
        }
        if(carry!=0) s.push_back(carry+'0');
        reverse(s.begin(),s.end());
        return s;
    }
};