class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int len=s.length();
        string str;
        for(auto& i:s){
            if((i<=122&&i>=97) ||(i<=57 &&i>=48)){
                str+=i;
            }
        }
        int low=0,high=str.length()-1;
        while(low<=high){
            if(str[low]!=str[high]) return false;
            else{
                low++;
                high--;
            }
            
        }
        return true;
    }
};