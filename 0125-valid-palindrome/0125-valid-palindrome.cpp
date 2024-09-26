class Solution {
public:
    bool isPalindrome(string s) {
        string lower;
        for(auto i:s){
            i=tolower(i);
            if(i>='a'&& i<='z' ||i>=0&&i<=9){
                lower+=i;
            }
        }
        int start=0;
        int end=lower.length()-1;
        while(start<=end){
            if(lower[start]!=lower[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};